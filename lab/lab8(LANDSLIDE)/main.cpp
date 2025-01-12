#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, int> pli;
const ll INF = LLONG_MAX;

class Solution {
private:
    int N, S, Q, H;
    vector<vector<pair<int, ll>>> adj;
    vector<bool> hasFood;

    vector<ll> dijkstra(int start) {
        vector<ll> dist(N + 1, INF);
        priority_queue<pli, vector<pli>, greater<pli>> pq;
        dist[start] = 0;
        pq.push({0, start});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d > dist[u]) continue;

            for (auto [v, w] : adj[u]) {
                if (dist[v] > dist[u] + w) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;
    }

    bool canReach(int start, int target) {
        if (start == target) return true;

        vector<bool> visited(N + 1, false);
        visited[start] = true;
        
        queue<int> q;
        q.push(start);

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (auto [v, _] : adj[u]) {
                if (!visited[v]) {
                    if (v == target) return true;
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        return false;
    }

public:
    void solve() {
        cin >> N >> S >> Q >> H;
        adj.resize(N + 1);
        hasFood.resize(N + 1, false);
        
        vector<tuple<int, int, ll>> edges(N - 1);
        for (int i = 0; i < N - 1; i++) {
            int u, v;
            ll w;
            cin >> u >> v >> w;
            edges[i] = {u, v, w};
            adj[u].emplace_back(v, w);
            adj[v].emplace_back(u, w);
        }
        
        for (int i = 0; i < S; i++) {
            int c;
            cin >> c;
            hasFood[c] = true;
        }

        for (int i = 0; i < Q; i++) {
            int removedEdge, village;
            cin >> removedEdge >> village;
            removedEdge--;

            auto [u, v, w] = edges[removedEdge];
            adj[u].erase(remove_if(adj[u].begin(), adj[u].end(), [&](const pair<int, ll>& edge) {
                return edge.first == v; }), adj[u].end());
            adj[v].erase(remove_if(adj[v].begin(), adj[v].end(), [&](const pair<int, ll>& edge) {
                return edge.first == u; }), adj[v].end());

            if (!canReach(village, H)) {
                vector<ll> dist = dijkstra(village);
                ll minDist = INF;
                for (int j = 1; j <= N; j++) {
                    if (hasFood[j] && dist[j] != INF) {
                        minDist = min(minDist, dist[j]);
                    }
                }
                cout << (minDist == INF ? "oo" : to_string(minDist)) << "\n";
            } else {
                cout << "escaped\n";
            }

            adj[u].emplace_back(v, w);
            adj[v].emplace_back(u, w);
        }
    }
};

int main() {
    freopen("input.INP", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution solution;
    solution.solve();
    
    return 0;
}
