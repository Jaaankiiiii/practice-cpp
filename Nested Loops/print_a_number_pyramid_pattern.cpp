#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;

    for(int rows=1; rows<=num; rows++){
        for(int spaces=1; spaces<=num-rows; spaces++){
            cout<<" ";
        }
        for(int cols=1; cols<=rows; cols++){
            cout<<cols;
        }
        for(int cols=rows-1; cols>=1; cols--){
            cout<<cols;
        }
        cout<<endl;
    }
    return 0;
}