#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]*2<<" ";
    // }

    //OR

    int temp[size];
    for(int i=0; i<size; i++){
        temp[i]=arr[i]*2;
    }

    for(int i=0; i<size; i++){
        arr[i]=temp[i];
    }

    cout<<"New array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}