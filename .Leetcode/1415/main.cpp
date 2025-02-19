#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

void generateHappyStrings(string temp, int n, vector<string> &res)
{
	if (temp.length() == n)
	{
		res.push_back(temp);
		return;
	}

	char c[3] = {'a', 'b', 'c'};

	for (int i = 0; i < 3; i++)
	{
		if (temp.empty() || temp.back() != c[i])
		{
			generateHappyStrings(temp + c[i], n, res);
		}
	}
}

string getHappyString(int n, int k)
{
	vector<string> str;
	generateHappyStrings("", n, str);
	sort(str.begin(), str.end());

	if (k > str.size())
		return "";
	return str[k - 1];
}

void func()
{
	test(true);
	int n, k;
	cin >> n >> k;
	cout << n << " " << k << " : " << getHappyString(n, k);
}

int main()
{
	func();
	return 0;
}