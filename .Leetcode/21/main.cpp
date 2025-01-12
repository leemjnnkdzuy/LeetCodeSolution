#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* result = new ListNode();
    ListNode* current = result;
    while(list1 != nullptr && list2 != nullptr){
        if(list1->val < list2->val){
            current->next = list1;
            list1 = list1->next;
        }else{
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }
    if(list1 != nullptr){
        current->next = list1;
    }
    if(list2 != nullptr){
        current->next = list2;
    }
    return result->next;
}

void func(){
    ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode* result = mergeTwoLists(list1, list2);
    while(result != nullptr){
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
}

int main(){
    func(); 

    return 0;
}