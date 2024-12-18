#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <bits/stdc++.h>

#define FI "input.INP"
using namespace std;

void test(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

vector<int> finalPrices(vector<int>& prices) {
	vector<int> res;
    int n = prices.size();
	stack<int> s;
	vector<int> answer = prices;

	for (int i = 0; i < n; ++i) {
        while (!s.empty() && prices[s.top()] >= prices[i]) {
            int index = s.top();
            s.pop();
            answer[index] -= prices[i];
        }
        s.push(i);
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