#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

bool findPartitions(int startIndex, int sum, string &stringNum, int target, vector<vector<int>> &memo)
{
	if (startIndex == stringNum.size())
	{
		return sum == target;
	}
	if (sum > target)
		return false;
	if (memo[startIndex][sum] != -1)
		return memo[startIndex][sum];

	bool partitionFound = false;
	for (int currentIndex = startIndex; currentIndex < stringNum.size(); currentIndex++)
	{
		string currentString = stringNum.substr(startIndex, currentIndex - startIndex + 1);
		int addend = stoi(currentString);
		partitionFound = partitionFound || findPartitions(currentIndex + 1, sum + addend, stringNum, target, memo);
	}
	memo[startIndex][sum] = partitionFound;
	return partitionFound;
}

bool check(int n)
{
	string str_n = to_string(n * n);
	vector<vector<int>> memo(str_n.size(), vector<int>(n + 1, -1));
	return findPartitions(0, 0, str_n, n, memo);
}

int punishmentNumber(int n)
{
	int res = 0;

	for (int i = 0; i <= n; i++)
	{
		if (check(i))
		{
			res += i * i;
			cout << i * i << " " << res << endl;
		}
	}

	return res;
}

void func()
{
	int n = 100;
	cout << punishmentNumber(n);
}

int main()
{
	test(true);
	func();
	return 0;
}