#include <iostream>
using namespace std;

// Node structure definition for a doubly linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor to initialize data and pointers
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

// Doubly linked list class definition
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor to initialize an empty list
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a node at the end of the list
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);

        if (!head) {
            // If the list is empty, set both head and tail to the new node
            head = tail = newNode;
        } else {
            // Otherwise, add the new node to the end and update the tail
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Function to delete a node from the end of the list
    void deleteFromEnd() {
        if (!head) {
            cerr << "List is empty" << endl;
            return;
        }

        if (head == tail) {
            // If there is only one node in the list
            delete head;
            head = tail = nullptr;
        } else {
            // Traverse to the second-to-last node
            Node* toDelete = tail;
            tail = toDelete->prev;
            tail->next = nullptr;

            // Delete the last node
            delete toDelete;
        }
    }

    // Function to display the elements of the list
    void displayList() const {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    // Example: Deleting a node from the end of a doubly linked list
    DoublyLinkedList myList;

    // Insert nodes at the end
    myList.insertAtEnd(1);
    myList.insertAtEnd(2);
    myList.insertAtEnd(3);

    // Display the doubly linked list before deletion
    cout << "Doubly Linked List (Before Deletion): ";
    myList.displayList();

    // Delete a node from the end
    myList.deleteFromEnd();

    // Display the doubly linked list after deletion
    cout << "Doubly Linked List (After Deletion): ";
    myList.displayList();

    return 0;
}
