#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin,str);

    //reverse string 
    string::reverse_iterator i;
    for(i=str.rbegin(); i!=str.rend(); i++){
        cout<<*i;
    }
}
