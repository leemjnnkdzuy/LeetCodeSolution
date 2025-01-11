#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

void test(bool check)
{
	if (check)
		freopen(FI, "r", stdin);
}

bool wordPattern(string pattern, string s)
{
	unordered_map<char, string> charToWord;
	unordered_map<string, char> wordToChar;
	string sub = "";
	int j = 0;
	for (int i = 0; i <= s.length(); i++)
	{
		char c = (i < s.length()) ? s[i] : ' ';
		if (c == ' ')
		{
			if (sub == "")
				continue;

			if (j >= pattern.length())
				return false;

			char p = pattern[j];

			if (charToWord.find(p) != charToWord.end())
			{
				if (charToWord[p] != sub)
					return false;
			}
			else
			{
				charToWord[p] = sub;
			}

			if (wordToChar.find(sub) != wordToChar.end())
			{
				if (wordToChar[sub] != p)
					return false;
			}
			else
			{
				wordToChar[sub] = p;
			}

			sub = "";
			j++;
		}
		else
		{
			sub += c;
		}
	}

	return j == pattern.length();
}

void func()
{
	string pattern = "abba", s = "dog cat cat dog";

	cout << wordPattern(pattern, s);
}

int main()
{
	test(true);
	func();
	return 0;
}