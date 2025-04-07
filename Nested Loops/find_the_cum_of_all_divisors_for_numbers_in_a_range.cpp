#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;

    for(int i=1; i<=num; i++){
        cout<<"Divisors of "<<i<<" : ";
        for(int j=1; j<=i; j++){
            if(i%j==0){
                cout<<j <<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}