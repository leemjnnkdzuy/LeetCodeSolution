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

int tinh_n_mu_x(int x, int n)
{
    int ket_qua = 1;
    for (int i = 1; i <= n; i++)
    {
        ket_qua = ket_qua * x;
    }
    
    return ket_qua;
}

int main()
{   
    int x, n, ket_qua = 0;

    cout << "Nhap vao so nguyen x : ";
    cin >> x;

    cout << "Nhap vao so nguyen n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        ket_qua = ket_qua + (tinh_n_mu_x(x, i) / giai_thua(i));
    }

    cout << "Ket qua la : " << ket_qua;

    _getch();
    return 0;
}
