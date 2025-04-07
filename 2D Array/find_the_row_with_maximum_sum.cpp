#include <iostream>
using  namespace std;

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

    int max_sum=0;
    int row_with_max_sum=0;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=matrix[i][j];
        }
        if(max_sum<sum){
            max_sum=sum;
            row_with_max_sum=i+1;
        }
    }
    cout<<"Row with maximum sum : "<<row_with_max_sum<<endl;
    return 0;
}