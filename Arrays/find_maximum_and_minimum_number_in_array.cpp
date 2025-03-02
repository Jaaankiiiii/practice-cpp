#include <iostream>
using namespace std;
int main(){
    int arr[]={2,5,11,3,6,7,88,33,5,3,1,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum is : "<<max<<endl;

    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum is : "<<min<<endl;
    return 0;
}