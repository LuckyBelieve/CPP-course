#include <iostream>
using namespace std;

class Stack{
    int *arr;
    int nextIndex;
    int capacity;

    public:
    Stack(){
        capacity = 4;
        arr = new int[capacity];
        nextIndex = 0;
    }
    Stack(int cap){
        capacity = cap;
        arr = new int[capacity];
        nextIndex = 0;
    }
    int size(){ return nextIndex;};

    bool isEmpty(){
        if(nextIndex == 0)return true;
        return false;
    }
    void push (int element){
        if(nextIndex == capacity){
            cout<<"stack overflow"<<endl;
        }
        arr[nextIndex] = element;
        nextIndex++;
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack underflow"<<endl;
            return;
        }
        nextIndex--;
    }
    int top(){
        if(isEmpty()){
            cout<<"stack underflow"<<endl;
            return 0;
        }
        return arr[nextIndex-1];
    }
};

int main(){
    Stack stack1(5);
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(2);

    cout<<"size:"<<stack1.size()<<endl;
    
    while(!stack1.isEmpty()){
    cout<<stack1.top()<<endl;
    stack1.pop();
  }  
}