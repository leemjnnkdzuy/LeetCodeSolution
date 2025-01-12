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

vector<int> Link_2_Arr(const vector<int> &arr1, const vector<int> &arr2)
{
    vector<int> newArr;

    newArr.insert(newArr.end(), arr1.begin(), arr1.end());
    newArr.insert(newArr.end(), arr2.begin(), arr2.end());

    return newArr;
}

vector<int> Sorting_Arr(vector<int> &arr)
{
    vector<int> newArr(arr.size());
    vector<int> tempArr = arr;
    int temp;

    for (int i = 0; i < newArr.size(); i++)
    {
        int min = INT_MAX;
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

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> arr1 = nums1;
    arr1.resize(m);
    vector<int> arr2 = nums2;
    arr2.resize(n);

    vector<int> arr = Link_2_Arr(arr1, arr2);
    vector<int> tempArr = Sorting_Arr(arr);

    return tempArr;
}

int main(){
    vector<int> arr1, arr2;
    int m, n;

    vector<int> arr = merge(arr1, m, arr2, n);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";

    }

    _getch();
    return 0;
}