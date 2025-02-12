//Take a character as input and check if it is a vowel (a, e, i, o, u) or a consonant

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    return 0;

}