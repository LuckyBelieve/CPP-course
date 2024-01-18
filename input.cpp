#include <iostream>
using namespace std;
int main(){
    string fname;
    string fullname;
    cout<<"enter your name"<<endl;
    cin>>fname;
    cout<<"Hello"<<fname<<endl;
    cin.ignore();
    cout<<"enter fullname";
    getline(cin,fullname);
    cout<<"Hello"<<fullname<<endl;
    return 0;
}