#include <iostream>
using namespace std;

void add(int row, int col, int arr[][3], int arr2[][3], int result[][3]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            result[i][j]=arr[i][j] + arr2[i][j] ;
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

void subtract(int row, int col, int arr[][3], int arr2[][3], int result[][3]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            result[i][j]=arr[i][j] - arr2[i][j] ;
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multiplication(int row, int col, int arr[][3], int arr2[][3], int result[][3]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            result[i][j]=0;
            for(int k=0; k<col; k++){
                result[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int row, int col, int arr[][3], int result[][3]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            result[i][j]=arr[j][i];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int operation;
    int row=3;
    int col=3;
    int arr[row][3];
    int arr2[row][3];
    int result[row][3];


    do{
        cout<<"choose one operation you want to perform : "<<endl;
        cout<<"1. Addition of two matrices."<<endl;
        cout<<"2. Subtraction of two matrices."<<endl;
        cout<<"3. Matrices of two matrices."<<endl;
        cout<<"4. Transpose of a matrix."<<endl;
        cout<<"5. Exit."<<endl;
        cin>>operation;
        if(operation>0 && operation<4){
            //arr;
            cout<<"enter elements of arr 1 : ";
            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    cin>>arr[i][j];
                }
            }
            // arr2;
            cout<<"enter elements of arr 2 : ";
            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    cin>>arr2[i][j];
                }
            }
        }
        else if(operation==4){
            cout<<"enter elements of arr : ";
            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    cin>>arr[i][j];
                }
            }
        }
        switch(operation){
            case 1:
                add(row,col,arr,arr2,result);
                break;
            case 2:
                subtract(row, col, arr, arr2, result);
                break;
            case 3:
                multiplication(row, col, arr,arr2,result);
                break;
            case 4:
                transpose(row, col, arr,result);
                break;
            case 5:
                cout<<"exiting the matrix operation."<<endl;
                break;
            default:
                cout<<"choose from 1 to 5."<<endl;
        }
    }while(operation!=5);
}