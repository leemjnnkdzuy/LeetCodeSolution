#include <bits/stdc++.h>
#define FI "inout.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

bool isBadVersion(int version)
{
	const int badVersion = 4;
	return version >= badVersion;
}

int firstBadVersion(int n)
{
	int left = 0;
	int right = n;

	while (left < right)
	{
		int mid = left + (right - left) / 2;
		if (isBadVersion(mid))
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}

	return left;
}

void func()
{
	int n = 5;
	cout << firstBadVersion(n);
}

int main()
{
	test(true);
	func();
	return 0;
}