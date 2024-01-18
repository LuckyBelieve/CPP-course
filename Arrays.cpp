#include <iostream>
using namespace std;
int main(){
    int myArray[5]={};
    int size = sizeof(myArray)/sizeof(int);
    for (int i = 0; i < size; i++){
        cout << myArray[i] <<endl;
    }
}