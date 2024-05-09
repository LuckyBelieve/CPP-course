#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int d){
        this->data = d;
        next = NULL;
    }
};

class Stack{
    Node *head;
    int size;

public:
    Stack(){
        head = NULL;
        size = 0;
    }
    
    int getSize(){ return size; }
    bool isEmpty(){ return size == 0; }

    void push(int element){
        Node *newNode = new Node(element);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"Empty stack"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int top(){
        if(isEmpty()){
            cout<<"Empty stack"<<endl;
            return -1; // Returning -1 when stack is empty
        }
        return head->data;
    }
};


int main(){
   
};