#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

bool check(string str,string substring)
{
	return str.find(substring) != string::npos;
}

vector<string> sortVector(vector<string> &words)
{
	vector<string> res = words;

	for (int i = 0; i < res.size() - 1; i++)
	{
		for (int j = 0; j < res.size() - i - 1; j++)
		{
			if (res[j].size() > res[j + 1].size())
			{
				swap(res[j], res[j + 1]);
			}
		}
	}

	return res;
}

vector<string> stringMatching(vector<string> &words)
{
	vector<string> resTemp, tempVec = sortVector(words);

	for (int i = 0; i < tempVec.size() - 1; i++)
	{
		for (int j = i + 1; j < tempVec.size(); j++)
		{
			string left = tempVec[i];
			string right = tempVec[j];

			if(check(right, left))
				resTemp.push_back(tempVec[i]);
		}
		
	}

	unordered_set<string> res(resTemp.begin(), resTemp.end());

	return vector<string>(res.begin(), res.end());
}

void func(){
	vector<string> vec, res;
	string a;
	while (cin >> a)
	{
		vec.push_back(a);
	}

	res = stringMatching(vec);

	for(auto index : res)
		cout << index << " ";
}

int main(){
	test(true);
	func();
	return 0;
}