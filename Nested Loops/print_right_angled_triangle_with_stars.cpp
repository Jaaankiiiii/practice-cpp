#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;

    for(int rows=0; rows<num; rows++){
        for(int cols=0; cols<num; cols++){
            if(cols<=rows){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}