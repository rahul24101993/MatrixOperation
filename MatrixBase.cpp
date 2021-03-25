#include "MatrixBase.h"
Void Matrix::setMatrix(){
    int** Matrixptr=new int*[rows];
    for(int i=0;i<rows;i++){
        *(Matrixptr+i)=new int[columns];
        for(int j=0;j<columns;j++){
            int input;
            cin>>input;
            *(*(Matrixptr+i)+j)=input;
        }
    }
}
void Matrix::printMatrix(){
    int** Matrixptr=new int*[rows];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<*(*(Matrixptr+i)+j);
        }
    }
}
    
