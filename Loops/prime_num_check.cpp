//Write a C++ program to compute the factorial of a number using a for loop.

#include <iostream>
using namespace std;
int main(){
    int num,factor=0;
    cout<<"Enter a number : ";
    cin>>num;
    for(int counter=1;counter<=num;counter++){
        if(num%counter==0){
            factor++;
        }
    }
    if(factor==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}