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
    cin >> t;
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

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int SoNguyenTo(int n)
{
    int count = 0;
    int number = 1;

    while (count < n)
    {
        number++;
        if (isPrime(number))
        {
            count++;
        }
    }
    return number;
}

vector<int> taoMangSoNguyenTo(int n)
{
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        if (SoNguyenTo(i + 1) < n)
        {
            arr.push_back(SoNguyenTo(i + 1));
        }
    }

    return arr;
}

void func()
{
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << n << endl;
        return;
    }

    vector<int> arr = taoMangSoNguyenTo(n);
    vector<pair<int, int>> res(n);

    for (int i = 0; i < n; i++)
    {
        res[i].first = i + 1;
        res[i].second = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            while (res[i].first % arr[j] == 0 && res[i].first > 0)
            {
                res[j].second++;
                res[i].first /= arr[j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (res[i].second != 0)
            cout << res[i].second << " ";
    }
}

int main()
{
    rundebug(true); // true or false to enable/disable file input from input.INP
    // test_case(1);  // -1 to input from cin OR i > time > 0 to run a loop

    int t;
    cin >> t;
    while (t--)
    {
        func();
    }
    return 0;
}