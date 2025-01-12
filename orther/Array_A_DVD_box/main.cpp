#include <iostream>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;

struct DVD
{
    string MovieName;
    int Year;
    string Director;
    string Description;
};

void Add_DVD(vector<DVD>& Lib) {
    DVD newDVD;
    
    cout << "Nhap ten phim: ";
    cin.ignore();
    getline(cin, newDVD.MovieName);
    cout << "Nhap nam san xuat: ";
    cin >> newDVD.Year;
    cin.ignore();
    cout << "Nhap ten dao dien: ";
    getline(cin, newDVD.Director);
    cout << "Nhap noi dung phim: ";
    getline(cin, newDVD.Description);

    Lib.push_back(newDVD);
}

void Search_DVD(const vector<DVD>& Lib) {
    string MovieName;
    cout << "Nhap ten phim can tim: ";
    cin.ignore();
    getline(cin, MovieName);

    for (int i = 0; i < Lib.size(); i++) {
        if (Lib[i].MovieName == MovieName) {
            cout << "Thong tin phim can tim: " << endl;
            cout << "So Thu tu: " << i + 1 << endl;
            cout << "Ten phim: " << Lib[i].MovieName << endl;
            cout << "Nam san xuat: " << Lib[i].Year << endl;
            cout << "Dao dien: " << Lib[i].Director << endl;
            cout << "Noi dung: " << Lib[i].Description << endl;
            return;
        }
    }
    cout << "Khong tim thay phim." << endl;
}

void In_All_DVD(const vector<DVD>& Lib) {
    if (Lib.empty()) {
        cout << "Thu vien trong!" << endl;
        return;
    }

    for (int i = 0; i < Lib.size(); i++) {
        cout << "So thu tu: " << i + 1 << endl;
        cout << "Ten phim: " << Lib[i].MovieName << endl;
        cout << "Nam san xuat: " << Lib[i].Year << endl;
        cout << "Dao dien: " << Lib[i].Director << endl;
        cout << "Noi dung: " << Lib[i].Description << endl;
    }
}

int main() {
    vector<DVD> Lib;
    int choice;
    
    while (true)
    {
        system("cls");

        cout << "1. Them DVD" << endl;
        cout << "2. Tim DVD" << endl;
        cout << "3. In tat ca DVD" << endl;
        cout << "4. Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
        case 1:
            Add_DVD(Lib);
            break;
        case 2:
            Search_DVD(Lib);
            break;
        case 3:
            In_All_DVD(Lib);
            break;
        case 4:
            goto endpoint;
        default:
            cout << "Lua chon khong hop le" << endl;
        }
    _getch();
    }

    endpoint:

    return 0;
}
