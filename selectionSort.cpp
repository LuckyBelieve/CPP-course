#include <iostream>
using namespace std;
void selectionSort(int array[],int n){
    for (int i = 0; i < n-1; i++){
       int targetIndex = i;
       for (int j = i+1; j < n; j++){
        if (array[j] < array[targetIndex]){
            targetIndex = j;
        }
       }
       swap(array[i],array[targetIndex]);
    }
}
int main(){
    int array[] = {21,12,34,23,54,65,45,61,32,11};
    int n = sizeof(array)/sizeof(array[0]);
    selectionSort(array, n);
    cout << "sorted array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout<< array[i]<<" ";
    }
    cout<< endl;
    
}