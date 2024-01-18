#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of natural numbers you want to find the sum for " << endl;
    cin >> n;
    int squareSum = 0;
    int sumSquare =0;
    for (int i = 0; i <=n ; i++)
    {
        sumSquare += i*i;
        squareSum += i;
    }
    int squareOfsum =squareSum * squareSum  ;
    int difference =squareOfsum - sumSquare  ;
    cout << "the difference is "<<difference <<endl;
}