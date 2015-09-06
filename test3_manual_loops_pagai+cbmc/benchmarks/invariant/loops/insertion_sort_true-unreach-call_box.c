// analysis: AIopt
[0;1;34m/* processing Function main */
[0m// #include <stdio.h>
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
// void __VERIFIER_error() {printf("ERROR raised\n");}

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: [0;1;31m/* assert not proved */
[0m           __VERIFIER_error();
  }
  return;
}
unsigned int __VERIFIER_nondet_uint();
// unsigned int __VERIFIER_nondet_uint() {return 100;}
int main() {
   unsigned int SIZE=[0;1;35m/* reachable */
[0m                     __VERIFIER_nondet_uint();
   int i, j, k, key;
   int v[SIZE];   
   for ([0;1;35m/* invariant:
        -1.000000e+00+j >= 0
        2.147484e+09-j >= 0
        */
[0m        j=1;j<SIZE;[0;1;31m// unsafe: possible undefined behavior
[0m                   j++) {	  
      [0;1;31m// unsafe: possible undefined behavior
[0m      key = v[j];
      [0;1;32m// safe
[0m      i = j - 1;
      [0;1;35m/* invariant:
      1.000000e+00+i >= 0
      2.147484e+09-i >= 0
      -2.000000e+00+SIZE >= 0
      -1.000000e+00+j >= 0
      2.147484e+09-j >= 0
      */
[0m      [0;1;31m// unsafe: possible undefined behavior
[0m      while((i>=0) && (v[i]>key)) {
         [0;1;32m// safe
[0m         [0;1;31m// unsafe: possible undefined behavior
[0m         [0;1;31m// unsafe: possible undefined behavior
[0m         v[i+1] = v[i];
         [0;1;32m// safe
[0m         i = i - 1;
      }
      [0;1;32m// safe
[0m      [0;1;31m// unsafe: possible undefined behavior
[0m      v[i+1] = key;	        
  }      
  for ([0;1;35m/* invariant:
       2.147484e+09-SIZE >= 0
       -1.000000e+00+k >= 0
       2.147484e+09-k >= 0
       */
[0m       k=1;k<SIZE;[0;1;32m// safe
[0m                  k++)
    [0;1;32m// safe
[0m    [0;1;31m// unsafe: possible undefined behavior
[0m    [0;1;31m// unsafe: possible undefined behavior
[0m    __VERIFIER_assert(v[k-1]<=v[k]);  
   [0;1;35m/* reachable */
[0m   return 0;
}

