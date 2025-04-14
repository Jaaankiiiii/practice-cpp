#include <iostream>
using namespace std;
void lengthOfString(string str){
    int n=str.length();
    cout<<"length of string is : "<<n<<endl;
}

void convertToUpperCase(string str){
    int size=str.length();
    for(int i=0; i<size; i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
    cout<<"string converted in uppercase : "<<str<<endl;
}

void convertToLowerCase(string str){
    int size=str.length();
    for(int i=0; i<size; i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]+=32;
        }
    }
    cout<<"string converted in lowercase: "<<str<<endl;

}

void reverseString(string str){
    int size=str.length();
    string temp;
    for(int i=size-1; i>=0; i--){
        temp+=str[i];
    }
    cout<<"reversed string is : "<<temp<<endl;
}
int main(){
    int operation;
    string str;
    do{
        cout<<"choose the string operation you want to perform : "<<endl;
        cout<<"1. Find the length of a string."<<endl;
        cout<<"2. Convert the string to Upper case."<<endl;
        cout<<"3. Convert string to lowercase. "<<endl;
        cout<<"4. Reverse a string."<<endl;
        cout<<"5.Exit. "<<endl;
        
        cin>>operation;
        if(operation<5 && operation>0){
            cout<<"enter a string  : ";
            cin>>str;
        }
        switch (operation)
        {
        case 1:
            lengthOfString(str);
            break;
        case 2:
            convertToUpperCase(str);
            break;
        case 3:
            convertToLowerCase(str);
            break;
        case 4:
            reverseString(str);
            break;
        case 5:
            cout<<"Exiting string operations."<<endl;
            break;
        default:
            cout<<"choose from 1 to 5."<<endl;
            break;
        }
    }while(operation!=5);
   
}