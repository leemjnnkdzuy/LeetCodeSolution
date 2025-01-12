#include <bits/stdc++.h>
using namespace std;

const long long MAX_N = 1e6;
const int MOD = 1e9 + 7;

void clearQueue(queue<int>& q) {
    queue<int>().swap(q);
}

void printQueue(queue<int>& q) {
    while (!q.empty()) {
        cout << "HI :";
        cout << q.front() << ' ';
        q.pop();
    }
}

void solve() {
    int n; 
    cin >> n;
    int k; 
    cin >> k;
    
    vector<int> a(n), b(k);
    for (auto& x : b) cin >> x;
    for (auto& x : a) cin >> x;

    vector<int> ans;
    for (int i = 0; i < k; i++) {
        queue<int> qe;
        set<int> q2;
        int ok = 0;

        qe.push((a[0] % b[i] + b[i]) % b[i]);
        qe.push((-a[0] % b[i] + b[i]) % b[i]);

        for (int j = 1; j < n; j++) {
            while (!qe.empty()) {
                int curr = qe.front(); 
                qe.pop();

                int res_1 = (curr + a[j]) % b[i];
                int res_2 = (curr - a[j]) % b[i];
                
                q2.insert(res_1); 
                q2.insert(res_2);
            }
            for (auto x : q2) qe.push(x);
            q2.clear();
        }

        while (!qe.empty()) {
            int check = qe.front(); 
            qe.pop();
            if (check == 0) {
                ans.push_back(1);
                ok = 1; 
                break;
            }
        }
        if (!ok) ans.push_back(0);
    }

    for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.INP", "r", stdin);
    int t; 
    cin >> t;
    while (t--) 
        solve();
    
    return 0;
}
