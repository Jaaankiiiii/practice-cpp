#include <iostream>
#include <math.h>
using namespace std;
void isArmstrongNumber(int num){
    int originalNum=num;
    int m=num;
    int digit=0;
    while(num>0){
        digit++;
        num=num/10;
    }
    int remainder;
    int n=0;
    while(originalNum>0){
        remainder=originalNum%10;
        n+=pow(remainder,digit);
        originalNum=originalNum/10;
    }
    if(m==n){
        cout<<"its is an armstrong number."<<endl;
    }else{
        cout<<"its not an armstrong number."<<endl;
    }
}
int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;
    isArmstrongNumber(num);
    return 0;
}