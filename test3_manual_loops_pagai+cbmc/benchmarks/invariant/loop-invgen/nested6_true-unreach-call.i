// analysis: AIopt
/* processing Function main */
extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           /* assert not proved */
           /* assert OK */
   __VERIFIER_error();
 }
 return;
}
int __VERIFIER_nondet_int();
void main() {
  int /* reachable */
  i,j,k,n;
  k = __VERIFIER_nondet_int();
  n = __VERIFIER_nondet_int();
  __VERIFIER_assume(n < 1000000);
  if( k == n) {
  } else {
    goto END;
  }
  for (/* invariant:
       -n+k = 0
       i = 0
       */
       i=0;i<n;// safe
       i++) {
    __CPROVER_assume(
      -n+k == 0 &&
      i == 0
      );
    for (// safe
         /* invariant:
         -n+k = 0
         j = 0
         i = 0
         -1+n >= 0
         */
         j=2*i;j<n;// safe
         j++) {
      __CPROVER_assume(
        -n+k == 0 &&
        j == 0 &&
        i == 0 &&
        -1+n >= 0
        );
    if( __VERIFIER_nondet_int() ) {
 for (/* invariant:
      j = 0
      i = 0
      k = 0
      -1+n >= 0
      */
      k=j;k<n;// safe
      k++) {
   // safe
  __CPROVER_assume(
    j == 0 &&
    i == 0 &&
    k == 0 &&
    -1+n >= 0
    );
__VERIFIER_assert(k>=2*i);
}
}
else {
 __VERIFIER_assert( k >= n );
 __VERIFIER_assert( k <= n );
}
}
}
 END:
  ;
/* reachable */
}
