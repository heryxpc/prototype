#include <stdlib.h>

#define X __VERIFIER_nondet_X() { X val; return val; }

int __VERIFIER_nondet_int() { int val; return val; }
             
unsigned int __VERIFIER_nondet_uint(void) { unsigned int val; return val; }

void __VERIFIER_error() { abort(); }
