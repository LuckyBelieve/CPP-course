#include <iostream>
using namespace std;
 namespace addition{
    int add(int a, int b) { 
        return a + b;
    }
}
int main(){
    int num1,num2;
    cout << "Enter two numbers:" << endl;
    cin>>num1>>num2;
    cout << "the sum of "<<num1<<" and "<<num2 << "is "<<addition::add(num1,num2)<<endl;
    return 0;
}