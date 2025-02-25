// check if a number is a palindrome.
#include <iostream>
using namespace std;
int main(){
    int num,originalNum,reversedNum=0,remainder;
    cout<<"Enter Original number : ";
    cin>>num;
    originalNum=num;
    while(num>0){
        remainder=num%10;
        reversedNum=reversedNum*10+remainder;
        num=num/10;
    }
    cout<<"Reversed Number is : "<<reversedNum<<endl;
    if(originalNum==reversedNum){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
    
}