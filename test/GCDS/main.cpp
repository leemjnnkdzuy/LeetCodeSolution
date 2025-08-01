#include <iostream>
#include <vector>
#include <algorithm>
#define FI "GCDS.INP"
#define FO "GCDS.OUT"
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

int gcd(int x, int y)
{
	while (y != 0)
	{
		int temp = y;
		y = x % y;
		x = temp;
	}
	return x;
}

long long cal(long long ai, long long aj, long long d)
{
	return (ai * aj) / (d * d);
}

long long GCDS(const vector<int> &arr)
{
	int n = arr.size();
	long long sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int g = gcd(arr[i], arr[j]);
			long long result = 0;
			for (int d = 1; d * d <= g; d++)
			{
				if (g % d == 0)
				{
					result = (result + cal(arr[i], arr[j], d)) % MOD;

					if (d != g / d)
					{
						result = (result + cal(arr[i], arr[j], g / d)) % MOD;
					}
				}
			}
			sum = (sum + result) % MOD;
		}
	}
	return sum;
}

long long func(vector<int> arr, vector<pair<int, int>> temp)
{
	long long initialSum = GCDS(arr);
	cout << initialSum << endl;

	for (auto query : temp)
	{
		int index = query.first - 1;
		int value = query.second;

		arr[index] = value;

		long long newSum = GCDS(arr);
		cout << newSum << endl;
	}

	return 0;
}

int main()
{
	debug();
	int N, Q;
	cin >> N >> Q;
	vector<int> arr(N);
	vector<pair<int, int>> temp(Q);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < Q; i++)
	{
		cin >> temp[i].first >> temp[i].second;
	}

	func(arr, temp);

	return 0;
}