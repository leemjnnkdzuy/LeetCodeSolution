#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

long long countBadPairs(vector<int> &nums)
{
	unordered_map<int, int> vec;
	long long sum = nums.size() * (nums.size() - 1) / 2;
	long long good = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		int temp = nums[i] - i;
		good += vec[temp];
		vec[temp]++;
	}

	return sum - good;
}

void func()
{
	vector<int> nums;
	int a;
	while (cin >> a)
	{
		nums.push_back(a);
	}

	cout << countBadPairs(nums);
}

int main()
{
	test(true);
	func();
	return 0;
}