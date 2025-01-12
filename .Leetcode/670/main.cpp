#include <vector>
#include <iostream>
#include <string>

using namespace std;

#define DEBUG
#ifdef DEBUG
    #define D(x) x;
#else
    #define D(x) ;
#endif


#define FI "input.INP"

int maximumSwap(int num){
    string arrNums, arrNumsTemp;
    arrNums = to_string(num);
    arrNumsTemp = to_string(num);

    int max = num;
    int maxTemp;

    for (int i = 0; i < arrNums.size(); i++)
    {
        for (int j = i + 1; j < arrNums.size(); j++)
        {
            swap(arrNums[i], arrNums[j]);
            maxTemp = stoi(arrNums);
            if (maxTemp > max)
            {
                max = maxTemp;
                arrNums = arrNumsTemp;
            }else{
                arrNums = arrNumsTemp;
            }
        }
    }
    return max;
}

int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    cout << maximumSwap(num) << endl;

    return 0;
}