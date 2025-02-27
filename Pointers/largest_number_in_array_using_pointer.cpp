//Write a function that finds and returns the largest number in an array using pointers.
#include <iostream>
using namespace std;
int main(){
    int arr[]={24,77,93,56,99,3,8,112,90,54,99};
    int n=sizeof(arr)/sizeof(arr[0]);   //size of array;

    int *p=arr;
    int *max=arr;

    for(int i=0;i<n;i++){
        if(*(p+i)>*max){
            *max=*(p+i);
        }
    }
    cout<<"Largest number : "<<*max;
    return 0;
}