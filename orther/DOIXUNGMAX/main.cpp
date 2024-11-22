#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
	static void DoiXung(int x) {
		string strX = to_string(x);
		map<char, int> myList;
		for (int i = 0; i < strX.length(); ++i) {
			myList[strX[i]]++;
		}
		
		int cnt = 0;
		map<char, int>::iterator it = myList.begin();

		string tmp = "";
		string soloIndex = "";
		while (it != myList.end()) {
			if (it->second % 2 != 0) {
				soloIndex = it->first;
				--myList[it->first];
				++cnt;
			}
			if (it->second % 2 == 0)  {
				for (int i = 0; i < it->second/2; ++i) {
					tmp += it->first;
				}
				
			}
			++it;
		}

		if (cnt >= 2 || tmp[0] == '0') {
			cout << "NO" << endl;
			return; 
		}

		cout << "YES ";
		for (int i = tmp.length() - 1; i >= 0; --i) {
			cout << tmp[i];
		}
		cout << soloIndex << tmp;
		cout << endl;

	}
};

int main() {
    freopen("221A290048_Test4.INP", "r", stdin);

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int test;
		cin >> test;
		Solution::DoiXung(test);
	}
}