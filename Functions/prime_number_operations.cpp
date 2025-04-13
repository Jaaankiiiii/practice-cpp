#include <iostream>
using namespace std;
void isPrime(int num){
    int factor=0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            factor++;   
        }
    }
    if(factor==2){
        cout<<"number is prime."<<endl;
    }else{
        cout<<"number is not prime."<<endl;
    }
}

void prime_number_in_range(int num){
    cout<<"prime numbers in range "<<num<<" are : ";
    for(int i=2; i<num; i++){
        int factor=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                factor++;
            }
        }
        if(factor==2){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }
    cout<<endl;
}
int main(){
    int operation;
    int num;

    do{
        cout<<"choose from the following operation : "<<endl;
        cout<<"1. Check if a number is prime."<<endl;
        cout<<"2. Print all prime numbers in a given range."<<endl;
        cout<<"3. Exit."<<endl;

        cin>>operation;

        if(operation>0 && operation<3){
            cout<<"enter a number : ";
            cin>>num;
        }
        switch(operation){
            case 1:
                isPrime(num);
                break;
            case 2:
                prime_number_in_range(num);
                break;
            case 3:
                cout<<"Exiting the operation."<<endl;
                break;
            default:
                cout<<"choose from 1 to 3."<<endl;
        }
    }while(operation!=3);
    return 0;
}