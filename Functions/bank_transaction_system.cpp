#include <iostream>
using namespace std;
static int total_money;
void checkBalance(){
    cout<<"current balance : "<<total_money<<endl;
}

void depositMoney(int deposit){
    cout<<deposit<<" have been deposited to your account ."<<endl;
    total_money=total_money+deposit;
}

void withdrawMoney(int withdraw){
    if(total_money>withdraw){
        cout<<withdraw<<" has been withdrawn. "<<endl;
        total_money=total_money-withdraw;
    }
    else{
        cout<<"not enough balance."<<endl;
    }
}

int main(){
    cout<<"enter total amount : ";
    cin>>total_money;
    int operation;
    int amount;

    do{
        cout<<"choose the operation : "<<endl;
        cout<<"1. Check balance. "<<endl;
        cout<<"2. Deposit balance. "<<endl;
        cout<<"3. Withdraw balance. "<<endl;
        cout<<"4. Exit"<<endl;
        cin>>operation;
        switch(operation){
            case 1:
                checkBalance();
                break;
            case 2:
                cout<<"amount you want to deposit : ";
                cin>>amount;
                depositMoney(amount);
                break;
            case 3:
                cout<<"amount you want to deposit : ";
                cin>>amount;
                withdrawMoney(amount);
                break;
            case 4:
                cout<<"exiting the system."<<endl;
                break;
            default:
                cout<<"choose from 1 to 4.";
        }
    }while(operation!=4);
    return 0;
}