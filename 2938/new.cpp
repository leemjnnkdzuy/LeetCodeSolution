#include <iostream>
using namespace std;

void Solve(string s)
{
    int step[s.size()];
    int cnt = 0;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        step[i] == cnt;
        if (s[i] == '0')
        {
            ++cnt;
        }
    }

    for (int i = 0; i < s.size(); i++){
        cout << step[i] << " ";
    }

    int MStep = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            MStep += step[i];
        }
    }
    cout << MStep;
}

int main()
{
    Solve("0111");
    return 0;
}