#include <iostream>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

bool check(int n)
{

	if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return true;

	return false;
}

int sumOfMultiples(int n)
{
	int res = 0;
	for (int i = 0; i <= n; i++)
	{
		if (check(i))
		{
			cout << i << " ";
			res += i;
		}
	}

	return res;
}

void func()
{
	int n;
	cin >> n;
	cout << sumOfMultiples(n);
}

int main()
{
	test(true);
	func();
	return 0;
}