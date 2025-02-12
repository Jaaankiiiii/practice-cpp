//Given three sides of a triangle, check whether they form a valid triangle using the condition:

#include <iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter the sides of triangle : ";
    cin>>side1>>side2>>side3;
    if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2){
        cout<<"Triangle is valid";
    }
    else{
        cout<<"Triangle is not valid";
    }
    return 0;
}