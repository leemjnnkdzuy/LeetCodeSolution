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


void func(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> diff(n-1);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < diff.size(); i++)
    {
        diff[i] = a[i + 1] - a[i];
    }
    
    for (int i = 0; i < diff.size(); i++)
    {
        cout << diff[i] << " ";
    }
}

int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    func();

    return 0;
}

    