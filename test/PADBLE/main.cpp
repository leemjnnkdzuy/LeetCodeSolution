#include <iostream>
#include <string>
#include <vector>
#define FI "PADBLE.INP"
#define FO "PADBLE.OUT"
using namespace std;

void debug()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen(FI, "r", stdin);
	freopen(FO, "w", stdout);
}

bool check(string s)
{
	for (int i = 0; i < s.length() / 2; i++)
	{
		if (s[i] != s[s.length() - i - 1])
			return false;
	}
	return true;
}

bool check_padble(string s)
{
	if (s.length() % 2 != 0)
		return false;

	int giua = s.length() / 2;

	string s1 = s.substr(0, giua);
	string s2 = s.substr(giua);

	if (!check(s1) || !check(s2))
		return false;

	bool check_a = false, check_b = false;
	for (auto index : s)
	{
		if (index == 'a')
			check_a = true;
		if (index == 'b')
			check_b = true;
		if (check_a && check_b)
			return true;
	}

	return false;
}

int main()
{
	debug();
	string s;
	cin >> s;

	int max = 0, tong = 0;

	for (int i = 2; i <= s.length(); i += 2)
	{
		for (int j = 0; j <= s.length() - i; j++)
		{
			string s_sub = s.substr(j, i);
			if (check_padble(s_sub))
			{
				if (i > max)
				{
					max = i;
					tong = 1;
				}
				else if (i == max)
					tong++;
			}
		}
	}

	if (max == 0)
		cout << "-1";
	else
		cout << max << " " << tong;

	return 0;
}