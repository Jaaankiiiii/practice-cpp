#include <iostream>
using namespace std;
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3, col=3;

    for(int i=0; i<row; i++){
        if(i%2==0){
            for(int j=0; j<col; j++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int j=col-1; j>=0; j--){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
    return 0;
}