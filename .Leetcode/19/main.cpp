#include <bits/stdc++.h>
#define FI "input.INP"
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void run_debug(bool check) {
    if (check)
        freopen(FI, "r", stdin);
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0, head);
    ListNode* slow = dummy;
    ListNode* fast = dummy;

    for (int i = 0; i <= n; ++i) {
        fast = fast->next;
    }

    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    ListNode* toDelete = slow->next;
    slow->next = slow->next->next;
    delete toDelete;

    ListNode* newHead = dummy->next;
    delete dummy;
    return newHead;
}

void func() {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    int n, a;
    cin >> n;

    while (cin >> a) {
        ListNode* newNode = new ListNode(a);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    head = removeNthFromEnd(head, n);

    ListNode* curr = head;
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;

    while (head) {
        ListNode* toDelete = head;
        head = head->next;
        delete toDelete;
    }
}

int main() {
    run_debug(true);
    func();
    return 0;
}
