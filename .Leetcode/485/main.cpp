#include <vector>
#include <iostream>

using namespace std;

void Add(vector<int> &arr)
{
    int temp, n;

    cout << "Nhap so luong phan tu : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i << " : ";
        cin >> temp;

        while (temp != 1 && temp != 0)
        {
            cout << "Nhap (0 hoac 1) phan tu thu " << i << " : ";
            cin >> temp;
        }
        arr.push_back(temp);
    }
}

int func(vector<int> &arr)
{
    int size = arr.size();
    int temp = 0;
    int max_temp = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] == 1)
        {
            temp++;
        }
        else
        {
            temp = 0;
        }

        if (temp > max_temp)
        {
            max_temp = temp;
        }
    }
    return max_temp;
}

int main()
{
    vector<int> arr;

    Add(arr);
    cout << "So lien tiep lon nhat trong mang la : " << func(arr);

    return 0;
}