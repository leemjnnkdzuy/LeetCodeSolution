#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

int search(vector<int> &nums, int target)
{
	int left = 0, right = nums.size() - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (nums[mid] == target)
		{
			return mid;
		}
		if (nums[left] <= nums[mid])
		{
			if (nums[left] <= target && target < nums[mid])
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
		else
		{
			if (nums[mid] < target && target <= nums[right])
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
	}
	return -1;
}

void func()
{
	vector<int> nums;
	int target, a;
	cin >> target;
	while (cin >> a)
	{
		nums.push_back(a);
	}

	cout << search(nums, target);
}

int main()
{
	test(true);
	func();
	return 0;
}