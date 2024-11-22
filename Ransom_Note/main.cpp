#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    // Tạo một bảng băm để đếm số lần xuất hiện của từng ký tự trong magazine
    unordered_map<char, int> charCount;
    
    // Duyệt qua chuỗi magazine và đếm số lần xuất hiện của từng ký tự
    for (char c : magazine) {
        charCount[c]++;
    }
    
    // Duyệt qua chuỗi ransomNote
    for (char c : ransomNote) {
        // Nếu ký tự c không có trong magazine hoặc đã được dùng hết, trả về false
        if (charCount[c] <= 0) {
            return false;
        }
        // Giảm số lượng ký tự c sau khi sử dụng
        charCount[c]--;
    }
    
    return true;
}

int main() {
    string ransomNote = "aa";
    string magazine = "aab";

    if (canConstruct(ransomNote, magazine)) {
        cout << "Can construct ransom note" << endl;
    } else {
        cout << "Cannot construct ransom note" << endl;
    }

    return 0;
}
