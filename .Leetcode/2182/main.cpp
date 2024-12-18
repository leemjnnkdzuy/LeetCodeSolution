#include <bits/stdc++.h>

using namespace std;

#define FI "input.INP"

void run_debug(bool check){
	if(check)
		freopen(FI, "r", stdin);
}

string repeatLimitedString(string s, int repeatLimit) {
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    priority_queue<pair<char, int>> pq;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            pq.push({char('a' + i), freq[i]});
        }
    }

    string res;
    while (!pq.empty()) {
        auto [ch, count] = pq.top();
        pq.pop();

        int use = min(count, repeatLimit); 
        for (int i = 0; i < use; i++) {
            res += ch;
        }

        count -= use;

        if (count > 0) {
            if (pq.empty()) break;  
            auto [nextChar, nextCount] = pq.top();
            pq.pop();

            res += nextChar;
            nextCount--;

            if (nextCount > 0) {
                pq.push({nextChar, nextCount});  
            }
            pq.push({ch, count});
        }
    }

    return res;
}

void func(){
	string str;
	int repeatLimit;
	cin >> str >> repeatLimit;
}

int main(){

	return 0;
}