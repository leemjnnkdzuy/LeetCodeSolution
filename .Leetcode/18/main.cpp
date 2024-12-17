#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void run_debug(bool check){
	if (check)
	{
		freopen(FI, "r", stdin);
	}
}

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
	int a, b, c, d;

	for (int i = 0; i < nums.size() - 3; i++) {
		if (nums[i] == 0 && nums.size() == 1)
			return res;
		if (i > 0 && nums[i] == nums[i - 1]) continue;


		for (int j = i + 1; j < nums.size() - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            
            int left = j + 1;
            int right = nums.size() - 1;

            while (left < right) {

				c = nums[left];
				d = nums[right];
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                
                if (sum == target) {
                    res.push_back({nums[i], nums[j], nums[left], nums[right]});
                    
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    
    return res;
}


void func(){
	int target, a;
	vector<int> nums;
	cin >> target;
	while (cin >> a)
	{
		nums.push_back(a);
	}

	cout << target << endl;

	for (int i = 0; i < nums.size(); i++){
		cout << nums[i] << " ";
	}
	cout << endl;

	vector<vector<int>> temp = fourSum(nums, target);

	for (int i = 0; i < temp.size(); i++)
	{
		for (int j = 0; j < temp[i].size(); j++)
		{
			cout << temp[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	run_debug(true);
	func();
	return 0;
}