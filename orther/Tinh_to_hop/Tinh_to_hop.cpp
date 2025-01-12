#include <iostream>
#include <conio.h>

using namespace std;

int giai_thua(int n)
{
    int ket_qua = 1;

    for (int i = 1; i <= n; i++)
    {
        ket_qua = ket_qua * i;
    }
    
    return ket_qua;
}

int main ()
{
    int n, k;

    cout << "Nhap vao so nguyen n : ";
    cin >> n;

    cout << "Nhap vao so nguyen k : ";
    cin >> k;

    cout << "To hop chap " << k << " cua " << n << " la : " << (giai_thua(n)) / (giai_thua(k) * giai_thua(n - k));

    _getch();
    return 0;
}
