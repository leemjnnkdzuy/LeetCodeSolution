#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

string shiftingLetters(string s, vector<vector<int>> &shifts)
{
	string res = s;
	vector<int> vec(res.size() + 1, 0);

	for (int i = 0; i < shifts.size(); i++)
	{
		int start = shifts[i][0];
		int end = shifts[i][1];
		int direction = shifts[i][2];
		if (direction == 1)
		{
			vec[start] += 1;
			vec[end + 1] -= 1;
		}
		else
		{
			vec[start] -= 1;
			vec[end + 1] += 1;
		}
	}

	int sum = 0;
	for (int i = 0; i < res.size(); i++)
	{
		sum += vec[i];
		vec[i] = sum;
	}

	for (int i = 0; i < res.size(); i++)
	{
		int temp = vec[i] % 26;
		if (temp < 0)
		{
			temp += 26;
		}
		res[i] = 'a' + (res[i] - 'a' + temp) % 26;
	}

	return res;
}

void func()
{
	string s = "abc";
	vector<vector<int>> shifts = {{0, 1, 0}, {1, 2, 1}, {0, 2, 1}};

	cout << shiftingLetters(s, shifts);
}

int main()
{
	test(true);
	func();
	return 0;
}