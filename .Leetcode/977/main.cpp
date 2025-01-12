#include <iostream>
#include <conio.h>
#include <vector>
#include <cmath>

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

vector<int> Arr_Pow(vector<int> arr){
    vector<int> arr_pow(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        arr_pow[i] = pow(arr[i], 2);
    }
    
    return arr_pow;
} 

void Hoan_vi(int& x1, int& x2){
    int temp = x1;
    x1 = x2;
    x2 = temp;
}

vector<int> sorting(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        Hoan_vi(arr[i], arr[minIdx]);  
    }
    return arr;
}

void Out_put(vector<int> arr){
    for (int i = 0; i < arr.size(); i++) {
        cout << "Binh phuong cua phan tu thu " << i + 1 << " la: " << arr[i] << endl;
    }
}

int main(){
    vector<int> Arr;
    Input(Arr);

    vector<int> Arr_temp = Arr_Pow(Arr);

    vector<int> Arr_sorting = sorting(Arr_temp);

    Out_put(Arr_temp);   

    Out_put(Arr_sorting); 

    _getch();
    return 0;
}