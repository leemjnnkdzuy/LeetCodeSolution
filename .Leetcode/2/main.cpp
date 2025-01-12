#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <cmath>
#include <climits>

using namespace std;


#define DEBUG 
#ifdef DEBUG
    #define D(x) x;
#else
    #define D(x) ;
#endif

#define FI "input.INP"

struct ListNode
{
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int x) : val(x), next(nullptr) {}
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* Temp = new ListNode(0);
    ListNode* temp = Temp;

    long long a = 0, b = 0, c;
    long long carry = 0;

    c = 1;
    while (l1 != nullptr) {
        a += l1->val * c;
        l1 = l1->next;
        c *= 10; 
    }

    c = 1;
    while (l2 != nullptr) {
        b += l2->val * c;
        l2 = l2->next;
        c *= 10;
    }

    long long sum = a + b;

    if (sum == 0) return new ListNode(0);

    while (sum != 0) {
        temp->next = new ListNode(sum % 10);
        sum /= 10;
        temp = temp->next; 
    }

    return Temp->next; 
}


int main(){
    freopen(FI, "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}

    