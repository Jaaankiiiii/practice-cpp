#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    int temp[size];
    int j=0;

    for(int i=size-1;i>=0;i--){
        temp[j++]=arr[i];
    }

    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}