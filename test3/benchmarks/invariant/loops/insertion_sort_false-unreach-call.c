// #include <assert.h>
// analysis: AIopt
/* processing Function main */
// #include <stdio.h>
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
// void __VERIFIER_error() {printf("ERROR raised\n");}

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }
  return;
}
unsigned int __VERIFIER_nondet_uint();
// unsigned int __VERIFIER_nondet_uint() {return 100;}
int main() {
   unsigned int SIZE=/* reachable */
                     __VERIFIER_nondet_uint();
   int i, j, k, key;
   int v[SIZE];
   
   for (/* invariant:
        2147483647-j >= 0
        -1+j >= 0
        */
        j=1;j<SIZE;// unsafe: possible undefined behavior
                   j++) {	  
    // Invariant should be part of the loop
    __CPROVER_assume(2147483647-j >= 0 && -1+j >= 0);
      // unsafe: possible undefined behavior
      key = v[j];
      // safe
      i = j - 1;
      /* invariant:
      2147483646-i >= 0
      -1-i+j >= 0
      -1+j >= 0
      -1+SIZE-j >= 0
      1+i >= 0
      */
      // unsafe: possible undefined behavior
      while((i>=0) && (v[i]>key)) {
        __CPROVER_assume(2147483646-i >= 0 && -1-i+j >= 0 && -1+j >= 0 && -1+SIZE-j >= 0 && 1+i >= 0);
         if (i<2)
         // safe
         // unsafe: possible undefined behavior
         // unsafe: possible undefined behavior
         v[i+1] = v[i];
         // safe
         i = i - 1;
      }
      // safe
      // unsafe: possible undefined behavior
      v[i+1] = key;	        
  }      
  for (/* invariant:
       2147483647-SIZE >= 0
       2147483647-k >= 0
       -1+k >= 0
       */
       k=1;k<SIZE;// safe
                  k++) {
    // safe
    // unsafe: possible undefined behavior
    // unsafe: possible undefined behavior
    __CPROVER_assume(2147483647-SIZE >= 0 && 2147483647-k >= 0 && -1+k >= 0);
    __VERIFIER_assert(v[k-1]<=v[k]);  
    }
   /* reachable */
   return 0;
}
