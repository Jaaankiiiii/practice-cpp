#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;

    for(int rows=1; rows<=num; rows++){
        for(int cols=1; cols<=num; cols++){
            if(!(rows%2==0)){
                if(!(cols%2==0)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(rows%2==0){
                if(cols%2==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}