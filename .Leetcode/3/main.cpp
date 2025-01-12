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


int lengthOfLongestSubstring(string s) {
    int ans = 0, temp = 0;
    map<char, int> map;

    for (int i = 0; i < s.size(); i++) {
        if (map.find(s[i]) != map.end() && map[s[i]] >= temp) {
            temp = map[s[i]] + 1;
        }
        ans = max(ans, i - temp + 1);
        map[s[i]] = i;
    }

    return ans;
}

int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    cout << lengthOfLongestSubstring(str) << endl;

    return 0;
}

    