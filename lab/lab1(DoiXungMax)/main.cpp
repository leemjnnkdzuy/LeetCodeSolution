#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

bool check(const string& vec) 
{
    for (int i = 0; i < vec.size() / 2; i++) 
    {
        if (vec[i] != vec[vec.size() - 1 - i]) 
        {
            return false;
        }
    }
    return true;
}

int string_to_int(const string& vec) 
{
    int result = 0;
    for (int i = 0; i < vec.size(); i++) 
    {
        result = result * 10 + (vec[i] - '0');
    }
    return result;
}

int length_of_num(int num) 
{
    int result = 0;
    while (num > 0) 
    {
        num /= 10;
        result++;
    }
    return result;
}

void func(const string& num) 
{
    if (num.empty())
    {
        cout << "NO" << endl;
        return;
    }

    string vec = num;
    vector<vector<int>> vec_temp(10, vector<int>(2, 0));
    int temp = 0, halft = -1;

    for (int i = 0; i < 10; i++) 
    {
        vec_temp[i][0] = i;
    }

    for (int i = 0; i < vec.size(); i++) 
    {
        int digit = vec[i] - '0'; 
        vec_temp[digit][1]++;
    }

    for (int i = 0; i < 10; i++) 
    {
        if ((vec_temp[i][1] % 2) != 0) 
        {
            temp++;
            halft = vec_temp[i][0];
        }
    }

    if (temp > 1) 
    {
        cout << "NO" << endl;
        return;
    }

    string result(vec.size(), '\0');
    int left = 0;
    int right = vec.size() - 1;

    for (int i = 9; i >= 0; i--) 
    {
        while (vec_temp[i][1] > 1) 
        {
            result[left++] = '0' + i;
            result[right--] = '0' + i;
            vec_temp[i][1] -= 2;
        }
    }

    if (halft != -1) 
    {
        result[left] = '0' + halft;
    }

    int start = 0;
    while (result[start] == '0' && start < result.size()) 
    {
        start++;
    }
    
    string ans_result = result.substr(start);

    if (num.size() != ans_result.size()) 
    {
        cout << "NO" << endl;
        return;
    } 
    else 
    {
        cout << "YES " << ans_result << endl;
        return;
    }
}

int main() 
{
    freopen("DoiXungMax.INP", "r", stdin);

    int n;
    cin >> n;
    vector<string> num(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        func(num[i]);
    }

    return 0;
}
