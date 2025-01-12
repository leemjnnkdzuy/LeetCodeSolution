#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	int nam_sinh, nam_hien_tai = 2022;

	cout << "Nhap nam sinh cua ban : ";
	cin >> nam_sinh;
	while (nam_sinh > nam_hien_tai || nam_sinh < 1900)
	{
		system("cls");
		cout << "Nhap nam sinh cua ban : ";
		cin >> nam_sinh;
	}
	cout << "Tuoi cua ban la : " << nam_hien_tai - nam_sinh;

	Sleep(5000);
	_getch();
	system("exit");
	return 0;
}