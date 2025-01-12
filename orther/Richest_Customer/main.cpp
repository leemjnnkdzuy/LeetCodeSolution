#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;


void Nhap_Arr(int bank, int costomer, vector<vector<int>>& arr){
    for (int i = 0; i < bank; i++)
    {
        for (int j = 0; j < costomer; j++)
        {
            cout << "Nhap phan tu thu " << i << " " << j << " : ";
            cin >> arr[i][j];
        }
    }
};

void Sum(int bank, int costomer, vector<vector<int>>& arr){
    vector<int> arr2(bank);

    for (int i = 0; i < bank; i++)
    {
        arr2[i] = 0;
        for (int j = 0; j < costomer; j++)
        {
            arr2[i] += arr[i][j];
        }
    }
    
    int max = arr2[0], temp;
    for (int i = 1; i < bank; i++)
    {
        if (max < arr2[i])
        {
            max = arr2[i];
            temp = i;
        }
    }
    cout << "Ngan hang giau nhat "<< temp <<" voi so tien la : " << max;
}

int main(){
    int bank, costomer;
    cout << "Nhap so ngan hang : ";
    cin >> bank;
    cout << "Nhap so khach hang : ";
    cin >> costomer;
    vector<vector<int>> arr(bank, vector<int>(costomer));
    Nhap_Arr(bank, costomer, arr);
    Sum(bank, costomer, arr);

    _getch();
    return 0;
}