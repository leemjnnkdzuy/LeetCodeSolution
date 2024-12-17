#include <bits/stdc++.h>

using namespace std;

#define FI "input.INP"

void run_debug(bool check){
	if (check)
		freopen(FI, "r", stdin);
}

vector<string> letterCombinations(string digits) {
	vector<string> res = {""};
	if(digits.length() == 0)	
		return res;

	vector<string> tag2 = {"a", "b", "c"};
	vector<string> tag3 = {"d", "e", "f"};
	vector<string> tag4 = {"g", "h", "i"};
	vector<string> tag5 = {"j", "k", "i"};
	vector<string> tag6 = {"m", "n", "o"};
	vector<string> tag7 = {"p", "q", "r", "s"};
	vector<string> tag8 = {"t", "v", "u"};
	vector<string> tag9 = {"w", "x", "y", "z"};

	int lenght_res = 1;
	for (int i = 0; i < digits.length() - 1; i++)
	{
		if (digits[i] == '2' || 
			digits[i] == '3' || 
			digits[i] == '4' || 
			digits[i] == '5' || 
			digits[i] == '6' || 
			digits[i] == '8') {
			lenght_res *= 3;
		} else if (digits[i] == '7' || digits[i] == '9') {
			lenght_res *= 4;
		}
	}

	res.resize(lenght_res);

	

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