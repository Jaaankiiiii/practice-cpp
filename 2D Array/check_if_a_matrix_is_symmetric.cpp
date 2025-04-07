#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter number of rows : ";
    cin>>row;

    int col;
    cout<<"enter number of cols : ";
    cin>>col;

    cout<<"enter elements of matrix : ";
    int matrix[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }

    int transpose[col][row];
    for(int i=0; i<row; i++){
        for(int j=0; j<col ;j++){
            transpose[j][i]=matrix[i][j];
        }
    }

    cout<<"original matrix : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"transposed matrix is : "<<endl;
    for(int j=0; j<col; j++){
        for(int i=0 ; i<row ; i++){
            cout<<transpose[j][i]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(transpose[i][j]==matrix[i][j]){
                continue;
            }
            else{
                cout<<"No , not symmetric ";
                return 0;
            }
        }
    }
    cout<<"symmetric";
    return 0;
}