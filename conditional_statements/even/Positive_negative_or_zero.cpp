//Write a program that checks whether a number is positive, negative, or zero.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num>0){
        cout<<"Positive";
    }
    else if(num==0){
        cout<<"Zero";
    }
    else{
        cout<<"Negative";
    }
    return 0;
}