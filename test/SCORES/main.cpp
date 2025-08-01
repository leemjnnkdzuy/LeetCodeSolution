// On the occasion of the grand opening of the VINCOMPLAZA supermarket in Dong Ha, Viet Anh was taken by his parents to play at the amusement area inside the supermarket. He was very excited about the games here, especially the game called "G_SCORES" with a very interesting scoring system. G_SCORES is a new game created by developers with 𝑁 levels, where the 𝑖 -th level has a difficulty level of 𝑖 . The scoring system for the levels of the game is established as follows: Level 𝑖 has a positive integer score 𝑠 𝑖 ranging from 1 to 𝑁 . The levels are arranged in increasing order of difficulty ( 𝑠 1 ≤ 𝑠 2 ≤ … ≤ 𝑠 𝑛 ) ; To ensure that players who pass through many levels are ranked higher, the developers established the rule: For any number 𝑘 ( 2 ≤ 𝑘 ≤ 𝑁 ) , the total score of 𝑘 levels must be greater than the total score of all combinations with fewer than 𝑘 levels. Requirement: Given 𝑁 levels, how many valid ways can the developers set up the scoring system for the levels to satisfy the above conditions? Input Input from the text file SCORES.INP has the following structure: The first line contains an integer 𝑇 ( 1 ≤ 𝑇 ≤ 5 ) , the number of test cases;
// The next 𝑇 lines, the 𝑖 - th line contains an integer 𝑁(2 ≤ 𝑁 ≤ 5000), the number of levels.Output Output to the file SCORES.OUT consisting of 𝑇 lines, where the 𝑖 - th line contains the remainder of the number of valid scoring system setups when divided by 10 9 + 7 .
// Sample Input 1 Copy 3 2 3 4 Sample Output 1 Copy 3 7 16
#include <iostream>
#include <vector>
#include <algorithm>
#define FI "SCORES.INP"
#define FO "SCORES.OUT"
#define MOD 1000000007

using namespace std;

void debug()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen(FI, "r", stdin);
	freopen(FO, "w", stdout);
}

long long powmod(long long a, long long b)
{
	long long res = 1;
	a %= MOD;
	while (b)
	{
		if (b & 1)
			res = res * a % MOD;
		a = a * a % MOD;
		b >>= 1;
	}
	return res;
}

long long inv(long long x)
{
	return powmod(x, MOD - 2);
}

long long comb(int n, int k)
{
	static vector<long long> fact(1, 1);
	static vector<long long> invfact(1, 1);
	while ((int)fact.size() <= n)
	{
		fact.push_back(fact.back() * fact.size() % MOD);
		invfact.push_back(inv(fact.back()));
	}
	if (k < 0 || k > n)
		return 0;
	return fact[n] * invfact[k] % MOD * invfact[n - k] % MOD;
}

int func(int n)
{
	return (int)comb(2 * n - 1, n);
}

int main()
{
	debug();
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		cout << func(n) << endl;
	}

	return 0;
}