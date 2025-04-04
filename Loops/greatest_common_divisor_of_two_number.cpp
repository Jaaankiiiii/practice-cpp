#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"enter two numbers: ";
    cin>>num1>>num2;
    if(num1==0 || num2==0){
        cout<<"cant find gcd with number 0";
        return 0;
    }

    int min_num=0;
    if(num1>num2){
        min_num=num2;
    }
    else{
        min_num=num1;
    }

    int gcd=0;
    for(int i=1; i<=min_num; i++){
        if(num1%i==0 && num2 % i ==0){
            gcd=i;
        }
    }
    cout<<"greatest common factor of two numbers are : "<<gcd<<endl;
    return 0;
}