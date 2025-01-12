#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, x, b = 0;

    cout << "Nhap vao so nguyen A : ";
    cin >> a;
    cout << "Nhap vao so nguyen x : ";
    cin >> x;

    while (x <= a)
    {
        x = x * x;
        b++;
    }
    
    cout << b;

    getch();
    return 0;
}