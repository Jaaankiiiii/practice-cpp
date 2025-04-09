#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin,str);
    
    int vowel=0;
    int consonants=0;

    string::iterator i;
    for(i=str.begin(); i!=str.end(); i++){
        if(*i=='a' || *i=='e' || *i=='i' || *i=='o' || *i=='u' || *i=='A' || *i=='E' || *i=='O' || *i=='U'){
            vowel++;
        }
        else{
            consonants++;
        }
    }
    cout<<"No of vowel : "<<vowel << endl;
    cout<<"No of consonant : "<<consonants << endl;
}