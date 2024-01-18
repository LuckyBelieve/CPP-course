#include <iostream>
using namespace std;
namespace userDefined{
    int insideNamespace = 20;
    int cout(int namespac){
        return namespac;
    }};

 int myGlobal = 40;
 int cout(int another){
    return another * another;
 };
int main(){
    int localVariable = 30;
    cout<<"the local variable cout in main is "<<localVariable<<endl;
    cout<<"the variable in userdefined namespace is "<<userDefined::insideNamespace<<endl;
    cout<<"the output of cout() in user defined is"<<userDefined::cout(34)<<endl;
    cout<<"the value of my global is"<<::myGlobal<<endl;
    cout<<"the value of my global cout is"<<::cout(34)<<endl;

    return 0;
    }