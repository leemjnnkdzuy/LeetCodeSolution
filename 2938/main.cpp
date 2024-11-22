#include <iostream>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;

void hoan_vi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

vector<int> string_to_arr(string str) {
    vector<int> arr;
    for (int i = 0; i < str.length(); i++) {
        arr.push_back(str[i] - '0');
    }
    return arr;
}

int func(string str) {
    
    vector<int> arr = string_to_arr(str);
    int size = arr.size();
    int temp = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[j] == 0) {
                    hoan_vi(arr[i], arr[j]);
                    temp++;
                    break;
                }
            }
        }
    }

    return temp;
}

int main() {
    string str = "11000111";

    cout << "So lan hoan vi: " << func(str) << endl;

    _getch();
    return 0;
}