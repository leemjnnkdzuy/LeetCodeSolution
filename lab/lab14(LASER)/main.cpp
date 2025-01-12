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

struct Point
{
    int x;
    int y;
    int des;
};

void Run(int M, int N, Point point)
{
    vector<vector<int>> arr(M, vector<int>(N, 0));
    int step = 0;

    while (true)
    {
        if ((point.x == 0 && point.y == 0) ||
            (point.x == 0 && point.y == M) ||
            (point.x == N && point.y == 0) ||
            (point.x == N && point.y == M))
        {
            cout << step + 1;
            return;
        }

        if (point.x < 0 || point.x >= N || point.y < 0 || point.y >= M)
        {
            cout << -1;
            return;
        }

        if (arr[point.y][point.x] == 1)
        {
            cout << -1;
            return;
        }

        arr[point.y][point.x] = 1;
        step++;

        if (point.des == 1)
        {
            if (point.x == 0)
            {
                while (point.y <= M)
                {
                    point.x++;
                    point.y++;
                }
                point.des = 2;
            }
            else if (point.y == M)
            {
                while (point.x >= 0)
                {
                    point.x--;
                    point.y--;
                }
                point.des = 4;
            }
        } 
        else if (point.des == 2)
        {
            if (point.x == N)
            {
                while (point.y <= M)
                {
                    point.x--;
                    point.y++;
                }
                point.des = 1;
            }
            else if (point.y == M)
            {
                while (point.x <= N)
                {
                    point.x++;
                    point.y--;
                }
                point.des = 3;
            }
        } else if (point.des == 3)
        {
            if (point.y ==0 )
            {
                while (point.x <= N)
                {
                    point.x++;
                    point.y++;
                }
                point.des = 2;
            }
            else if (point.x == N)
            {
                while (point.x >= 0)
                {
                    point.x--;
                    point.y--;
                }
                point.des = 4;
            }
        } else if (point.des == 4)
        {
            if (point.y == 0)
            {
                while (point.x >= 0)
                {
                    point.x--;
                    point.y++;
                }
                point.des = 1;
            }
            else if (point.x == 0)
            {
                while (point.x <= N)
                {
                    point.x++;
                    point.y--;
                }
                point.des = 3;
            }
        }
    }
}

void func()
{
    Point point;
    int M, N, I, H;
    cin >> M >> N >> I >> H;

    if (I == 0 || I > M)
    {
        cout << -1;
        return;
    }

    point.x = 0;
    point.y = I;
    point.des = H;

    Run(M, N, point);
}

int main()
{
    rundebug(true); // true or false to enable/disable file input from input.INP
    test_case(1);   // -1 to input from cin OR i > time > 0 to run a loop
    return 0;
}