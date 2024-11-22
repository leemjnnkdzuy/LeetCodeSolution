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

vector<int> func(vector<int> &arr)
{
    vector<int> arr_temp;
    int temp = 0;
    int zeros = 0;

    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
    }

    arr_temp.resize(arr.size() + zeros);

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            arr_temp[temp] = arr[i];
            temp++;
        }
        else{
            arr_temp[temp] = 0;
            arr_temp[temp + 1] = 0;
            temp += 2;
        }
    }
    temp = 0;

    arr_temp.resize(arr.size());

    arr = arr_temp;

    return arr;
}


int main()
{
    vector<int> arr;
    vector<int> arr_temp;

    Input(arr);

    arr_temp = func(arr);

    for (int i = 0; i < arr_temp.size(); i++)
    {
        cout << "Gia tri cua phan tu thu " << i << " la : " << arr[i] <<endl;
    }

    _getch();
    return 0;
}