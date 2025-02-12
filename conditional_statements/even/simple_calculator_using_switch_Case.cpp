//Implement a basic calculator using a switch-case statement that performs addition, subtraction, multiplication, and division.
#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two number : ";
    cin>>num1>>num2;
    cout<<"Choose 1. Addition 2.subtraction 3.Multiplication 4.Division : ";
    int calculator;
    cin>>calculator;
    switch(calculator){
        case 1:
            cout<<num1+num2;
            break;
        case 2:
            cout<<num1-num2;
            break;
        case 3:
            cout<<num1*num2;
            break;
        case 4:
            cout<<float(num1/num2);
            break;
        default:
            cout<<"Error";
    }
    return 0;
}