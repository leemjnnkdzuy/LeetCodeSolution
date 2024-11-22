#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

void Input(vector<int> &arr)
{
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

bool func(vector<int> arr){
    
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if ((i !=j ) && (arr[i] / 2 == arr[j]))
            {
                return true;
                break;
            }
            
        }
    }
    return false;
}
int main(){
    vector <int> arr;
    Input(arr);

    if (func(arr))
    {
        cout << "true";
    }else{
        cout << "false";
    }
    

    _getch();
    return 0;
}