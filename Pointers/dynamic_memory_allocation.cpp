//Allocate memory dynamically for an integer array, take user input, and print the elements.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int *p=new int[n];  //dynamic memory allocating

    //taking input from user 
    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    //printing the elements
    cout<<"elements of array are : ";
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    delete []p;
    return 0;
}