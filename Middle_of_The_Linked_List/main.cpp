#include <iostream>
#include <conio.h>

using namespace std;

struct Node
{
    int data;
    Node* NextNode;
};

void Add_First_Node(Node*& node, int data){
    Node* NewNode = new Node();
    NewNode->data = data;
    NewNode->NextNode = node;

    node = NewNode;
}

void Add_End_Node(Node*& node, int data){
    Node* NewNode = new Node();
    NewNode->data = data;
    NewNode->NextNode = nullptr;
    
    Node* TempNode = node;

    if (node == nullptr) {
        node = NewNode;
    } else {
        while (TempNode->NextNode != nullptr)
        {
            TempNode = TempNode->NextNode;
        }
        TempNode->NextNode = NewNode;
    }
}

int Size_Of_List_Node(Node*& node){
    Node* TempNode = node;
    int size = 0;
    
    while (TempNode != nullptr)
    {
        size++;
        TempNode = TempNode -> NextNode;
    }

    return size;
}

int Middle_Value_Of_List_Node(Node*& node){
    int Middle_Location = (Size_Of_List_Node(node) / 2);
    Node* TempNode = node;

    while (Middle_Location > 0) {
        TempNode = TempNode->NextNode;
        Middle_Location--;
    }

    return TempNode->data;
}

void In_List_Node(Node*& node){
    Node* TempNode = node;
    while (TempNode != nullptr) {
        cout << TempNode->data << " -> ";
        TempNode = TempNode->NextNode;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* A = nullptr;
    int size, temp;

    cout << "Nhap so luong Node cua list : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Nhap gia tri cua Node : ";
        cin >> temp;
        Add_First_Node(A, temp);
    }

    In_List_Node(A);

    cout << "Gia tri o giua list la : " << Middle_Value_Of_List_Node(A) << endl;

    _getch();
    return 0;
}