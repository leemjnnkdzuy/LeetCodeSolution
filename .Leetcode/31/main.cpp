#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

void nextPermutation(vector<int> &nums)
{
	int n = nums.size(), i = n - 2;

	while (i >= 0 && nums[i] >= nums[i + 1])
		i--;

	if (i >= 0)
	{
		int j = n - 1;
		while (nums[j] <= nums[i])
			j--;
		swap(nums[i], nums[j]);
	}

	reverse(nums.begin() + i + 1, nums.end());
}

void func()
{
	int a;
	vector<int> nums;

	while (cin >> a)
	{
		nums.push_back(a);
	}

	nextPermutation(nums);

	for (auto &index : nums)
		cout << index << " ";
}

int main()
{
	test(true);
	func();
	return 0;
}