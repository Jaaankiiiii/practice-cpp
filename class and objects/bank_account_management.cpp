#include <iostream>
using namespace std;
class BankAccount
{
    private:
        string accountHolderName;
        long accountNumber;
        double balance;
    public:
        BankAccount(string name, long number, double balance ){
            setAccountHolderName(name);
            setAccountNumber(number);
            setBalance(balance);
        }

        void setAccountHolderName(string name){
            accountHolderName=name;
        }
        void setAccountNumber(long number){
            accountNumber=number;
        }
        void setBalance(double b){
            balance=b;
        }

        string getAccountHolderName(){return accountHolderName;}
        long getAccountNumber(){return accountNumber;}
        double getBalance(){return balance;}

        void depositMoney(double amount){
            if(amount>0){
                balance=getBalance()+amount;
                setBalance(balance);
                cout<<amount<<" has been deposited to your account."<<endl;
            }
            else{
                cout<<"enter amount greater than 0. "<<endl;
            }
        }

        void withdrawMoney(int amount){
            if(getBalance()>=amount){
                balance=getBalance()-amount;
                setBalance(balance);
                cout<<amount<<" has been withdrawn from your account. "<<endl;
            }
        }

        void displayAccountDetails(){
            cout<<"account holder name : "<<getAccountHolderName()<<endl;
            cout<<"account number : "<<getAccountNumber()<<endl;
            cout<<"current balance : "<<getBalance()<<endl;
        }
};

int main(){
    string name; double number; double balance;
    cout<<"enter account holder name : ";
    getline(cin, name);
    cout<<"enter account number  : ";
    cin>>number;
    cout<<"enter balance : ";
    cin>>balance;

    BankAccount b1(name,number,balance);
    b1.withdrawMoney(2000);
    b1.displayAccountDetails();

}