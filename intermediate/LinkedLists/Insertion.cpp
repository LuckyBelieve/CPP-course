#include <iostream>
using namespace std;

  class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    };

  };

  void PrintList(Node *node){
    Node* current = node;
    while (current)
    {
        cout << current->data << endl;
        current = current->next;
    }
};

// inserting at the beginning of the list

void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node(data);  // Create a new node with the given data
    newNode->next = head;            // Set the next pointer of the new node to the current head
    head = newNode;                   // Update the head to point to the new node
}

// inserting a new node at the end of the list

void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);  // Create a new node with the given data

    if (!head) {
        head = newNode;               // If the list is empty, set the head to the new node
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;  // Traverse to the last node
        }
        current->next = newNode;      // Set the next pointer of the last node to the new node
    }
}

// inserting at a specific position in the list

void insertAtPosition(Node*& head, int data, int position) {
    if (position <= 0) {
        std::cerr << "Invalid position" << std::endl;
        return;
    }

    Node* newNode = new Node(data);  // Create a new node with the given data

    if (position == 1 || !head) {
        newNode->next = head;        // If inserting at the beginning or the list is empty
        head = newNode;               // Update the head to point to the new node
        return;
    }

    Node* current = head;
    for (int i = 1; i < position - 1 && current; ++i) {
        current = current->next;      // Traverse to the node at position-1
    }

    if (!current) {
        std::cerr << "Invalid position" << std::endl;
        delete newNode;                // Delete the new node if the position is invalid
        return;
    }

    newNode->next = current->next;    // Set the next pointer of the new node to the next node of the current
    current->next = newNode;          // Set the next pointer of the current node to the new node
}

int main(){



    return 0;
}