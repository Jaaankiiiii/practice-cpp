#include <iostream>
using namespace std;
int main(){
    int num,remainder,sum=0;
    cout<<"enter a number: ";
    cin>>num;
    while(num>0){
        remainder=num%10;
        num=num/10;
        sum+=remainder;
    }
    cout<<"sum of digits of given number is : "<<sum<<endl;
    return 0;
}