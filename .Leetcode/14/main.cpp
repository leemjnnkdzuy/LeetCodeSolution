#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string result = "";
    if(strs.size() == 0) return result;

    for(int i = 0; i < strs[0].size(); i++){
        char c = strs[0][i];
        for(int j = 1; j < strs.size(); j++){
            if(i >= strs[j].size() || strs[j][i] != c){
                return result;
            }
        }
        result += c;
    }

    return result;
}

void func(){
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"dog", "racecar", "car"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"", "b"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"a"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"a", "a"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"a", "b"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "a"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "ab"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd", "abcde"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd", "abcde", "abcdef"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd", "abcde", "abcdef", "abcdefg"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi", "abcdefghij"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi", "abcdefghij", "abcdefghijk"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi", "abcdefghij", "abcdefghijk", "abcdefghijkl"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi", "abcdefghij", "abcdefghijk", "abcdefghijkl", "abcdefghijklm"};
    cout << longestCommonPrefix(strs) << endl;
}

int main(){
    func();
    
    return 0;
}