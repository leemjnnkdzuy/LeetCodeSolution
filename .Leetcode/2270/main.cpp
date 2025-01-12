#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

int waysToSplitArray(vector<int>& nums) {
	int res = 0;
    vector<long long> temp(nums.size());
    temp[0] = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        temp[i] = temp[i - 1] + nums[i];
    }

        
    for (int i = 0; i < nums.size() - 1; i++) {
        long long left = temp[i];
        long long right = temp[nums.size() - 1] - temp[i];

        if (left >= right) {
            res++;
        }
    }

    return res;
}

void func(){
	int a;
	vector<int> vec;

	while(cin >> a)
		vec.push_back(a);

	cout << waysToSplitArray(vec);
}

int main(){
	test(true);
	func();
	return 0;
}