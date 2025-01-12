#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int func(string Chuoi) {
    int score = 0;
    int temp = 0;

    for (int i = 0; i < Chuoi.size(); ++i) {
        if (Chuoi[i] == 'C') {
            temp++;
            score += temp;
        } else if (Chuoi[i] == 'N') {
            temp = 0;
        }
    }

    return score;
}

int main() {
    freopen("SCORE.INP", "r", stdin);

    int n;
    vector<string> str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        str.push_back(temp);
    }

    for (int i = 0; i < n; i++) {
        cout << func(str[i]) << endl;
    }

    return 0;
}