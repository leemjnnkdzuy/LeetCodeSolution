#include <iostream>
#include <conio.h>

using namespace std;

bool chan_or_le(int& n) {
    if (n % 2 == 0) {       
        return true;
    }
    else {
        return false;
    }
}

void func(int& n) {
    int temp = 0;

    while (n > 0)
    {
        if (chan_or_le(n)){
            n /= 2;
        }
        else
        {
            n -= 1;
        }
        temp++;
    }  

    cout << "So buoc de rut gon la : " << temp;
}

int main() {
    int n;
    cout << "Nhap so tu nhien n : ";
    cin >> n;

    func(n);

    _getch();
    return 0;
}