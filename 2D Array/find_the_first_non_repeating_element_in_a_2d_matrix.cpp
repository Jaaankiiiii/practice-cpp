#include <iostream>
using namespace std;
int main(){
    int matrix[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int row=3, col=3;

    int count,i,j,k,l,found=0;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            count=0;
            for(k=0; k<row; k++){
                for(int l=0; l<col; l++){
                    if((i!=k || j!=l) && (matrix[i][j]==matrix[k][l])){
                        count++;
                    }
                }
            }
            if(count==0){
                cout<<"First non-repeating element : "<<matrix[i][j];
                found=1;
                break;
            }
        }
        if(found){
            break;
        }
    }
    if(!found){
        cout<<"no, non-repeating element is found.";
    }
    return 0;
}