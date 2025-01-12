#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

#define DEBUG 
#ifdef DEBUG
    #define D(x) x;
#else
    #define D(x) ;
#endif

#define FI "input.INP"

int func() {
    int target, n;
    int temp = 0;
    int left = 0;
    int ans = 0;
    

    cin >> target;
    vector<int> nums;
    vector<int> prefixSum;
    while (cin >> n) {
        nums.push_back(n);
    }


    prefixSum.resize(nums.size() + 1);
    prefixSum[0] = 0;

    for (int i = 0; i < nums.size(); i++) {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
    }
    
    while (prefixSum[temp] < target) {
        ++temp;
        if (temp > nums.size()) {
            return 0;
        }
    }

    ans = nums.size();
    for (int right = temp; right <= nums.size(); right++) {
        while (prefixSum[right] - prefixSum[left] >= target) {
            ans = min(ans, right - left);
            left++;
        }
    }

    return ans;
}

int main() {
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << func();

    return 0;
}