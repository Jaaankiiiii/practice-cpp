//Write a program to check whether a given number is a palindrome (same when reversed), using conditional statements.

#include <iostream>
using namespace std;
int main(){
    int num,remainder,reversedNum,originalNum;
    cout<<"enter a number : ";
    cin>>num;
    originalNum=num;
    while(num>0){
        remainder=num%10;
        reversedNum=reversedNum*10+remainder;
        num=num/10;
    }
    cout<<"original number is : "<<originalNum<<endl;
    cout<<"reversed number is : "<<reversedNum<<endl;
    if(originalNum==reversedNum){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
    
}