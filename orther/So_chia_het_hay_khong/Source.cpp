#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, so_chia;

	while (true)
	{
		cout << "Nhap vao so chia : ";
		cin >> so_chia;

		cout << "Nhap vao so bi chia a (a khac 0 va lon hon so chia) : ";
		cin >> a;
		while (a == 0 || a < so_chia)
		{
			system("cls");
			cout << "Nhap vao so chia : " << so_chia << endl;
			cout << "Nhap vao so bi chia a (a khac 0 va lon hon so chia) : ";
			cin >> a;
		}
		cout << "Nhap vao so bi chia b (b khac 0 va lon hon so chia) : ";
		cin >> b;
		while (b == 0 || b < so_chia)
		{
			system("cls");
			cout << "Nhap vao so chia : " << so_chia << endl;
			cout << "Nhap vao so bi chia a (a khac 0 va lon hon so chia) : " << a << endl;			
			cout << "Nhap vao so bi chia b (b khac 0 va lon hon so chia) : ";
			cin >> b;
		}


		if (a % so_chia == 0 && b % so_chia == 0)
		{
			cout << "\n\nCa hai so a va b deu chia het cho " << so_chia;
		}
		else if (a % so_chia == 0)
		{
			cout << "\n\nCo mot so chia het cho " << so_chia << " do la so a = " << a;

		}
		else if (b % so_chia == 0)
		{
			cout << "\n\nCo mot so chia het cho " << so_chia << " do la so b = " << b;

		}
		else
		{
			cout << "\n\nKhong co so bi chia nao chia het cho so chia";

		}


		Sleep(1000);
		_getch();
		system("cls");
	}

	return 0;
}