#include "MatrixBase.h"
#include <iostream>
using namespace std;
Matrix::Matrix(int Rows, int Columns){
    this->Rows=Rows;
    this->Columns=Columns;
}
int** Matrix::setMatrix(){
    int** Matrixptr=new int*[Rows];
    for(int i=0;i<Rows;i++){
        *(Matrixptr+i)=new int[Columns];
        for(int j=0;j<Columns;j++){
            int input;
            cin>>input;
            *(*(Matrixptr+i)+j)=input;
        }
    }
    return Matrixptr;
}
void Matrix::printMatrix(int ** Matrixptr){
    for(int i=0;i<Rows;i++){
        for(int j=0;j<Columns;j++){
            cout<<*(*(Matrixptr+i)+j)<<" ";
        }
        cout<<endl;
    }
}

    
