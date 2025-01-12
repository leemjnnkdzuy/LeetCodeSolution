#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void Add_Node(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* Node = nullptr; // Khởi tạo danh sách rỗng
    Add_Node(Node, 3);
    Add_Node(Node, 2);
    Add_Node(Node, 1);
    printList(Node);

    return 0;
}
