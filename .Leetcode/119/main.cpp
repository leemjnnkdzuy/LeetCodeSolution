#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

vector<int> getRow(int numRows) {
	vector<vector<int>> res;
	
	if(numRows == 0){
		res.push_back({1});
	}
	else if (numRows == 1)
	{
		res.push_back({1});
		res.push_back({1, 1});
	} else if (numRows >= 2)
	{
		res.push_back({1});
		res.push_back({1, 1});
		for (int i = 2; i < numRows + 1; i++)
		{
			vector<int> temp;

			temp.push_back(1);
			for (int j = 1; j < i; j++)
			{
				temp.push_back((res[i - 1][j]) + (res[i - 1][j - 1]));
			}
			temp.push_back(1);

			res.push_back(temp);
		}
	}

	return res[res.size() - 1];
}

void func(){
	int n;
	cin >> n;
	cout << n << endl;
	vector<int> vec = getRow(n);

	for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}

int main(){
	test(true);
	func();
	return 0;
}