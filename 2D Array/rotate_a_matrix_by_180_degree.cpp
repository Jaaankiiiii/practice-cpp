#include <iostream>
using namespace std;
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=2; i>=0; i--){
        for(int j=2; j>=0; j--){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}