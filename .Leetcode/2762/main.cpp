#include <bits/stdc++.h>
#define FI "input.INP"

using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

long long continuousSubarrays(vector<int>& nums) {
    int n = nums.size();
    int start = 0;
    int totalSubarrays = 0;

    deque<int> minDeque;
    deque<int> maxDeque;

    for (int end = 0; end < n; ++end) {
        while (!minDeque.empty() && minDeque.back() > nums[end]) minDeque.pop_back();
        while (!maxDeque.empty() && maxDeque.back() < nums[end]) maxDeque.pop_back();
        minDeque.push_back(nums[end]);
        maxDeque.push_back(nums[end]);

        while (!minDeque.empty() && !maxDeque.empty() && maxDeque.front() - minDeque.front() > 2) {
            if (nums[start] == minDeque.front()) minDeque.pop_front();
            if (nums[start] == maxDeque.front()) maxDeque.pop_front();
            start++;
        }

        totalSubarrays += (end - start + 1);
    }

    return totalSubarrays;
}


void func(){
	vector<int> nums;
	int a;
	while (cin >> a){
		cout << a << " ";
		nums.push_back(a);
	}

	cout << continuousSubarrays(nums);
}

int main(){
	test(true);
	func();
	return 0;
}
