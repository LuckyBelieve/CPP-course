#include <iostream>
using namespace std;
struct Rectangle{
    int width;
    int length;
    public:
    Rectangle(){};
    void setValue(int w, int l){
        width = w;
        length = l;
    }
    int area(void){return length  * width;}
};

int main(){
    Rectangle rectc;
    rectc.setValue(10,20);
    cout << rectc.area() << endl;


    return 0;
}