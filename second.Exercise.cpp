#include <iostream>
using namespace std;
namespace findTheDifference{
    int diff(int limit){
        int sumOfEvens = 0;
        int sumOfOdds = 0;
        for(int i=0; i<=limit; i++){
            if(i % 2 == 0){
                sumOfEvens +=i;
            }else{
                sumOfOdds +=i;
            }
        }
        return sumOfOdds - sumOfEvens;
    }
}
int main(){
    int limit;
    cout << "enter the limit of your choice" << endl;
    cin >> limit;
    cout << "the difference is "<<findTheDifference::diff(limit) << endl;
}