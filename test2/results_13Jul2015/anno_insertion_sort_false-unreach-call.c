extern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }
  return;
}
unsigned int __VERIFIER_nondet_uint();
int main() {
   unsigned int SIZE=/* reachable */
                     __VERIFIER_nondet_uint();
   int i, j, k, key;
   int v[SIZE];   
   for (/* invariant:
        -1+j >= 0
        */
        j=1;j<SIZE;j++) {	  
      key = v[j];
      i = j - 1;
      /* invariant:
      1+i >= 0
      -1+j-i >= 0
      -1+j >= 0
      -1+SIZE-j >= 0
      */
      while((i>=0) && (v[i]>key)) {
         if (i<2)
         v[i+1] = v[i];
         i = i - 1;
      }
      v[i+1] = key;	        
  }      
  for (/* invariant:
       -1+k >= 0
       */
       k=1;k<SIZE;k++)
    __VERIFIER_assert(v[k-1]<=v[k]);  
   /* reachable */
   return 0;
}
