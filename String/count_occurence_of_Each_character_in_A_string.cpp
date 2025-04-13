#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin, str);
 
    int arr[str.length()];
    for(int i=0; i<str.length(); i++){
        arr[i]=-1;
    }
    
    for(int i=0; i<str.length(); i++){
        for(int j=0; j<i; j++){
            if(str[i]==str[j]){
                arr[i]=0;
                break;
            }
        }
    }
    
    for(int i=0; i<str.length(); i++){
        if(arr[i]!=0){
            int count=0;
            for(int j=0; j<str.length(); j++){
                if(str[i]==str[j]){
                    count++;
                }
            }
            arr[i]=count;
        }
    }

    for(int i=0; i<str.length(); i++){
        if(arr[i]>0){
            cout<<str[i]<<" "<<arr[i]<<endl;
        }
    }
}