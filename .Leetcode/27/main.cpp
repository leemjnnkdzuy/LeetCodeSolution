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

vector<int> removeElement(vector<int> &nums, int val) {
    vector<int> arr;
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            arr.push_back(nums[i]); 
        }
    }

    return arr;
}

int main()
{
    vector<int> arr1, arr = { 3, 2, 2, 3 };
    int val = 3;

    arr1 = removeElement(arr, val);

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << ", ";
    }
    
    _getch();
    return 0;
}