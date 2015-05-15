#include <iostream>

#include "Matrix.h"
#include "Random.h"


void vectorTest();
void matrixTest();

using namespace Alg;
int main(int argc, char *argv[]){

  vectorTest();
  matrixTest();

}


void vectorTest(){
  
  // now i perform a series of vector and matrix testing

  AllocatingVector vec(5,5);
// vector initialization and assignment test
  for (int i=0;i < vec.Len(); i++){
    std::cout << vec[i] << std::endl;
    vec[i]=i*9+1;

  }  

  for (int i=0;i < vec.Len(); i++){
    std::cout << vec[i] << std::endl;
    vec[i]=i*9+1;

  }

// vector created (with memory assigned) from another vector
  AllocatingVector vec2(vec);
  std::cout << vec2.Len() << std::endl;
  vec2.Print();
//TODO
// vector dot product vector
  double result = Vector::DotProduct(vec2,vec);  

//TODO
// vector times scalar
  AllocatingVector vec4(vec);
  vec4.ScaleInto(vec4,5);
  vec4.Print();
//TODO
// vector element-wise operation
  AllocatingVector vec5(vec);
  vec5+=vec;
  vec5.Print();
  vec5*=vec;
  vec5.Print();
  vec5/=vec;
  vec5.Print();
  vec5-=vec;
  vec5.Print();

// matrix vector product
  AllocatingMatrix mat(5,5);
  for (int i = 0; i < mat.NumR() ; i++){
    for (int j = 0; j < mat.NumC() ; j++){
      mat.At(i,j) = i;
    }
  }
  std::cout << "print out matrix(5,5,1)" << std::endl;
  mat.Print();
  std::cout << "print out vec5" << std::endl;
  vec5.Print();
  bool trans = false;
  vec5.MultInto(mat,trans,vec5,1.0,1.0);
  std::cout << "print out matrix vector product result" << std::endl;
  vec5.Print();
  
  

  
}

void matrixTest(){
//Todo
// matrix creation and initialization
  AllocatingMatrix mat(5,5); 
  
  
  
}