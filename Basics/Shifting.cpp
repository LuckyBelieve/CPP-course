#include <iostream>
using namespace std;
int main(){
    int myArray[] = {10,20,30,40,50};
    int position  = 2;
    int shiftElement = 15;
    int size  = sizeof(myArray)/sizeof(int);
    int lastIndex = size -1;
    while (lastIndex >=position){
       myArray[lastIndex+1] = myArray[lastIndex];
       lastIndex -= 1;
    }
    myArray[position] = shiftElement;
    for (int i = 0; i < size+1; i++){
        cout<< "shifted array"<< myArray[i]<<endl;
    }
}
/*int myArray[3][6] = {{10,20,15,30,40,50},{60,70,85,90,100,110},{120,130,105,320,410,520},};
  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 6; j++)
      {
          cout << myArray[i][j] <<endl;
      }
   }*/


//    to find the index of the element is the I * c(the number of columns) + j