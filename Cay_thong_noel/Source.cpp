#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

void In_cay_thong(int so_tang_cua_cay_thong)
{
	//in táng lá
	for (int i = 1; i <= so_tang_cua_cay_thong; i++)
	{
		//in khoảng trắng
		for (int j = 1; j <= so_tang_cua_cay_thong - i; j++)
		{
			cout << " ";
		}
		//in lá
		for (int k = 1; k <= i; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

int main()
{
	int so_tang_cua_cay_thong;


	cout << "Nhap n la` so tang cua cay thong :";
	cin >> so_tang_cua_cay_thong;


	In_cay_thong(so_tang_cua_cay_thong);


	_getwch();
	return 0;
}