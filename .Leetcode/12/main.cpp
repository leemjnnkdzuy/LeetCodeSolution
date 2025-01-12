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


string intToRoman(int num){
    vector<pair<int, string>> arr = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "CX"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    int temp = num, i = 0;
    string res = "";

    while (temp > 0)
    {
        if (temp >= arr[i].first)
        {
            res += arr[i].second;
            temp -= arr[i].first;
        }
        else
        {
            i++;
        }
    }
    
    return res;
}

int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    string res;
    cin >> num;

    res = intToRoman(num);
    for(int i = 0; i < res.size(); i++){
        cout << res[i];
    }
    return 0;
}