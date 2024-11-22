#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

// _____ ____   ___  __  __    __     ___   _ _   _    __        _____ _____ _   _ 
//|  ___|  _ \ / _ \|  \/  |   \ \   / / | | | | | |   \ \      / /_ _|_   _| | | |
//| |_  | |_) | | | | |\/| |    \ \ / /| |_| | | | |    \ \ /\ / / | |  | | | |_| |
//|  _| |  _ <| |_| | |  | |     \ V / |  _  | |_| |     \ V  V /  | |  | | |  _  |
//|_|   |_|_\_\\___/|_|__|_|      \_/  |_| |_|\___/       \_/\_/  |___| |_| |_| |_|
// _     _____     _______ 
//| |   / _ \ \   / / ____|
//| |  | | | \ \ / /|  _|  
//| |__| |_| |\ V / | |___ 
//|_____\___/  \_/  |_____|

using namespace std;


#define DEBUG 
#ifdef DEBUG
    #define D(x) x;
#else
    #define D(x) ;
#endif

#define FI "input.INP"


long long getResult(long long a, long long b, long long M) {
    long long result = 0; 
    a = a % M;
    while(b > 0) {
        if (b % 2 == 1) {
            result = (result + a) % M;
        }
        a = (a * 2) % M;
        b /= 2;
    }
    return result;
}

long long func(long long B, long long P, long long M) {
    if(P == 0) {
        return 1;
    }
    long long half = func(B, P / 2, M);
    long long result = getResult(half, half, M);
    if(P % 2 == 1) {
        result = getResult(result, B, M);
    }
    return result;
}

int main() {
    freopen(FI, "r", stdin);
    long long t, B, P, M;
    cin >> t;
    while(t--){
        cin >> B >> P >> M;
        cout << func(B, P, M) << endl;
    }
    return 0;
}
