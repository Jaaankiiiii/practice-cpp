#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    for(int row=1; row<=num; row++){

        for(int space=1; space<=num-row; space++){
            cout<<" ";
        }
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        for(int col=row-1; col>=1; col--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=num-1; row>=1; row--){
        for(int space=1; space<=num-row; space++){
            cout<<" ";
        }
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        for(int col=row-1; col>=1; col--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}