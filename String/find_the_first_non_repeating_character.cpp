#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin,str);

    string :: iterator i;
    string :: iterator j;
    for(i=str.begin(); i!=str.end(); i++){
        int count=0;
        for(j= str.begin() ;j!=str.end(); j++){
            if(*i==*j){
                count++;
            }
        }
        if(count==1){
            cout<<"First non-repeating character is : "<<*i<<endl;
            return 0;
        }
    }
    cout<<"No element found that is non-repeating."<<endl;
    return 0;
}