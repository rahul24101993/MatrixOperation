#include "MatrixBase.h"
#include<iostream>
using namespace std;
int main(){
    Matrix obj(2,2);
   int** Matrixptr=obj.setMatrix();
    obj.printMatrix(Matrixptr);
 // int var=obj.print();
 // cout<<var;
}