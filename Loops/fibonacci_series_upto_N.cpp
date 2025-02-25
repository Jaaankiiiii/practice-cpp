#include <iostream>
using namespace std;
int main(){
    int num,firstNum=0,secondNum=1,thirdNum;
    cout<<"Enter a number : ";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<firstNum<<" ";
        thirdNum=firstNum+secondNum;
        firstNum=secondNum;
        secondNum=thirdNum;
    }
    return 0;
}