#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool func(const vector<int>& nums, int K) {
    unordered_set<int> arr;
    arr.insert(0); 

    for (size_t i = 0; i < nums.size(); i++) {
        int num = nums[i];
        unordered_set<int> temp;

        for (auto it = arr.begin(); it != arr.end(); ++it) {
            int s = *it; 
            temp.insert(s + num); 
            temp.insert(s - num); 
        }
        arr = move(temp);
    }

    for (auto it = arr.begin(); it != arr.end(); ++it) {
        if (*it % K == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    freopen("input.INP", "r", stdin);
    int n, t;
    cin >> n >> t;

    vector<int> arr_t(t); 
    for (int i = 0; i < t; ++i) {
        cin >> arr_t[i];
    }

    vector<int> arr_n(n); 
    for (int i = 0; i < n; ++i) {
        cin >> arr_n[i];
    }

    for (int i = 0; i < t; i++) {
        if(func(arr_n, arr_t[i])) {
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }
    }

    return 0;
}
