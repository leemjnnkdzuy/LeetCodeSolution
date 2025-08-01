#include <bits/stdc++.h>
#define FI "input.INP"

using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

long long distributeCandies(int n, int limit)
{
	if (n > 3 * limit)
		return 0;

	long long ans = 0;
	for (int i = 0; i <= limit; i++)
	{
		int temp = n - i;
		int j_min = max(0, temp - limit);
		int j_max = min(limit, temp);

		if (j_min <= j_max)
			ans += j_max - j_min + 1;
	}
	return ans;
}

void func()
{
	int n, limit;
	cin >> n >> limit;
	cout << distributeCandies(n, limit) << endl;
}

int main()
{
	test(true);
	func();
	return 0;
}