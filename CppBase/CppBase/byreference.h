#pragma once

typedef void (*func) (int *X);

extern int ptrVsReference_IncValue;


void arg_by_pointer(int *X);

void arg_by_reference(int &X);