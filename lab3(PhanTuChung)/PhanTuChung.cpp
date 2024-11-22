#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    freopen("PhanTuChung.INP", "r", stdin);

    int x, y, z, temp;
    vector<int> nx, ny, nz, resulDtSet;
    vector<int> result;

    cin >> x;
    for (int i = 0; i < x; i++)
    {
        temp = 0;
        cin >> temp;
        nx.push_back(temp);
    }

    cin >> y;
    for (int i = 0; i < y; i++)
    {
        temp = 0;
        cin >> temp;
        ny.push_back(temp);
    }

    cin >> z;
    for (int i = 0; i < z; i++)
    {
        temp = 0;
        cin >> temp;
        nz.push_back(temp);
    }

    set<int> nxSet(nx.begin(), nx.end());
    set<int> nySet(ny.begin(), ny.end());
    set<int> nzSet(nz.begin(), nz.end());

    sort(nx.begin(), nx.end());
    sort(ny.begin(), ny.end());
    sort(nz.begin(), nz.end());

    for (int i = 0; i < x; i++)
    {
        if (nySet.find(nx[i]) != nySet.end() && nzSet.find(nx[i]) != nzSet.end())
        {
            result.push_back(nx[i]);
        }
    }

    set<int> resultSet(result.begin(), result.end());
    cout << resultSet.size() << endl;
    for (auto it = resultSet.begin(); it != resultSet.end(); ++it)
    {
        if (*it == 10000)
            continue;
        cout << *it << " ";
    }

    return 0;
}
