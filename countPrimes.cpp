#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  
  int count = 0;
  for (int i = 0; i< size; i++){
  if(a[i].isprime()){
  count ++;
  }
  }
  return count;
}
