#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

// _____ ____   ___  __  __    __     ___   _ _   _    __        _____ _____ _   _ 
//|  ___|  _ \ / _ \|  \/  |   \ \   / / | | | | | |   \ \      / /_ _|_   _| | | |
//| |_  | |_) | | | | |\/| |    \ \ / /| |_| | | | |    \ \ /\ / / | |  | | | |_| |
//|  _| |  _ <| |_| | |  | |     \ V / |  _  | |_| |     \ V  V /  | |  | | |  _  |
//|_|   |_|_\_\\___/|_|__|_|      \_/  |_| |_|\___/       \_/\_/  |___| |_| |_| |_|
// _     _____     _______ 
//| |   / _ \ \   / / ____|
//| |  | | | \ \ / /|  _|  
//| |__| |_| |\ V / | |___ 
//|_____\___/  \_/  |_____|

#define FI "input.INP"

using namespace std;

void rundebug(bool check){
    if (check) freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void update(vector<long long>& st, int id, int l, int r, int a) {
    while (l < r) {
        st[id]++;
        int mid = (l + r) >> 1;
        id <<= 1;
        if (a > mid) l = mid + 1, id++;
        else r = mid;
    }
    st[id]++;
}

long long get(const vector<long long>& st, int id, int l, int r, int u, int v) {
    if (u <= l && r <= v) return st[id];
    if (v < l || u > r) return 0;
    int mid = (r + l) >> 1;
    return get(st, id << 1, l, mid, u, v) + get(st, (id << 1) + 1, mid + 1, r, u, v);
}

void func(){
    long long N, result = 0;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    vector<long long> st(4000001, 0);

    for (int i = 0; i < N; i++) {
        result += get(st, 1, 1, 1000000, arr[i] + 1, 1000000);
        update(st, 1, 1, 1000000, arr[i]);
    }

    cout << result << endl;
}

int main(){
    rundebug(false);

    int i;
    cin >> i;
    while (i--)
    {
        func();
    }
    return 0;
}
