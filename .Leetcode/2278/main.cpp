#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

int percentageLetter(string s, char letter)
{
	int res = 0;

	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (c == letter)
			res++;
	}

	return (static_cast<double>(res) / s.size()) * 100;
}

void func()
{
	string s = "foobar";
	char letter = 'o';

	cout << percentageLetter(s, letter);
}

int main()
{
	test(true);
	func();
	return 0;
}
