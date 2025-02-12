//Take three numbers as input and determine the largest using if-else-if.

#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter three numbers : ";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1<<" is largest.";
    }
    else if(num2>num3){
        cout<<num2<<" is largest.";
    }
    else if(num3>num2){
        cout<<num3<<" is largest.";
    }
    return 0;
}