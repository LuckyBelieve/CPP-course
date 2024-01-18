#include <iostream>
using namespace std;
void bubbleSort(int array[], int n){
    int temp;
    cout << "before sorting" << endl;
    for (int i = 0; i < n; i++){
        cout<<array[i]<<" ";
    }
    cout << endl;

    for(int i=0; i< n-1; i++){
        for (int j = 0; j < n-1; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }    
    }
    cout << "after sorting" << endl;
    for (int i = 0; i < n; i++){
        cout <<array[i]<<" ";
    }
    cout << endl;

}
int main(){
 int array[10] = {20,10,15,30,60,40,50,79,23,1};
 int n = sizeof(array)/sizeof(array[0]);
 bubbleSort(array,n);
}