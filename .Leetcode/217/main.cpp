#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

bool containsDuplicate(vector<int> &nums)
{
	unordered_map<int, int> vec;

	for (int i = 0; i < nums.size(); i++)
	{
		vec[nums[i]]++;
		if (vec[nums[i]] > 1)
			return true;
	}

	return false;
}

void func()
{
	vector<int> nums;
	int a;
	while (cin >> a)
	{
		nums.push_back(a);
	}

	if (containsDuplicate(nums))
		cout << "TRUE";
	else
		cout << "FALSE";
}

int main()
{
	test(true);
	func();
	return 0;
}