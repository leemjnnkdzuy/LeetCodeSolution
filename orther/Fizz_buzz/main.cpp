#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

void func(int n){
    if (n % 3 == 0 && n % 5 ==0)
    {
        cout << " FizzBuzz ";
    }
    else if (n % 3 == 0)
    {
        cout << " Fizz ";
    }
    else if (n % 5 == 0)  
    {
        cout << " Buzz ";
    }
    else
    {
        cout << " " << n << " ";
    }
    
}

void Loop(int n){
    for (int i = 1; i <= n; i++)
    {
        func(i);
    }
}

int main(){
    int n;

    cout << "Nhap n : ";
    cin >> n;

    Loop(n);

    _getch();
    return 0;
}