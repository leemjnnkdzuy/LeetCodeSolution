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

string longestPalindrome(string str) {
        string strTemp = "";

        if (str.size() <= 1) {
            return str;
        }else if (str.size() == 2) {
            if (str[0] == str[1]) {
                return str;
            } else {
                strTemp = str[0];
                return strTemp;
            }
        }

        for (int i = 0; i < str.size(); i++) {
            if (i > 0 && i + 1 < str.size() && str[i - 1] == str[i + 1]) {
                int left = i - 1;
                int right = i + 1;
                while (left >= 0 && right < str.size() && str[left] == str[right]) {
                    left--;
                    right++;
                }
                if (right - left - 1 > strTemp.size()) {
                    strTemp = str.substr(left + 1, right - left - 1);
                }
            }
            if (i + 1 < str.size() && str[i] == str[i + 1]) {
                int left = i;
                int right = i + 1;
                while (left >= 0 && right < str.size() && str[left] == str[right]) {
                    left--;
                    right++;
                }
                if (right - left - 1 > strTemp.size()) {
                    strTemp = str.substr(left + 1, right - left - 1);
                }
            }
        }

        if (strTemp.size() == 0) {
            strTemp = str[0];
        }

        return strTemp;
    }

int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    cout << longestPalindrome(str) << endl;

    return 0;
}

    