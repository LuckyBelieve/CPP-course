#include <iostream>
using namespace std;

void insertionSort(int array[],int n){
    int i,key,j;
    cout << "unsorted array" << endl;
    for ( i = 0; i < n; i++)
    {
     cout << array[i]<<" ";
    }
    cout << endl;
    
    for (i = 1; i < n; i++){
        key = array[i];
        j=i-1;
        while (j>=0 && array[j]>key){
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1] = key;
    } 
    cout << "sorted array: " << endl;
    for ( i = 0; i < n; i++)
    {
     cout << array[i]<<" ";
    }
    cout << endl;
}
int main(){
    int array[] = {20,40,12,34,32,23,50,12,15};

    int n = sizeof(array)/sizeof(array[0]);

    insertionSort(array,n);
}