#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int func(string str){
    unordered_map<string, int> map;

    for(int i = 0; i < str.size() - 2; i++){
        string temp = str.substr(i, 3);
        map[temp]++;
    }

    int max = 0;
    string res;
    //duyet map de tim gia tri max cua map va tra ve key cua gia tri do
    for(auto index : map){
        if(i.second > max){
            max = index.second;
            res = index.first;
        }
    }

    return max;
}

int main(){
    string str;

    cout << "Nhap chuoi : ";
    getline(cin, str);

    cout << func(str);

    _getch();
    return 0;
}
