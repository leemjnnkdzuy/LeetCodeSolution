#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

void moveZeroes(vector<int> &nums)
{
	vector<int> vec(nums.size(), 0);
	int j = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != 0)
		{
			vec[j] = nums[i];
			j++;
		}
	}

	nums = vec;
}

void func()
{
	vector<int> nums = {0, 1, 0, 3, 12};

	moveZeroes(nums);

	for (auto index : nums)
		cout << index << " ";
}

int main()
{
	test(true);
	func();
	return 0;
}