//Write a function that swaps two numbers using pointers.
#include <iostream>
using namespace std;
int main(){
    int x=20, y=30;
    int *p=&x;
    int *q=&y;

    int temp=*p;
    *p=*q;
    *q=temp;
    cout<<"x : "<<*p<<endl; // or x : <<x <<endl instead of *p;
    cout<<"y : "<<*q<<endl; // or "y : "<<y <<endl instead of *q;
    return 0;
}