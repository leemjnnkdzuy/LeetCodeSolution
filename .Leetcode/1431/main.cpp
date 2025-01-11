#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
	vector<bool> res;
	int max = *max_element(candies.begin(), candies.end());
	vector<int> temp = candies;
	for (int i = 0; i < temp.size(); i++)
	{
		temp[i] += extraCandies;
	}

	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] >= max)
		{
			res.push_back(true);
		} else {
			res.push_back(false);
		}
	}

	return res;
}

void func()
{
	vector<int> candies = {2, 3, 5, 1, 3};
	int extraCandies = 3;

	vector<bool> vec = kidsWithCandies(candies, extraCandies);

	for (auto index : vec)
	{
		if (index)
		{
			cout << "TRUE ";
		}
		else
		{
			cout << "FALSE ";
		}
	}
}

int main()
{
	test(true);
	func();
	return 0;
}