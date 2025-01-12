#include <bits/stdc++.h>
#define FI "input.INP"

using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

vector<int> replaceElements(vector<int> &arr)
{
	vector<int> res;
	for (int i = 0; i < arr.size() - 1; i++)
	{
		res.push_back(*max_element(arr.begin() + i + 1, arr.end()));
	}

	res.push_back(-1);
	return res;
}

void func()
{
	vector<int> arr, vec;
	int a;
	while (cin >> a)
	{
		arr.push_back(a);
	}

	vec = replaceElements(arr);

	for (auto index : vec)
		cout << index << " ";
}

int main()
{
	test(true);
	func();
	return 0;
}