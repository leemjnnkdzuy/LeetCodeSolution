#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	int but, tien_but, sach, tien_sach, thuoc, tien_thuoc, viet_chi, tien_viet_chi;

	cout << "Vat dung bao gom :\n";
	cout << "1: But bi (5k/1 cay)\n";
	cout << "2: Sach (10k/1 quyen)\n";
	cout << "3: Thuoc (6k/1 cay)\n";
	cout << "4: Viet chi (3k/1 cay)\n\n\n\n";

	Sleep(500);

	cout << "So but bi can mua la : ";
	cin >> but;
	cout << "So sach can mua la : ";
	cin >> sach;
	cout << "So thuoc can mua la : ";
	cin >> thuoc;
	cout << "So viet chi can mua la : ";
	cin >> viet_chi;
	cout << "\n\n\n\n";

	Sleep(500);
	system("cls");

	tien_but = 5000 * but;
	tien_sach = 10000 * sach;
	tien_thuoc = 6000 * thuoc;
	tien_viet_chi = 3000 * viet_chi;

	cout << "Tong :\n";
	cout << "1. But bi  :  5,000VND x " << but << " = " << tien_but << "VND\n";
	cout << "1. Sach    : 10,000VND x " << thuoc << " = " << tien_thuoc << "VND\n";
	cout << "1. Thuoc   :  6,000VND x " << sach << " = " << tien_sach << "VND\n";
	cout << "1. Viet chi:  3,000VND x " << viet_chi << " = " << tien_viet_chi << "VND\n";

	cout << "Tong so tien can phai tra la :" << tien_but + tien_sach + tien_thuoc + tien_viet_chi << "VND";

	_getch();
	system("exit");

	return 0;
}