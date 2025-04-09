#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;

    cout<<"original string : ";
    getline(cin,str);

    string original_string;
    original_string=str;

    string reverse_string="";
    string::reverse_iterator i;
    for(i=str.rbegin(); i!=str.rend(); i++){
        reverse_string.push_back(*i);
    }

    cout<<"reversed string : "<<reverse_string<<endl;
    if(original_string==reverse_string){
        cout<<"Its a palindrome. ";
    }
    else{
        cout<<"Not a palindrome. ";
    }
    return 0;
}