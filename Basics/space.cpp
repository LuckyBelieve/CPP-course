#include <iostream>
#include <iomanip>
using namespace std;
namespace groupc{
    string fname="Mugisha";
    int cout(int a , int b){
        return a*b+b;
    }
}
string fname = "john";
int main(){
    string fname = "mary";
    cout<<"Hello"<<sewt(10)<<fname<<endl;
    cout<<"Good afternoon"<<::fname<<endl;
    cout<<"good afternoon"<<groupc::fname<<endl;
    cout<<"groupc cout is"<<groupc::cout(10,20)<<endl;
    double num = 123456.7869;
    cout<<setprecision(2)<<fixed<<num<<endl;
    cout<<setprecision(2)<<scientific<<num<<endl;
    int num2 = 95;
    cout<<"decimal"<<dec<<num2<<endl;
    cout<<"decimal"<<oct<<num2<<endl;
    cout<<"decimal"<<hex<<num2<<endl;


}