//Write a program that reads an integer and prints its reverse using a while loop.
#include <iostream>
using namespace std;
int main(){
    int num,remainder,reversedNum;
    cout<<"Enter a number : ";
    cin>>num;
    while(num>0){
        remainder=num%10;
        num=num/10;
        reversedNum=reversedNum*10+remainder;

    }
    cout<<reversedNum<<endl;
    return 0;
}