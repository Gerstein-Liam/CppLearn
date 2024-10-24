#pragma once

typedef void (*func) (int *X);


void arg_by_pointer(int *X);

void arg_by_reference(int &X);