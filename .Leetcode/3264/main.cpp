#include <bits/stdc++.h>

using namespace std;

#define FI "input.INP"

void run_debug(bool check){
	if (check)
		freopen(FI, "r", stdin);
}

vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
	vector<int> res = nums;
	while (k > 0)
	{
		int min = res[0];
		int flag = 0;

		for (int i = 1; i < res.size(); i++)
		{
			if (res[i] < min)
			{
				min = res[i];
				flag = i;
			}
			
		}

		res[flag] *= multiplier;

		k--;
	}

	return res;
}


void func(){
	vector<int> nums;
	int a, k, multiplier;
	cin >> k >> multiplier;

	while (cin >> a)	
	{
		nums.push_back(a);
	}

	vector<int> temp = getFinalState(nums, k, multiplier);

	for(auto index : temp)
		cout << index << " ";
}

int main(){
	run_debug(true);

	func();
	return 0;
}