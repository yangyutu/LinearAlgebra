#include <iostream>

#include "Matrix.h"
#include "Random.h"


int main(int argc, char *argv[]){


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





}
