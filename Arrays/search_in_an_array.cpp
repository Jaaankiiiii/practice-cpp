#include <iostream>
using namespace std;
int main(){
    int arr[]={2,5,3,7,9,4,1,88};
    int size=sizeof(arr)/sizeof(arr[0]);

    int key;
    cout<<"enter key : ";
    cin>>key;

    for(int i=0;i<size;i++){
        if(key==arr[i]){
            cout<<"Found at : "<<i;
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}