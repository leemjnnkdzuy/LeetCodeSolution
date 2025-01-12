#include <iostream>
#include <cmath>

using namespace std;

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

long long solve(long long B, long long P, long long M) {
    if(P == 0) {
        return 1;
    }
    long long half = solve(B, P / 2, M);
    long long result = getResult(half, half, M);
    if(P % 2 == 1) {
        result = getResult(result, B, M);
    }
    return result;
}

int main() {
    freopen("REMAINDER.INP", "r", stdin);

    long long B, P, M;
    cin >> B >> P >> M;
    cout << solve(B, P, M) << endl;
    return 0;
}

