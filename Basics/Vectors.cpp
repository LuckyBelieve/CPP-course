#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> num={1,2,3,4,5};
    for (int i = 0; i < 10; i++)
    {
       num.push_back(50);
    }
    for (int i = 0; i < num.size(); i++)
    {
      cout<<num[i]<<" ";
    }
    cout<<"the size is "<<num.size()<<endl;
    cout<<"the maximum size is "<<num.max_size()<<endl;
    
    



    return 0;
}