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

	for (int i = 0; i < number.size(); i++)
	{
		char c = res[i];
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
	

	return temp;
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