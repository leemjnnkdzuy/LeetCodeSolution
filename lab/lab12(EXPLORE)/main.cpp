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


int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

float calcu(int x, int y)
{
    if (x == 0 && y == 0)
        return 0;
    return sqrt(x * x + y * y);
}

void func()
{
    string str;
    cin >> str;

    int x = 0, y = 0;
    int loca = 0;

    if (str[0] != 'E' && str[0] != 'W' && str[0] != 'S' && str[0] != 'N')
    {
        cout << "0\n";
        return;
    }

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];

        if (c == 'W')
            loca = 2;
        else if (c == 'S')
            loca = 3;
        else if (c == 'N')
            loca = 1;
        else if (c == 'E')
            loca = 0;
        else if (c == 'R')
            loca = (loca + 3) % 4;
        else if (c == 'L')
            loca = (loca + 1) % 4;
        else if (c == 'B')
            loca = (loca + 2) % 4;

        x += dx[loca];
        y += dy[loca];
    }

    double distance = calcu(x, y);
    cout << fixed << setprecision(3) << distance << endl;
}

int main()
{
    rundebug(true); // true or false to enable/disable file input from input.INP
    test_case(1);   // -1 to input from cin OR i > time > 0 to run a loop
    return 0;
}