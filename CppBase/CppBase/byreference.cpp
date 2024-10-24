#include "byreference.h"

void arg_by_pointer(int* X) {
  
    (*X)++;

}

void arg_by_reference(int &X) {
   
    X++;

}