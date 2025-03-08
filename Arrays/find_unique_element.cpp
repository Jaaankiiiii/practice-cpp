#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7,3,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int k=0;

    for(int i=0;i<size;i++){
        int freq=0;
        for(int j=0;j<size;j++){
            if(*(arr+i)==*(arr+j)){
                freq++;
            }
        }
        if(freq==1){
            *(arr+k)=*(arr+i);
            k++;
        }
    }
    size=k;
    for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
}