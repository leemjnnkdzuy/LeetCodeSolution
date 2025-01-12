#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

long long titleToNumber(string columnTitle)
{
	unsigned long long res = 0;

	for (int i = 0; i < columnTitle.size() / 2; i++)
	{
		swap(columnTitle[i], columnTitle[columnTitle.size() - 1 - i]);
	}

	cout << columnTitle << endl;

	for (int i = 0; i < columnTitle.size(); i++) {
		res += (columnTitle[i] - '0' - 16) * pow(26, i);
		cout << columnTitle[i] << " " << (columnTitle[i] - '0') - 16 << " " << pow(26, i) << " = " << res << endl;
	}

	return res;
}

void func(){
	string columnTitle;
	cin >> columnTitle;
	cout << titleToNumber(columnTitle);
}

int main(){
	test(true);
	func();
	return 0;
}