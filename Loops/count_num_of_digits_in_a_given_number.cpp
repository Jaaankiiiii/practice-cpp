#include <iostream>
using namespace std;
int main(){
    int num,remainder,digit;
    cout<<"Enter a number : ";
    cin>>num;
    while(num>0){
        remainder=num%10;
        num=num/10;
        digit++;
    }
    cout<<"number of digits in entered number are : "<<digit;
    return 0;
    
}