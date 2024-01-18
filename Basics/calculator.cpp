#include <iostream>
using namespace std;
namespace arthimetic{
    int add(int a,int b){
        return a + b;
    }
    int subtract(int a,int b){
        return a - b;
    }
    int multiply(int a,int b){
        return a * b;
    }
    int divide(int a,int b){
        if(b != 0){
            return a / b;
        }
        else{
            cout << "Error: you can not divide by zero" << endl;
            return 0;
        }
    }
    int modulus(int a,int b){
        if(b != 0){
            return a % b;
        }
        else{
            cout << "Error: you can not modulus by zero" << endl;
            return 0;
        }
    }
}
int main(){
    char choice;
    do
    {
        cout << "MENU"<< endl;
        cout << "1. addition" <<endl;
        cout << "2. subtraction" <<endl;
        cout << "3. multiplication" <<endl;
        cout << "4. division" <<endl;
        cout << "5. Modulus" <<endl;
        int operation;
        cout << "Enter your operation" << endl;
        cin>>operation;
        if(operation >= 1 && operation <=5){
            int num1,num2;
            cout << "Enter your two numbers: ";
            cin >> num1 >> num2;
            int result;
            switch (operation)
            {
            case 1:result = arthimetic::add(num1,num2);
                break;
            case 2:result = arthimetic::subtract(num1,num2);
               break;
            case 3:result = arthimetic::multiply(num1,num2);
               break;
            case 4:result = arthimetic::divide(num1,num2);
               break;
            case 5:result = arthimetic::modulus(num1,num2);
            }
            cout << "result"<<result <<endl;
            cout << "Continue? (y/n): ";
            cin >> choice;
        }
        else{
            cout << "Invalid choice. Please enter a valid operation (1 to 5)." << endl;
            choice = 'y';
        }
    } while (choice == 'y' || choice == 'Y');
}