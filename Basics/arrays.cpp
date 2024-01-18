#include<iostream>
using namespace std;
void display(int marks[][5], int r, int c)
{
for (int i=0; i<r;i++){
for (int j=0;j<c;j++){
  cout<<marks[i][j]<<" ";
  }
  cout<<endl;
}
}
int main(){

// int A[][5]={
// { 12,14},
// {15,18}
// };
// display(A,2,5);
// int B[5][5]={{0}};
// display(B,5,5);
int a[2][7]={{1,2,3,13,17,34,19},{54,23,11,45,35,26}};
int B[2][7]={1,2,3,13,17,34,1954,23,11,45,35,26};
for (int i = 0; i < 2; i++){
    for (int j = 0; j < 7; j++){
        cout<<B[i][j]<<endl;
    } 
}
return 0;
}
