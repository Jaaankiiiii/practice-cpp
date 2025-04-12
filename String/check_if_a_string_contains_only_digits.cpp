#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string str;
    cout<<"enter a string : ";
    getline(cin,str);

    int n=str.length();
    for(int i=0; i<n; i++){
        if(str[i]>=48 && str[i]<=58){
            continue;
        }else{
            cout<<"it doesnot contain only digits.";
            return 0;
        }
    }
    cout<<"it contain only digits."<<endl;
    return 0;
}