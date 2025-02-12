//Given a student's marks, determine the grade using the following conditions: 90-100 : A; 80-89 : B; 70-79 :C ; 60-69 : D; Below 60 :F;

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter student's mark : ";
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"A";
    }
    else if(marks<90 && marks>=80){
        cout<<"B";
    }
    else if(marks<80 && marks>=70){
        cout<<"C";
    }
    else if(marks<70 && marks>=60){
        cout<<"D";
    }
    else{
        cout<<"F";
    }
    return 0;
}
