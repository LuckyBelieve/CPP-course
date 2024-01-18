#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
    else return n*factorial(n-1);
}
int main(){
    int num1;
    cout <<"Enter the number to find its factorial." << endl;
    cin>>num1;
    cout <<"the factorial of " <<num1 <<" is " << factorial(num1) << endl;
    return 0;
}