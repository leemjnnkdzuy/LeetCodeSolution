#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define DEBUG 
#ifdef DEBUG
    #define D(x) x;
#else
    #define D(x) ;
#endif

#define FI "input.INP"

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

    return result;
}

int main() {
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> arr, arrTemp;
    int n, target;
    
    cin >> target;
    while (cin >> n) {
        arr.push_back(n);
    }
    
    arrTemp = twoSum(arr, target);
    for (int i = 0; i < arrTemp.size(); i++) {
        cout << arrTemp[i] << " ";
    }

    return 0;
}
