// analysis: AIopt
/* processing Function main */
extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           /* assert not proved */
           /* assert OK */
           /* assert OK */
           /* assert not proved */
           /* assert OK */
           /* assert OK */
           /* assert OK */
           /* assert OK */
           /* assert OK */
           /* assert not proved */
           /* assert OK */
           /* assert OK */
           /* assert OK */
           __VERIFIER_error();
  }
  return;
}
int __VERIFIER_nondet_int();
int main( int argc, char *argv[]){
  int n,l,r,i,j;
  n = /* reachable */
      __VERIFIER_nondet_int();
  __VERIFIER_assume(1 <= n && n <= 1000000);
  // safe
  // unsafe: possible undefined behavior
  l = n/2 + 1;
  r = n;
  if(l>1) {
    // safe
    l--;
  } else {
    // unsafe: possible undefined behavior
    r--;
  }
  /* invariant:
  -1-2147483648*r+2147483649*n >= 0
  -1073741823*r+l+1073741823*n >= 0
  2-2*r-2*l+3*n >= 0
  -r+n >= 0
  1+r-n >= 0
  2+2*r+2*l-3*n >= 0
  4294967294+4294967292*r-4294967293*n >= 0
  */
  while(r > 1) {
    __CPROVER_assume(
      -1-2147483648*r+2147483649*n >= 0 &&
      -1073741823*r+l+1073741823*n >= 0 &&
      2-2*r-2*l+3*n >= 0 &&
      -r+n >= 0 &&
      1+r-n >= 0 &&
      2+2*r+2*l-3*n >= 0 &&
      4294967294+4294967292*r-4294967293*n >= 0
      );
    i = l;
    // unsafe: possible undefined behavior
    j = 2*l;
    /* invariant:
    -2*i+j = 0
    -i+l = 0
    2-2*i-2*r+3*n >= 0
    1073741823-i >= 0
    -r+n >= 0
    -2+r >= 0
    4294967294+4294967292*r-4294967293*n >= 0
    2+2*i+2*r-3*n >= 0
    */
    while(j <= r) {
      __CPROVER_assume(
        -2*i+j == 0 &&
        -i+l == 0 &&
        2-2*i-2*r+3*n >= 0 &&
        1073741823-i >= 0 &&
        -r+n >= 0 &&
        -2+r >= 0 &&
        4294967294+4294967292*r-4294967293*n >= 0 &&
        2+2*i+2*r-3*n >= 0
        );
      if( j < r) {
 __VERIFIER_assert(1 <= j);
 __VERIFIER_assert(j <= n);
 // safe
 __VERIFIER_assert(1 <= j+1);
 // safe
 __VERIFIER_assert(j+1 <= n);
 if( __VERIFIER_nondet_int() )
   // safe
   j = j + 1;
      }
      __VERIFIER_assert(1 <= j);
      __VERIFIER_assert(j <= n);
      if( __VERIFIER_nondet_int() ) {
       break;
      }
      __VERIFIER_assert(1 <= i);
      __VERIFIER_assert(i <= n);
      __VERIFIER_assert(1 <= j);
      __VERIFIER_assert(j <= n);
      i = j;
      // safe
      j = 2*j;
    }
    if(l > 1) {
      __VERIFIER_assert(1 <= l);
      __VERIFIER_assert(l <= n);
      // safe
      l--;
    } else {
      __VERIFIER_assert(1 <= r);
      __VERIFIER_assert(r <= n);
      // safe
      r--;
    }
  }
  /* reachable */
  return 0;
}
