#include <iostream>
#include <string>

using namespace std;

void Menu()
{
	system("cls");

	cout << "*==============================================================*" << endl;
	cout << "||     Danh sach tuy chon co the thuc hien:                   ||" << endl;
	cout << "||     1. Nhap so luong va thong tin sih vien can quan ly.    ||" << endl;
	cout << "||     2. In ra thong tin cac sinh vien dang duoc quan ly.    ||" << endl;
	cout << "||     3. Chinh sua thong tin sinh vien.                      ||" << endl;
	cout << "||     4. Them vao 1 sinh vien o vi tri stt bat ki.           ||" << endl;
	cout << "||     5. Xoa thong tin cua 1 hay nhieu sinh vien.            ||" << endl;
	cout << "*==============================================================*" << endl;
	cout << endl;
}


int main()
{
	int chuc_nang, so_luong_sinh_vien;
	char Ten_sinh_vien[100][20];
	string ten_sinh_vien;

	Menu();
	cout << "       Chuc nang muon thuc hien la: ";
	cin >> chuc_nang;
	cout << endl;


	if (chuc_nang == 2 || chuc_nang == 3 || chuc_nang == 4 || chuc_nang == 5)
	{
		cout << "       Hien tai data thong tin sinh vien dang trong ban can nhap thong tin sinh vien." << endl;
		cout << endl;
	}

	if (chuc_nang != 1 && chuc_nang != 2 && chuc_nang != 3 && chuc_nang!= 4 && chuc_nang != 5)
	{
		cout << "       Chuc nang khong co san vui long choc lai chuc nang: ";
		cin >> chuc_nang;
		cout << endl;
		while (chuc_nang != 1 && chuc_nang != 2 && chuc_nang != 3 && chuc_nang != 4 && chuc_nang != 5)
		{
			cout << "       Chuc nang khong co san vui long choc lai chuc nang: ";
			cin >> chuc_nang;
			cout << endl;
			if (chuc_nang == 1)
			{
				cout << "       Hien tai data thong tin sinh vien dang trong ban can nhap thong tin sinh vien." << endl;
			}
			else if (chuc_nang == 2 || chuc_nang == 3 || chuc_nang == 4 || chuc_nang == 5)
			{
				Menu();
				cout << "       Chuc nang muon thuc hien la: " << chuc_nang << endl;
				cout << endl;
				cout << "       Hien tai data thong tin sinh vien dang trong ban can nhap thong tin sinh vien." << endl;
				cout << endl;
			}
		}
	}

	cout << "       Vui long nhap so luong sinh vien can quan ly la: ";
	cin >> so_luong_sinh_vien;
	cout << endl;

	for (int stt = 1; stt <= so_luong_sinh_vien; stt++)
	{
		cout << "       Nhap thong tin cua sinh vien thu tu so " << stt << " :" << endl;
		cout << "       Ten sinh vien:  ";
		cin.ignore();
		getline(cin, ten_sinh_vien);
		ten_sinh_vien = Ten_sinh_vien[stt][1];
	}


	return 0;
}