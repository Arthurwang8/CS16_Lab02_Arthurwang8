// utility.h

// IN THIS FILE, declare (function prototype only) any of your 
// OWN functions you may need to solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool isOdd(int x) { 
  if(x%2 == 1){
    return true;
  }
   else{
     return false;  
   }// REPLACE THIS STUB WITH REAL CODE
}
bool isEven(int x) { 
  if(x%2 == 0){
    return true;
  }
   else{
     return false;  
   }
}
bool isPrime(int x) { 
if(number <= 2){
  return false;}
if(number % 2 == 0) 
{return false;
                    }
for(int i=3; i<=number; i++){
if(number % i == 0 ) 
{return false;
}

}
  return true;
}
