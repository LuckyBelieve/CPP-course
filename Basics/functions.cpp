#include <iostream>
using namespace std;
// int addition(int a , int b);
template<typename groupc>
groupc addition(groupc a, groupc b){
  return a+b;  
}

int main(){
    // int num1,num2;
    // cout<<"Enter num1 and num2"<<endl;
    // cin>>num1>>num2;
    cout<<"the sum is "<<addition(12,13)<<endl;
}

// int addition(int a, int b){
//     return a + b;
// }