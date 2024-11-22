#include <iostream>
#include <windows.h>

using namespace std;


void TextColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


int random(int minN, int maxN)
{
    return minN + rand() % (maxN + 1 - minN);
}


int main()
{
    float x, y, z;


    for (y = 1.5; y > -1.5; y -= 0.1)
    {
        for (x = -1.5; x < 1.5; x += 0.05)
        {
            z = x * x * y * y - 1;
            putchar(z * z * z - x * x * y * y * y <= 0.0 ? '*' : ' ');
        }
        Sleep(100);
        putchar('\n');
    }
    

    return 0;
}