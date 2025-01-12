#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
    int D, r, a, pi = 3.14;
    cout << "tinh chu vi, dien tich voi :\n";
    cout << "1: Voi duong kinh\n";
    cout << "2: Voi ban kinh\n";
    cout << "Tinh voi : ";
    cin >> a;
    while (a != 1 && a != 2)
    {
        system("cls");
        cout << "tinh chu vi, dien tich voi :\n";
        cout << "1: Voi duong kinh\n";
        cout << "2: Voi ban kinh\n";
        cout << "Tinh voi : ";
        cin >> a;
        Sleep(500);
    }

    system("cls");

    if (a == 1)
    {
        cout << "nhap D = ";
        cin >> D;

        cout << "Chu vi hinh tron voi D = " << D << "la : " << D * pi;
        cout << "\nDien tich hinh tron voi D = " << D << "la : " << ((D * D) / 4) * pi;
    }
    else if (a == 2)
    {
        cout << "nhap r = ";
        cin >> r;

        cout << "Chu vi hinh tron voi r = " << r << " la : " << 2 * r * pi;
        cout << "\nDien tich hinh tron voi r = "<< r << " la : " << (r * r)*pi;
    }


    _getch();
    system("pause");

    return 0;
}