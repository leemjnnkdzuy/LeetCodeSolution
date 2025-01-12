#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;


#define DEBUG 
#ifdef DEBUG
    #define D(x) x;
#else
    #define D(x) ;
#endif

#define FI "input.INP"

int romanToInt(string str) {
    vector<pair<int, string>> arr = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "CX"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    int res = 0;
    vector<string> arrTemp;
    
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'I' && str[i+1] == 'V')
        {
            arrTemp.push_back("IV");
            i++;
        }
        else if (str[i] == 'I' && str[i+1] == 'X')
        {
            arrTemp.push_back("IX");
            i++;
        }
        else if (str[i] == 'X' && str[i+1] == 'L')
        {
            arrTemp.push_back("XL");
            i++;
        }
        else if (str[i] == 'X' && str[i+1] == 'C')
        {
            arrTemp.push_back("XC");
            i++;
        }
        else if (str[i] == 'C' && str[i+1] == 'D')
        {
            arrTemp.push_back("CD");
            i++;
        }
        else if (str[i] == 'C' && str[i+1] == 'M')
        {
            arrTemp.push_back("CM");
            i++;
        }
        else
        {
            arrTemp.push_back(string(1, str[i]));
        }
        
    }

    for (int i = 0; i < arrTemp.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arrTemp[i] == arr[j].second)
            {
                res += arr[j].first;
            }
        }
    }
    
    return res;
}

int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;


    cout << romanToInt(str);

    return 0;
}

    