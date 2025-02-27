//Create a pointer that points to an integer. Perform pointer arithmetic to access and print the next and previous memory addresses.
#include <iostream>
using namespace std;
int main(){
    int x=20;
    int *p;
    p= &x;
    
    cout<<sizeof(int)<<endl;
    cout<<"current memory access : "<<p<<endl;
    cout<<"next memory address : "<<(p+1)<<endl;
    cout<<"previous memory addresses : "<<(p-1)<<endl;;
    


}