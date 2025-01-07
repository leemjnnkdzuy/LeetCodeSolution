#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

int countPalindromicSubsequence(string s)
{
	int ans = 0;

	for (char c = 'a'; c <= 'z'; c++)
	{
		int first = -1, last = -1;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == c)
			{
				if (first == -1)
				{
					first = i;
				}
				last = i;
			}
		}

		if (first != -1 && last != -1 && first < last)
		{
			bool temp[26] = {false};

			for (int i = first + 1; i < last; i++)
			{
				temp[s[i] - 'a'] = true;
			}

			for (int i = 0; i < 26; i++)
			{
				if (temp[i])
				{
					ans++;
				}
			}
		}
	}

	return ans;
}

void func()
{
	string str;
	cin >> str;
	cout << countPalindromicSubsequence(str);
}

int main()
{
	test(true);
	func();
	return 0;
}