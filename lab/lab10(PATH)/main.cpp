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

struct Locale{
    int x;
    int y;
    string direction;
};

void func(int n, int d){
    string control;
    int length, step = 0;
    Locale locale = {0, 0, "phai"};

    for(int i = 0; i < n; i++){
        cin >> control >> length;
        step += length*d;
        
        if (locale.direction == "phai") {
            if (control == "F") {
                locale.x += length * d;
            } else if (control == "R") {
                locale.y -= length * d;
                locale.direction = "xuong";
            } else if (control == "L") {
                locale.y += length * d;
                locale.direction = "len";
            }
        } else if (locale.direction == "xuong") {
            if (control == "F") {
                locale.y -= length * d;
            } else if (control == "R") {
                locale.x -= length * d;
                locale.direction = "trai";
            } else if (control == "L") {
                locale.x += length * d;
                locale.direction = "phai";
            }
        } else if (locale.direction == "trai") {
            if (control == "F") {
                locale.x -= length * d;
            } else if (control == "R") {
                locale.y += length * d;
                locale.direction = "len";
            } else if (control == "L") {
                locale.y -= length * d;
                locale.direction = "xuong";
            }
        } else if (locale.direction == "len") {
            if (control == "F") {
                locale.y += length * d;
            } else if (control == "R") {
                locale.x += length * d;
                locale.direction = "phai";
            } else if (control == "L") {
                locale.x -= length * d;
                locale.direction = "trai";
            }
        }
    }

    cout << step << endl;
    cout << locale.x << " " << locale.y << endl;
}

int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, d;
    cin >> t;
    while(t--){
        cin >> n >> d;
        func(n, d);
    }
    return 0;
}
