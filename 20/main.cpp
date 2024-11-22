#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isValid(string s) {
    vector<int> stack;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            stack.push_back(1);
        }else if(s[i] == '['){
            stack.push_back(2);
        }else if(s[i] == '{'){
            stack.push_back(3);
        }else if(s[i] == ')'){
            if(stack.size() == 0 || stack.back() != 1){
                return false;
            }
            stack.pop_back();
        }else if(s[i] == ']'){
            if(stack.size() == 0 || stack.back() != 2){
                return false;
            }
            stack.pop_back();
        }else if(s[i] == '}'){
            if(stack.size() == 0 || stack.back() != 3){
                return false;
            }
            stack.pop_back();
        }
    }
    return stack.size() == 0;
}

void func(){

    string a = "()";
    cout << isValid(a) << endl;
    a = "()[]{}";
    cout << isValid(a) << endl;
    a = "(]";
    cout << isValid(a) << endl;
}

int main(){

    return 0;
}