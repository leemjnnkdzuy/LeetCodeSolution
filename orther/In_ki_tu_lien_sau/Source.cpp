#include <iostream>
#include <Windows.h>


using namespace std;

int main()
{
	char ki_tu_nhap_vao;
	char bang_chu_cai[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
							 'h', 'i', 'j', 'k', 'l', 'm', 'n',
							 'o', 'p', 'q', 'r', 's', 't', 'u',
							 'v', 'w', 'x', 'y', 'z', 'a'};
	
	while (true)
	{
		cout << "Nhap ki tu dau tien : ";
		cin >> ki_tu_nhap_vao;

		for (int i = 0; i < 26; i++)
		{
			if (bang_chu_cai[i] == ki_tu_nhap_vao)
			{
				cout << "Ki tu lien sau ki tu '" << ki_tu_nhap_vao << "' la : '" << bang_chu_cai[i + 1] << "'" << endl;
			}
		}
	}

	return 0;
}