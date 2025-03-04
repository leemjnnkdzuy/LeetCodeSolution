#include <iostream>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}
string reformatNumber(string number)
{
	string res, temp;

	for (int i = 0; i < number.length(); i++)
	{
		char c = number[i];
		if (c == '0' ||
			c == '1' ||
			c == '2' ||
			c == '3' ||
			c == '4' ||
			c == '5' ||
			c == '6' ||
			c == '7' ||
			c == '8' ||
			c == '9')
			temp.push_back(c);
	}

	res = "";
	int n = temp.length();
	int i = 0;

	while (i < n - 4)
	{
		res += temp.substr(i, 3);
		res += '-';
		i += 3;
	}

	if (n - i == 4)
	{
		res += temp.substr(i, 2);
		res += '-';
		res += temp.substr(i + 2, 2);
	}
	else if (n - i == 3)
	{
		res += temp.substr(i, 3);
	}
	else if (n - i == 2)
	{
		res += temp.substr(i, 2);
	}
	else if (n - i == 1)
	{
		res += temp.substr(i, 1);
	}

	return res;
}

void func()
{
	string str = "1-23-45 6";
	cout << reformatNumber(str);
}

int main()
{
	test(false);
	func();
	return 0;
}