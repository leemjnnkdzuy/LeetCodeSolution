#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

void Input(vector<int>& arr){
    int size;
    cout << "Nhap so luong phan tu cua mang : ";
    cin >> size;
    
    arr.resize(size);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Nhap gia tri phan tu thu " << i << " : ";
        cin >> arr[i];
    }
}

int Dem_so_phan_tu(int& n){
    int size = 0;

    while (n != 0) {
        n /= 10;
        size++;
    }
    return size;
}

int func(vector<int>& arr){
    int temp = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if ((Dem_so_phan_tu(arr[i]) % 2 == 0))
        {
            temp++;
        }
        
    }
    return temp;
}

int main(){
    vector<int> arr;

    Input(arr);

    cout << func(arr);

    _getch();
    return 0;
}