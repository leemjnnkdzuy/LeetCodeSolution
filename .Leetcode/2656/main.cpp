#include <iostream>
#include <vector>
#include <algorithm>

#define FI "input.INP"

using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

int maximizeSum(vector<int> &nums, int k)
{
	int res;
	vector<int> temp = sort(nums.begin(), nums.end());

	for (int i = 0; i < k; i++)
	{
		vector<int> temp = sort(nums.begin(), nums.end());
		nums[nums.size() - 1]++;
	}

	for (int i = 0; i < nums.size(); i++)
	{
		res += nums[i];
	}

	return res;
}

void func()
{
	vector<int> nums = {1, 2, 3, 4, 5};
	int k;

	cout << maximizeSum(nums, k);
}

int main()
{
	test(true);
	func();
	return 0;
}