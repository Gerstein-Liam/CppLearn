#include "byreference.h"

void arg_by_pointer(int* X) {
    (*X) += ptrVsReference_IncValue;
}

void arg_by_reference(int &X) {
    X += ptrVsReference_IncValue;
}