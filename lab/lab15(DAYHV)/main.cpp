#include <bits/stdc++.h>

#define FI "input.INP"

using namespace std;

void func();

void rundebug(bool check)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (check)
        freopen(FI, "r", stdin);
}

void test_case(int time)
{
    int t = 1;

    while (time--)
    {
        func();
    }
}

// _____ ____   ___  __  __    __     ___   _ _   _    __        _____ _____ _   _
//|  ___|  _ \ / _ \|  \/  |   \ \   / / | | | | | |   \ \      / /_ _|_   _| | | |
//| |_  | |_) | | | | |\/| |    \ \ / /| |_| | | | |    \ \ /\ / / | |  | | | |_| |
//|  _| |  _ <| |_| | |  | |     \ V / |  _  | |_| |     \ V  V /  | |  | | |  _  |
//|_|   |_|_\_\\___/|_|__|_|      \_/  |_| |_|\___/       \_/\_/  |___| |_| |_| |_|
// _     _____     _______
//| |   / _ \ \   / / ____|
//| |  | | | \ \ / /|  _|
//| |__| |_| |\ V / | |___
//|_____\___/  \_/  |_____|

void func()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] + 1 != arr[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    rundebug(true); // true or false to enable/disable file input from input.INP
    test_case(1);   // -1 to input from cin OR i > time > 0 to run a loop
    return 0;
}