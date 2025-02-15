#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

string clearDigits(string s)
{
	stack<char> temp;
	string res;

	for (char c : s)
	{
		if (isdigit(c))
		{
			if (!temp.empty() && !isdigit(temp.top()))
			{
				temp.pop();
			}
		}
		else
		{
			temp.push(c);
		}
	}

	while (!temp.empty())
	{
		res += temp.top();
		temp.pop();
	}
	reverse(res.begin(), res.end());

	return res;
}

void func()
{
	string s;
	cin >> s;
	cout << clearDigits(s);
}

int main()
{
	test(true);
	func();
	return 0;
}