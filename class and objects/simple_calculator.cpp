#include <iostream>
using namespace std;
class Calculator
{
    private :
        int num1;
        int num2;
    public :
        Calculator(int n1, int n2){
            setNum1(n1);
            setNum2(n2);
        }
        void setNum1(int n1){
            num1=n1;
        }
        void setNum2(int n2){
            num2=n2;
        }
        int getNum1(){return num1;}
        int getNum2(){return num2;}

        void addition(){
            cout<<"adittion of two numbers are : "<<getNum1()+getNum2()<<endl;
        }
        void subtraction(){
            cout<<"subtraction of two numbers are : "<<getNum1()-getNum2()<<endl;
        }
        void multiplication(){
            cout<<"multiplication of two numbers are : "<<getNum1()*getNum2()<<endl;
        }
        void division(){
            cout<<"division of two nummbers are  : "<<(float)getNum1()/getNum2()<<endl;
        }

};
int main(){
    int num1,num2;
    cout<<"enter two numbers : ";
    cin>>num1>>num2;
    Calculator c1(num1,num2);
    c1.addition();
    c1.subtraction();
    c1.multiplication();
    c1.division();

}