#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
    vector<vector<int>> adj(n);
    for(auto& edge : edges) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    
    int result = 0;
    vector<long long> sum(n, 0);
    
    function<long long(int, int)> dfs = [&](int u, int parent) -> long long {
        long long current_sum = values[u];
        
        for(int v : adj[u]) {
            if(v != parent) {
                current_sum += dfs(v, u);
            }
        }
        
        if(current_sum % k == 0) {
            result++;
            return 0;
        }
        return current_sum;
    };
    
    dfs(0, -1);
    return result;
}

void func() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> edges(n-1);
    vector<int> values(n);
    
    for(int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
    }
    
    for(int i = 0; i < n; i++) {
        cin >> values[i];
    }
    
    cout << maxKDivisibleComponents(n, edges, values, k) << endl;
}

int main() {
    freopen(FI, "r", stdin);
    func();
    return 0;
}
