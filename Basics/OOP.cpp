#include <iostream>
using namespace std;
class Rectangle{
    int width;
    int length;
    public: int area(){
        return width * length;
    }
    Rectangle(){};
    Rectangle(int w, int l){
        width = w;
        length = l;
    }
    void setValue(int w, int l){
        width = w;
      length = l;
    }
    void perimeter(int w, int l);
};
int main(){
    Rectangle *rect = new Rectangle(10,20);
    int area = rect->area();
    cout << "the area of the rectangle is "<<area << endl;
}