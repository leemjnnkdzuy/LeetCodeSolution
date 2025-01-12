#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool isMatch(string s, string p) {

    vector<vector<bool>> arr(s.size() + 1, vector<bool>(p.size() + 1, false));

    arr[0][0] = true;

    for (int i = 1; i <= p.size(); i++){
        if (p[i-1] == '*'){
            arr[0][i] = arr[0][i - 2];
        }
    }

    for (int i = 1; i <= s.size(); i++){
        for (int j = 1; j <= p.size(); j++){
            if (p[j - 1] == '.' || p[j - 1] == s[i - 1]){
                arr[i][j] = arr[i - 1][j - 1];
            } else if (p[j - 1] == '*'){
                arr[i][j] = arr[i][j - 2];
                if (p[j - 2] == '.' || p[j - 2] == s[i - 1]){
                    arr[i][j] = arr[i][j] || arr[i - 1][j];
                }
            } else {
                arr[i][j] = false;
            }
        }
    }

    return arr[s.size()][p.size()];
}

void func(){
    string s = "aa";
    string p = "a";

    if (isMatch(s, p)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }   
}


int main(){
    
    func();

    return 0;
}