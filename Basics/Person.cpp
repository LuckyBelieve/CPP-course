#include <iostream>
using namespace std;
class Person{
    string name;
    public:
    Person(string fname){
        name = fname;
    };
    void getDetails(){
        cout << name << endl;
    }
};
int main(){
    Person Lucky = Person("Lucky");
    Lucky.getDetails();
}