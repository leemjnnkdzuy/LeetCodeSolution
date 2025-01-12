#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

bool canBeValid(string s, string locked)
{
	if (s.size() % 2 == 1)
	{
		return false;
	}
	int temp = 0, val = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (locked[i] == '0')
		{
			val++;
		}
		else if (s[i] == '(')
		{
			temp++;
		}
		else if (s[i] == ')')
		{
			if (temp > 0)
			{
				temp--;
			}
			else if (val > 0)
			{
				val--;
			}
			else
			{
				return false;
			}
		}
	}
	int li = 0;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (locked[i] == '0')
		{
			li--;
			val--;
		}
		else if (s[i] == '(')
		{
			li++;
			temp--;
		}
		else if (s[i] == ')')
		{
			li--;
		}
		if (li > 0)
		{
			return false;
		}
		if (val == 0 and temp == 0)
		{
			break;
		}
	}

	if (temp > 0)
	{
		return false;
	}

	return true;
}

void func()
{
	string s = "))()))";
	string locked = "010100";
	if (canBeValid(s, locked))
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