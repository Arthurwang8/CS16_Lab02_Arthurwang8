#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int countEvens(int a[], int size) {
  int count = 0;
  for (int i = 0; i< a.size(); i++){
  if(a[i]%2==0){
  count ++;
  }
  }
  return count; // STUB!  Replace with correct code.
}
