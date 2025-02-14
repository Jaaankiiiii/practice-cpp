#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Factors of given number are : ";

    for(int counter=1;counter<=num;counter++){
        if(num%counter==0){
            cout<<counter<<" ";
        }
    }
    return 0;

}