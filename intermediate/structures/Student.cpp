#include <iostream>
using namespace std;

struct Student
{
   string name;
   int age;
   string school;

   Student(){};
   Student(string n, int a, string s){
    name = n;
    age = a;
    school = s;
   };
};

int main(){
    struct Student s1("divine",16,"RCA");
    cout << s1.name << endl;

    Student s2 = Student("peter",14,"rca");
    cout << s2.name << endl;

    Student *s3 = new Student("Lucky",17,"rca");
    cout << s3->name << endl;


}
