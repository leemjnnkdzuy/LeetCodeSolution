#include <bits/stdc++.h>
#define FI "input.INP"

using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

string freqAlphabets(string s)
{
	int i = 0;
	string res = "";
	while (i < s.length())
		if (i + 2 < s.length() && s[i + 2] == '#')
		{
			int temp = (s[i] - '0') * 10 + (s[i + 1] - '0');
			res += char(temp + 'a' - 1);
			i += 3;
		}
		else
		{
			res += char(s[i] - '0' - 1 + 'a');
			i++;
		}
	return res;
}

void func()
{
	string str = "10#11#12";
	cout << freqAlphabets(str);
}

int main()
{
	test(true);
	func();
	return 0;
}