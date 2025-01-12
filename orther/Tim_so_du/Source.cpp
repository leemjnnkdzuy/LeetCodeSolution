#include <iostream>

using namespace std;

int main() 
{
	int a, b, c;
	cout << "nhap a :";
	cin >> a;
	cout << "nhap b :";
	cin >> b;
	
	while (a < b)
	{ 
		system("cls");
		cout << "nhap a (a > b) :";
		cin >> a;
		cout << "nhap b (a > b) :";
		cin >> b;

	}

	c = a % b;

	cout << "phan du cua phep toan la : " << c << endl;

	system("pause");
	return 0;
}