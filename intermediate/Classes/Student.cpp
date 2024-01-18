#include <iostream>
using namespace std;

class Student
{
public:
   string name;
   int age;
   string school;

   Student(){};
   Student(string n, int a, string s){
    name = n;
    age = a;
    school = s;
   };
   void printme(){
    cout<< name << " " << age << " " << school << endl;
   };
};

int main(){
    struct Student s1("divine",16,"RCA");
    s1.printme();

    Student s2 = Student("peter",14,"rca");
    s2.printme();

    Student *s3 = new Student("Lucky",17,"rca");
   s3->printme();


}
