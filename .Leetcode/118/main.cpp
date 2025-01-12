#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> res;
	if(numRows == 1){
		res.push_back({1});
	}
	else if (numRows == 2)
	{
		res.push_back({1});
		res.push_back({1, 1});
	} else if (numRows >= 3)
	{
		res.push_back({1});
		res.push_back({1, 1});
		for (int i = 2; i < numRows; i++)
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

	return res;
}

void func(){
	int n;
	cin >> n;
	cout << n << endl;
	vector<vector<int>> vec = generate(n);

	for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j];

            if (j < vec[i].size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
	test(true);
	func();
	return 0;
}