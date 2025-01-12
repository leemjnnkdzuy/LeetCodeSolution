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

int countMaxOrSubsets(vector<int>& nums) {
    int maxOR = 0, count = 0;
        
        // Tính OR tối đa của tất cả các phần tử trong mảng
    for (int i = 0; i < nums.size(); ++i) {
        maxOR = maxOR | nums[i];
    }

    int n = nums.size();

        // Duyệt qua tất cả các tập con bằng cách sử dụng bitmask
    for (int mask = 1; mask < (1 << n); ++mask) {
        int currentOR = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                currentOR |= nums[i];  // Thêm phần tử nums[i] vào tập con
            }
        }
        if (currentOR == maxOR) {
            count++;  // Đếm số tập con có OR bằng maxOR
        }
    }

    return count;
}


int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<int> arr;
    while(cin >> n){
        arr.push_back(n);
    }

    cout << countMaxOrSubsets(arr);

    return 0;
}

    