#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, c;

	cout << "Nhap so nguyen a (a lon hoac bang -10) : ";
	cin >> a;
	while (a < -10)
	{
		system("cls");
		cout << "Nhap so nguyen a (a lon hoac bang -10) : ";
		cin >> a;
	}
	cout << "Nhap so nguyen b (b be hon hoac bang 10) : ";
	cin >> b;
	while (b > 10)
	{
		system("cls");
		cout << "Nhap so nguyen a (a lon hoac bang -10) : " << a;
		cout << "\nNhap so nguyen b (b be hon hoac bang 10) : ";
		cin >> b;
	}

	c = a * b;

	if (c < 0)
	{
		cout << "Tich cua a va b la so am";
		_getch();
		system("exit");

	}
	else if (c > 0)
	{
		cout << "Tich cua a va b la so duong";
		_getch();
		system("exit");
	}
	else
	{
		cout << "Tich cua a va b la 0";
		_getch();
		system("exit");
	}


	return 0;
}