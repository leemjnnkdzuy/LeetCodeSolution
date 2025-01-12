#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}
vector<int> sumZero(int n)
{
	vector<int> res;

	for (int i = 0; i < n / 2; i++)
	{
		res.push_back(i + 1);
		res.push_back(-(i + 1));
	}
	if (n % 2 != 0)
	{
		res.push_back(0);
	}

	return res;
}
void func()
{
	int n = 5;
	vector<int> vec = sumZero(n);

	for (auto index : vec)
		cout << index << " ";
}

int main()
{
	test(true);
	func();
	return 0;
}