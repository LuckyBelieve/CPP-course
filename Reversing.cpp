#include <iostream>
using namespace std;
void Reversed(int marks[],int n){
  int start = 0;
    int end = n - 1;
    
    while (start < end) {
        int temp = marks[start];
       marks[start] =marks[end];
       marks[end] = temp;

        start++;
        end--;
    }
}
int main(){
 int scores[] = {1,2,3,4,5,6,7,8};

 int size = sizeof(scores) / sizeof(int);
 Reversed(scores,size);

 for (int i = 0; i < size; i++) {
        std::cout << scores[i] << " ";
 }
}