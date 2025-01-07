#include <bits/stdc++.h>
#define FI "input.INP"

using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

int hammingWeight(int n) {
    int ans = 0;
    while (n != 0) {
        ans += (n & 1);
        n >>= 1;
    }
    return ans;
}

void func(){
	int n;
	cin >> n;
	cout << n << " : " << hammingWeight(n);
}
int main(){
	test(true);
	func();
	return 0;
}