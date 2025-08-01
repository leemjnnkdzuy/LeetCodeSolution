#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> vec;
    for (int i = 0; i < nums.size(); i++)
    {
        if (vec.count(nums[i]) && i - vec[nums[i]] <= k)
            return true;
        vec[nums[i]] = i;
    }
    return false;
}

void func()
{
	vector<int> nums;
	int a, k;
	cin >> k;
	while (cin >> a)
	{
		nums.push_back(a);
	}

	if (containsNearbyDuplicate(nums, k))
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