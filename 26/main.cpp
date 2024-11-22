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

vector<int> sorting(vector<int> &arr){
    vector<int> tempArr = arr;
    vector<int> newArr(arr.size());
    int temp, min;

    for (int i = 0; i < newArr.size(); i++)
    {
        min = INT_MAX;
        for (int j = 0; j < tempArr.size(); j++)
        {
            if (tempArr[j] < min)
            {
                min = tempArr[j];
                temp = j;
            }
        }
        tempArr[temp] = INT_MAX;
        newArr[i] = min;
    }
    return newArr;
}

vector<int> removeDuplicates(vector<int>& nums) {
    vector<int> tempArr;
    vector<int> Arr = sorting(nums);
    

    tempArr.push_back(Arr[0]);
    for (int i = 1; i < Arr.size(); i++)
    {
        if (Arr[i] != Arr[i-1])
        {
            tempArr.push_back(Arr[i]);
        }
    }

    return tempArr;
}

int removeDuplicates1(vector<int>& nums) {

    vector<int> Arr = sorting(nums);
    int size = Arr.size();
    int tempArr[size], temp = 0;
    

    tempArr[0] = Arr[0];
    for (int i = 1; i < Arr.size(); i++)
    {
        if (Arr[i] != Arr[i-1])
        {
            tempArr[temp] = Arr[i];
            temp++;
        }
    }

    return temp;
}

int main(){

    vector<int> arr, arr1;

    Input(arr);

    arr1 = removeDuplicates(arr);

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << ", ";
    }
    
    _getch();
    return 0;
}