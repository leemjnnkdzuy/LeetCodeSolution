#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

int maxChunksToSorted(vector<int>& arr) {
	int res;

	sort(arr.begin(), arr.end());

	return res;
}

void func(){
	vector<int> arr;
	int a;
	while (cin >> a)
	{
		arr.push_back(a);
	}

	cout << maxChunksToSorted(arr);
}

int main(){

	return 0;
}