#include <iostream>
#include <vector>

using namespace std;


#define DEBUG 
#ifdef DEBUG
    #define D(x) x;
#else
    #define D(x) ;
#endif

#define FI "PrefixSum.INP"


void func(){
    int n;

    cin >> n;

    vector<int> a(n);
    vector<int> prefixSum(n+1);
    for(int i = 0; i < n+1; i++){
        cin >> a[i];
        if(i == 0){
            prefixSum[i] = 0;
        }else{
            prefixSum[i] = prefixSum[i - 1] + a[i - 1];
        }
    }

    for(int i = 0; i < n+1; i++){
        cout << prefixSum[i] << " ";
    }
    cout << endl;
}

int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    func();

    return 0;
}

    