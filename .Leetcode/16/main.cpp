#include <bits/stdc++.h>

using namespace std;

#define FI "input.INP"

void run_debug(bool check){
	if (check)
		freopen(FI, "r", stdin);
}

int threeSumClosest(vector<int>& nums, int target) {
    int res = nums[0] + nums[1] + nums[2];
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++)
	{
		int left = i + 1;
		int right = nums.size() - 1;
		while (left < right)
		{
			int sum = nums[i] + nums[left] + nums[right];

			if(abs(sum - target) < abs(res - target))
				res = sum;
			
			if (sum < target)
			{
				left++;
			} else if (sum > target)
			{
				right--;
			} else {
                return sum;
            }
		}
	}

    return res;
}		

void func(){
	int a;
	int target;
	vector<int> nums;

	cin >> target;
	while (cin >> a)
	{
		nums.push_back(a);
	}
	cout << threeSumClosest(nums, target);
}

int main(){
	run_debug(true);
	func();
	return 0;
}