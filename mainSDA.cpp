#include <iostream>

#include "Matrix.h"
#include "Random.h"


void vectorTest();
void matrixTest();


int main(int argc, char *argv[]){

  vectorTest();

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
  
//TODO
// vector dot product vector
  
  

//TODO
// vector times scalar
  AllocatingVector vec4(vec);
  vec4.ScaleInto(vec4.5)

//TODO
// vector element-wise operation
  AllocatingVector vec5(vec);
  vec5+=vec;
  vec5*=vec;
  vec5/=vec;
  vec5-=vec;



  
}