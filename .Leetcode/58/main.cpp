#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

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

    if (time == -1)
    {
        cin >> t;
        while (t--)
        {
            func();
        }
    }
    else
    {
        while (time--)
        {
            func();
        }
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

int lengthOfLastWord(string s) {
    int res = 0;
    int left = 0, right = s.size()-1; 
    while (left < s.size() && s[left] == ' ') {
        left++;
    }
    while (right >= 0 && s[right] == ' ') {
        right--;
    }

    for (int i = left; i <= right; i++) {
        if (s[i] == ' ') {
            res = 0;
        }
        if (s[i] != ' ') {
            res++;
        }
    }

    return res;
}

void func()
{
    string s = "luffttty is still joyboy";
    cout << lengthOfLastWord(s) << endl;
}

int main()
{
    rundebug(true); // true or false to enable/disable file input from input.INP
    test_case(1);   // -1 to input from cin OR i > time > 0 to run a loop
    return 0;
}