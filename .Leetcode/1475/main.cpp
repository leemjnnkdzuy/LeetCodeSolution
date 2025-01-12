#include <bits/stdc++.h>

#define FI "input.INP"
using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

vector<int> finalPrices(vector<int>& prices) {
    vector<int> res = prices;

    for (int i = 0; i < res.size(); ++i) {
        for (int j = i + 1; j < res.size(); ++j) {
            if (prices[j] <= prices[i]) {
                res[i] -= prices[j];
                break;
            }
        }
    }
	
    return res;
}

void func(){
	vector<int> prices;
	int a;

	while (cin >> a)
		prices.push_back(a);

	prices = finalPrices(prices);

	for(auto index : prices)
		cout << index << " ";
}

int main(){
	test(true);
	func();
	return 0;
}