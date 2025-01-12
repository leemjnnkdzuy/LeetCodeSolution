#include <iostream>
#include <vector>
#include <conio.h>


using namespace std;

void Nhap_Array(int n, vector<int>& arr){
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i << " : ";
        cin >> arr[i];
    }
    
};

void Sum(int n, vector<int>& arr){
    vector<int> arr2(n);

    arr2[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr2[i] = arr[i] + arr2[i - 1];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}


int main(){
    int n;
    cout << "Nhap so phan tu cua mang : ";
    cin >> n;
    vector<int> arr(n);
    Nhap_Array(n, arr);
    Sum(n, arr);

    _getch();
    return 0;
}