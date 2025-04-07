#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;

    for(int rows=1; rows<=num; rows++){
        for(int cols=1; cols<=num; cols++){
            cout<<rows*cols<<" ";
        }
        cout<<endl;
    }
    return 0;
}