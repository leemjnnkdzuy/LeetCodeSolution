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


string longestDiverseString(int a, int b, int c) {
    string happy = "";
    bool start;
    vector<pair<char, int>> arr = {{'a', a}, {'b', b}, {'c', c}};

    while (1) {
        start = false;
        
        sort(arr.begin(), arr.end(), [](pair<char, int>& p1, pair<char, int>& p2) {
            return p1.second > p2.second;
        });

        
        for (int i = 0; i < 3; ++i) {

            if (arr[i].second == 0) {
                continue;
            }
            int n = happy.size();
            if (n >= 2) {
                if (happy[n - 1] == arr[i].first && happy[n - 2] == arr[i].first)
                {
                    continue;
                }
            }

            happy += arr[i].first;
            arr[i].second--;
            
            start = true;
            break;
        }

        if (!start) {
            break;
        }
    }

    return happy;
}


int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int a, b, c;
    cin >> a >> b >> c;

    str = longestDiverseString(a, b, c);

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    

    return 0;
}

    