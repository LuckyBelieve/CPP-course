#include <iostream>
using namespace std;
void quadratic(long n){
    int s  = 0;
    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < n; j++)
    {
        s+=1;
        cout << "i = "<<i << "j = "<<j <<" and step s= "<<s << endl;
    }
    cout << endl;
    }
}