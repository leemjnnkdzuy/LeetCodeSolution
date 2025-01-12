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

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    float res = 0;
    vector<float> arr;
    arr.insert(arr.end(), nums1.begin(), nums1.end());
    arr.insert(arr.end(), nums2.begin(), nums2.end());
    sort(arr.begin(), arr.end());

    int size = arr.size();
    if(size % 2 == 0){
        res = (arr[size / 2] + arr[size / 2 - 1]) / 2;
    } else {
        res = arr[size / 2];
    }
    return res;
}

int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr1, arr2;
    arr1 = {1, 3};
    arr2 = {2};
    
    cout << findMedianSortedArrays(arr1, arr2) << endl;

    return 0;
}

    