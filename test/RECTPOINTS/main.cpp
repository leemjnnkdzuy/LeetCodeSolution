#include <iostream>
#include <vector>
#include <algorithm>
#define FI "RECTPOINTS.INP"
#define FO "RECTPOINTS.OUT"
using namespace std;

void debug()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen(FI, "r", stdin);
	freopen(FO, "w", stdout);
}

int main()
{
	debug();
	int n, w, h;
	cin >> n >> w >> h;
	vector<pair<int, int>> p(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> p[i].first >> p[i].second;
	}
	sort(p.begin(), p.end());

	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		int x0 = p[i].first;
		vector<int> y;
		for (int j = i; j < n && p[j].first <= x0 + w; ++j)
		{
			y.push_back(p[j].second);
		}
		sort(y.begin(), y.end());
		int l = 0;
		for (int r = 0; r < y.size(); ++r)
		{
			while (y[r] - y[l] > h)
				l++;
			res = max(res, r - l + 1);
		}
	}
	
	cout << res;
	return 0;
}