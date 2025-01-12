#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

#define DEBUG 

#define FI "input.INP"

void func(vector<vector<int>> arr) {
    int n = arr.size();
    int m = arr[0].size();
    
    vector<vector<int>> arr_temp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr_temp[i + 1][j + 1] = arr_temp[i][j + 1] + arr_temp[i + 1][j] - arr_temp[i][j] + arr[i][j]; 
        }
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << arr_temp[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    func(arr);
    
    return 0;
}
