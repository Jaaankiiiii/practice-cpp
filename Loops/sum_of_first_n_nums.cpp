//Write a program to take an integer input N and calculate the sum of the first N natural numbers using a while loop.
#include <iostream>
using namespace std;
int main(){
    int n,counter=0,sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(counter<=n){
        sum+=counter;
        counter++;
    }
    cout<<"sum of "<<n<<" natural number is : "<<sum<<endl;
    return 0;
}