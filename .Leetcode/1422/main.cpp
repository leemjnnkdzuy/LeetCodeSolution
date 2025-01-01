#include <bits/stdc++.h>

#define FI "input.INP"

using namespace std;

void test(bool check) {
	if(check)
		freopen(FI, "r", stdin);
}

int maxScore(string s) {
	int res = 0;

	for (int i = 0; i < s.size() - 1; i++)
	{
		int sum = 0;
		for (int j = 0; j <= i; j++)
		{
			if (s[j] == '0')
			{
				sum++;
			}
		}

		for (int j = i + 1; j < s.size(); j++)
		{
			if (s[j] == '1')
			{
				sum++;
			}
		}

		res = max(res, sum);
	}

	return res;
}

void func(){
	string str;

	cin >> str;

	cout << maxScore(str);
}

int main(){
	test(true);
	func();
	return 0;
}