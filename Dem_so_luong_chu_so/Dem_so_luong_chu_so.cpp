#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
    long double so_luong_chu_so = 1, so, a = 1;

    cout << "Nhap vao chu so : ";
    cin >> so;
    
    if (so < 0)
    {
        so = so * -1;
    }
    
    while ((a / so) < 1)
    {
        so_luong_chu_so++;
        a = a * 10;
    }
    
    cout << "So chu so la : " << so_luong_chu_so;

    _getch();
    return 0;
}