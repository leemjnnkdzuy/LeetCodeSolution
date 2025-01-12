#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
{
	vector<string> res;
	unordered_map<string, int> temp;

	for (int i = 0; i < list1.size(); i++)
	{
		for (int j = 0; j < list2.size(); j++)
		{
			if (list1[i] == list2[j])
			{
				temp[list1[i]] = i + j;
			}
		}
	}

	int min = INT_MAX;
	for (auto index : temp)
	{
		if (index.second < min)
		{
			min = index.second;
		}
	}

	for (auto index : temp)
	{
		if (index.second == min)
		{
			res.push_back(index.first);
		}
	}

	return res;
}

void func()
{
	vector<string>
		vec,
		list1 = {"happy", "sad", "good"},
		list2 = {"sad", "happy", "good"};

	vec = findRestaurant(list1, list2);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
}

int main()
{
	test(true);
	func();
	return 0;
}