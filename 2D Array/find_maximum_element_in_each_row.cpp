#include <iostream>
using namespace std;
int main(){
    int matrix[3][3]={{1,2,3},
                      {4,5,6},
                      {7,8,9}};
                      
    int row=3, col=3;
    for(int i=0; i<row; i++){
        int max=matrix[0][0];
        cout<<"max in row "<<i<<" : ";
        for(int j=0; j<col; j++){
            if(max<matrix[i][j]){
                max=matrix[i][j];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}