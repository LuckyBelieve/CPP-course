#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Queue{
	int front, rear , capacity;
	//Dynamic array usage in c++ and using a dynamic and static araray the implementation will sstill e the same
	int* queue;
	Queue(int c){
		front=rear=0;
		capacity=c;
		queue = new int;
	}
	~Queue(){
		delete[] queue;
	}
	// inserting an element at the rear of the queue
	
	void enqueue(int data){
		if(capacity == rear){
			cout<<endl<< "The queue is full"<<endl;
			return;
		}else{
			queue[rear]=data;
			rear++;
		}
		return;
	}
	void dequeue(){
		//if queue is empty
		if(front == rear){
			cout<<"The Queue is empty"<<endl;
			return;
		} else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
            // decrement rear
            rear--;
        }
        return;
	}
	void queueFront(){
		if(front == rear){
			cout<<" The Queue is empty"<<endl;
			return;
			
		} else{
		cout<< "The front element is "<<queue[front];
		return;	
		}
	}
	  // print queue elements
    void queueDisplay()
    {
        int i;
        if (front == rear) {
        cout<<"Queue is Empty"<<endl;
            return;
        }
        // traverse front to rear and print elements
        for (i = front; i < rear; i++) {
            cout<<queue[i]<<" ,";
        }
        return;
    }
};
int main (void){
	Queue q(4);
	q.queueDisplay();
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	
	q.queueDisplay();
	q.enqueue(60);
	q.dequeue();
	q.dequeue();
	q.enqueue(60);
	q.queueDisplay();
}