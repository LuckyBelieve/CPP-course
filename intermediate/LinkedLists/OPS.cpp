#include <iostream>
using namespace std;

// Node structure definition for a doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;

    // Constructor to initialize data and pointers
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

// Doubly linked list structure definition
struct DoublyLinkedList {
    Node* head;
    Node* tail;

    // Constructor to initialize an empty list
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
};

// Function to delete a node from the end of the list
void deleteFromEnd(DoublyLinkedList& list) {
    if (!list.head) {
        cerr << "List is empty" << endl;
        return;
    }

    if (list.head == list.tail) {
        // If there is only one node in the list
        delete list.head;
        list.head = list.tail = nullptr;
    } else {
        // Traverse to the second-to-last node
        Node* toDelete = list.tail;
        list.tail = toDelete->prev;
        list.tail->next = nullptr;

        // Delete the last node
        delete toDelete;
    }
}

// Function to display the elements of the list
void displayList(const DoublyLinkedList& list) {
    Node* current = list.head;
    while (current) {
    cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Example: Deleting a node from the end of a doubly linked list
    DoublyLinkedList myList;

    // Insert nodes at the end
    myList.tail = myList.head = new Node(1);
    myList.head->next = new Node(2);
    myList.head->next->prev = myList.head;
    myList.tail = myList.head->next;
    myList.tail->next = new Node(3);
    myList.tail->next->prev = myList.tail;

    // Display the doubly linked list before deletion
    cout << "Doubly Linked List (Before Deletion): ";
    displayList(myList);

    // Delete a node from the end
    deleteFromEnd(myList);

    // Display the doubly linked list after deletion
    cout << "Doubly Linked List (After Deletion): ";
    displayList(myList);

    return 0;
}
