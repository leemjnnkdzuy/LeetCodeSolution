//@LeeMjnnkDzuy

#include <iostream>


using namespace std;


void In(int bang_so_xe)
{
	int nut, a, b, c, d, e;

	//loc so co 5 chu so thanh 5 pan tu
	a = bang_so_xe - bang_so_xe % 10000;
	cout << "Phantu thu nhat : " << a / 10000 << endl; //test

	b = (bang_so_xe - a) - (bang_so_xe - a) % 1000;
	cout << "Phantu thu hai  : " << b / 1000 << endl;//test

	c = (bang_so_xe - a - b) - (bang_so_xe - a - b) % 100;
	cout << "Phantu thu ba   : " << c / 100 << endl; //test

	d = (bang_so_xe - a - b - c) - (bang_so_xe - a - b - c) % 10;
	cout << "Phantu thu tu   : " << d / 10 << endl; //test

	e = (bang_so_xe - a - b - c - d);
	cout << "Phantu thu nam  : " << e << "\n\n"; //test

	// tinh so nut
	nut = ((a / 10000) + (b / 1000) + (c / 100) + (d / 10) + (e)) % 10;


	cout << "So nut cua bien so xe " << bang_so_xe << " la : " << nut;
}

int main()
{
	int bang_so_xe;


	cout << "Nhap bang so xe co 5 so : ";
	cin >> bang_so_xe;
	while (bang_so_xe < 9999 || bang_so_xe > 100000)
	{
		system("cls");
		cout << "Nhap lai bang so xe co 5 so : ";
		cin >> bang_so_xe;
	}


	In(bang_so_xe);


	return 0;
}