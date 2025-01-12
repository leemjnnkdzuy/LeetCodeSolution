#include <bits/stdc++.h>

using namespace std;

#define FI "input.INP"

void run_debug(bool check){
	if (check)
		freopen(FI, "r", stdin);
}

vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};

    vector<string> res;
    vector<string> digitToLetters = {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };

    string combination;
    function<void(int)> backtrack = [&](int index) {
        if (index == digits.size()) {
            res.push_back(combination);
            return;
        }

        string letters = digitToLetters[digits[index] - '0'];
        for (char letter : letters) {
            combination.push_back(letter);
            backtrack(index + 1);
            combination.pop_back();
        }
    };

    backtrack(0);
    return res;
}

void func(){
	string str;
	cin >> str;

	vector<string> vec = letterCombinations(str);

	for (auto index : vec)
		cout << index << " ";
}

int main(){
	run_debug(true);
	func();
	return 0;
}