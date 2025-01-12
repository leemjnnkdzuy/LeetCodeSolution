#include <iostream>
#include <vector>
#include <string>

using namespace std;    

int maxArea(vector<int>& height) {
    int Max = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right){
        Max = max(Max, min(height[left], height[right]) * (right - left));
        if (height[left] < height[right]){
            left++;
        } else {
            right--;
        }
    }

    return Max;
}

void func(){

}

int main(){

    func();

    return 0;
}