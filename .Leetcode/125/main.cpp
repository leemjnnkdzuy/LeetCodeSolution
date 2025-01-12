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

bool isPalindrome(string s) {

    string temp = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A'){
            temp += 'a';
        } else if (s[i] == 'B'){
            temp += 'b';
        } else if (s[i] == 'C'){
            temp += 'c';
        } else if (s[i] == 'D'){
            temp += 'd';
        } else if (s[i] == 'E'){
            temp += 'e';
        } else if (s[i] == 'F'){
            temp += 'f';
        } else if (s[i] == 'G'){
            temp += 'g';
        } else if (s[i] == 'H'){
            temp += 'h';
        } else if (s[i] == 'I'){
            temp += 'i';
        } else if (s[i] == 'J'){
            temp += 'j';
        } else if (s[i] == 'K'){
            temp += 'k';
        } else if (s[i] == 'L'){
            temp += 'l';
        } else if (s[i] == 'M'){
            temp += 'm';
        } else if (s[i] == 'N'){
            temp += 'n';
        } else if (s[i] == 'O'){
            temp += 'o';
        } else if (s[i] == 'P'){
            temp += 'p';
        } else if (s[i] == 'Q'){
            temp += 'q';
        } else if (s[i] == 'R'){
            temp += 'r';
        } else if (s[i] == 'S'){
            temp += 's';
        } else if (s[i] == 'T'){
            temp += 't';
        } else if (s[i] == 'U'){
            temp += 'u';
        } else if (s[i] == 'V'){
            temp += 'v';
        } else if (s[i] == 'W'){
            temp += 'w';
        } else if (s[i] == 'X'){
            temp += 'x';
        } else if (s[i] == 'Y'){
            temp += 'y';
        } else if (s[i] == 'Z'){
            temp += 'z';
        } else if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'u' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z'){
            temp += s[i];
        } else if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9'){
            temp += s[i];
        }
    }

    if (temp.size() == 0){
        return true;
    } else if (temp.size() == 1){
        return true;
    } else if (temp.size() == 2){
        if (temp[0] == temp[1]){
            return true;
        } else {
            return false;
        }
    } else if (temp.size() % 2 == 0){
        for (int i = 0; i < temp.size() / 2; i++)
        {
            if (temp[i] != temp[ (temp.size() - i) - 1])
                return false;
        }
        return true;
    } else {
        for (int i = 0; i < (temp.size() - 1) / 2; i++)
        {
            if (temp[i] != temp[ (temp.size() - i) - 1])
                return false;
        }
        return true;
    }
}

void func()
{
    // code here
}

int main()
{
    rundebug(true); // true or false to enable/disable file input from input.INP
    test_case(1);   // -1 to input from cin OR i > time > 0 to run a loop
    return 0;
}