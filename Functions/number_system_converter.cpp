#include <iostream>
using namespace std;

void decimalToBinary(int num){
    int remainder;
    string temp;
    while(num>0){
        remainder=num%2;
        temp.push_back(remainder+'0');
        num=num/2;
    }

    int n=temp.length();

    string binary;
    binary.resize(n);

    for(int i=n-1; i>=0; i--){
        binary[n-1-i]=temp[i];
    }
    cout<<"binary : "<<binary<<endl;
    
}
void decimalToOctal(int num){
    int remainder;
    string temp;
    while(num>0){
        remainder=num%8;
        temp.push_back(remainder+'0');
        num=num/8;
    }

    int n=temp.length();

    string octal;
    octal.resize(n);

    for(int i=n-1; i>=0; i--){
        octal[n-1-i]=temp[i];
    }
    cout<<"octal : "<<octal<<endl;
}

void decimalToHexadecimal(int num){
    int remainder;
    string temp;
    while(num>0){
        char hexChar;
        remainder=num%16;
        if(remainder<10){
            hexChar=remainder+'0';
        }else{
            hexChar=remainder-10+'A';
        }
        temp.push_back(hexChar);
        num=num/16;
    }
    int n=temp.length();
    string hexadecimal;
    hexadecimal.resize(n);
    for(int i=n-1; i>=0; i--){
        hexadecimal[n-1-i]=temp[i];
    }
    cout<<"hexadecimal : "<<hexadecimal<<endl;
}
int main(){
    int convertTo;
    int num;
    do{
        cout<<"choose which way you want to convert - "<<endl;
        cout<<"1. Convert decimal to binary. "<<endl;
        cout<<"2. Convert decimal to octal. "<<endl;
        cout<<"3. Convert decimal to hexadecimal. "<<endl;
        cout<<"4. Exit. "<<endl;
        cin>>convertTo;

        if(convertTo>=1 && convertTo <4){
            cout<<"enter a number : ";
            cin>>num;
        }
        
        switch (convertTo)
        {
        case 1:
            decimalToBinary(num);
            break;
        case 2:
            decimalToOctal(num);
            break;
        case 3:
            decimalToHexadecimal(num);
            break;
        case 4:
            cout<<"Exiting number system converter."<<endl;
            break;
        default:
            cout<<"please choose from 1 to 4."<<endl;
        }
    }while(convertTo!=4);
    return 0;
}