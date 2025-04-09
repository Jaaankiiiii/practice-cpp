#include <iostream>
using namespace std;
int main(){
    int row=3, col=3;
    int matrix[3][3]={{1,2,3},
                      {4,5,6},
                      {7,8,9}};
    for(int i=0;;){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        break;
    }
    for(int j=col-1;;){
        for(int i=1; i<row; i++){
            cout<<matrix[i][j]<<" ";
        }
        break;
    }
    for(int i=row-1;;){
        for(int j=col-2; j>=0; j--){
            cout<<matrix[i][j]<<" ";
        }
        break;
    }
    for(int j=0;;){
        for(int i=row-2; i>0; i--){
            cout<<matrix[i][j]<<" ";
        }
        break;
    }
    return 0;
}