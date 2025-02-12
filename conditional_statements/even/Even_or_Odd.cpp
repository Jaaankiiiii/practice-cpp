//Write a program to check whether a given number is even or odd using an if-else statement.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}