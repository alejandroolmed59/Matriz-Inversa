#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "display_tools.h"
#include "math_tools.h"

using namespace std;

void Inversa(Matrix m1, Matrix &R){
  
  float determinante = determinant(m1);
  if(determinante==0){
    exit(EXIT_FAILURE);
  }
  Matrix cof, cofTrans;
  cofactors(m1, cof);
  transpose(cof, cofTrans);

  productRealMatrix(pow(determinante, -1), cofTrans, R );
}

int main(void) {
  Matrix m1, R;
  zeroes(m1, 3 , 3);
  m1.at(0).at(0)=2; m1.at(0).at(1)=2; m1.at(0).at(2)=3;
  m1.at(1).at(0)=4; m1.at(1).at(1)=5; m1.at(1).at(2)=6;
  m1.at(2).at(0)=7; m1.at(2).at(1)=8; m1.at(2).at(2)=9;
  cout<<"Matriz original"<<endl;
  showMatrix(m1);
  Inversa(m1, R);
  cout<<"Matriz inversa"<<endl;
  showMatrix(R);

  return 0;
}

