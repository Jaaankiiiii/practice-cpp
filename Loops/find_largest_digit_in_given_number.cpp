#include <iostream>
using namespace std;
int main(){
    int num, remainder;
    cout<<"enter a number : ";
    cin>>num;

    if(num<0){
        num=-num;
    }
    int max_digit=0;
    while(num>0){
        remainder=num%10;
        if(max_digit<remainder){
            max_digit=remainder;
        }
        num=num/10;

    }
    cout<<"largest digit in a number : "<<max_digit;
    return 0;
}