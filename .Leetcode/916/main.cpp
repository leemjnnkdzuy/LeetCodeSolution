#include <iostream>
#include <vector>
#include <unordered_map>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
{
	vector<string> res;

	unordered_map<char, int> temp;
	for (int i = 0; i < words2.size(); i++)
	{
		unordered_map<char, int> des;
		for (int j = 0; j < words2[i].size(); j++)
		{
			des[words2[i][j]]++;
			temp[words2[i][j]] = max(temp[words2[i][j]], des[words2[i][j]]);
		}
	}

	for (const string &word : words1)
	{
		unordered_map<char, int> des;
		for (int i = 0; i < word.size(); i++)
			des[word[i]]++;

		bool flag = true;
		for (const auto &entry : temp)
		{
			if (des[entry.first] < entry.second)
			{
				flag = false;
				break;
			}
		}

		if (flag)
			res.push_back(word);
	}

	return res;
}

void func()
{
	vector<string> words1 = {"amazon", "apple", "facebook", "google", "leetcode"};
	vector<string> words2 = {"e", "o"};
	vector<string> vec = wordSubsets(words1, words2);

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
}

int main()
{
	test(true);
	func();
	return 0;
}