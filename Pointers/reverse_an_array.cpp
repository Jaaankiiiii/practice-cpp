//Write a function that reverses an array using pointers.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int *left=arr;  //pointer from the left of the array arr[0] ie 1;
    int *right=arr+n-1; //pointer from the right of the array, arr[n-1] ie 9;

    while(left<right){
        int temp=*left;
        *left=*right;
        *right=temp;

        *left++;
        *right--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}