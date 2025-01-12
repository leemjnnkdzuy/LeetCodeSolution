#include <iostream>
#include <cmath>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	float so_thap_phan, so_lien_truoc, so_lien_sau;

	while (true)
	{
		cout << "Nhap so thap phan cua ban : ";
		cin >> so_thap_phan;

		if (round(so_thap_phan) < so_thap_phan) 
		{
			so_lien_truoc = round(so_thap_phan);
			so_lien_sau = round(so_thap_phan) + 1;

			cout << "So so nguyen lien truoc so thap phan " << so_thap_phan << " la : " << so_lien_truoc << endl;
			cout << "So so nguyen lien sau so thap phan " << so_thap_phan << " la : " << so_lien_sau;
		}

		else if (round(so_thap_phan) > so_thap_phan)
		{
			so_lien_sau = round(so_thap_phan) ;
			so_lien_truoc = round(so_thap_phan) - 1;

			cout << "So so nguyen lien truoc so thap phan " << so_thap_phan << " la : " << so_lien_truoc << endl;
			cout << "So so nguyen lien sau so thap phan " << so_thap_phan << " la : " << so_lien_sau;
		
		}

		
		Sleep(1000);
		_getch();
		system("cls");
	}
	return 0;
}