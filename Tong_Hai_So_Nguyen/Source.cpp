#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;

void Sum(int so_han_thu_nhat, int so_han_thu_hai)
{
	cout << so_han_thu_nhat + so_han_thu_hai;
}

int main()
{
	int so_han_thu_nhat, so_han_thu_hai;
	while (1)
	{
		cout << "nhap so han thu nhat : ";
		cin >> so_han_thu_nhat;
		cout << "nhap so han thu hai : ";
		cin >> so_han_thu_hai;

		cout << "ket qua : " << so_han_thu_nhat << " + " << so_han_thu_hai << " = ";
		Sum(so_han_thu_nhat, so_han_thu_hai);
		cout << "\n";

		system("pause");
		system("cls");
	}
	
	return 0;
}