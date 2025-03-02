#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *p=arr;

    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    return 0;
}