#include <iostream>
using namespace std;
int main(){
    int range;
    cout<<"enter a number : ";
    cin>>range;

    for(int i=0; i<range; i++){
        int factors=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                factors++;
            }
        }
        if(factors==2){
            cout<<i<<" ";
        }
    }
    return 0;
}