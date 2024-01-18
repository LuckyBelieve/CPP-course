#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

void PrintList(Node *node){
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

int main(){
    Node *node1 = new Node(12);
    Node *node2 = new Node(14);
    Node *node3 = new Node(16);
    Node *node4 = new Node(18);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node *head = node1;
    PrintList(head);

    return 0;
};