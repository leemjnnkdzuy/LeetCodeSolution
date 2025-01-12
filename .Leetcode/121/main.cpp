#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check) {if(check) freopen(FI, "r", stdin);}

int maxProfit(vector<int>& prices) {
    if (prices.size() < 2) {
        return 0;
    }

    int flag = 0;
    int Max = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[flag]) {
            Max = max(Max, prices[i] - prices[flag]);
        } else {
            flag = i;  
        }
    }

    return Max;
}

void func(){
	vector<int> prices;
	int a;
	while (cin >> a)
	{
		prices.push_back(a);
	}
	cout << maxProfit(prices);
}

int main(){
	test(true);
	func();
	return 0;
}