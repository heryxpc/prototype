// analysis: AIopt
/* processing Function main */
extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
   __VERIFIER_error();
 }
 return;
}
int __VERIFIER_nondet_int();
int __BLAST_NONDET;
void main() {
  int /* reachable */
  i,j,k,n,l,m;
  n = __VERIFIER_nondet_int();
  m = __VERIFIER_nondet_int();
  l = __VERIFIER_nondet_int();
  //__VERIFIER_assume(-1000000 < n && n < 1000000);
  // unsafe: possible undefined behavior
  // unsafe: possible undefined behavior
  if(3*n<=m+l); else goto END;
  for (/* invariant:
       715827882-715827883*i+n >= 0
       1-i >= 0
       715827882-n >= 0
       i >= 0
       */
       i=0;i<n;// safe
       i++) {
    __CPROVER_assume(
      715827882-715827883*i+n >= 0 &&
      1-i >= 0 &&
      715827882-n >= 0 &&
      i >= 0);
    for (// safe
         /* invariant:
         -2*i+j = 0
         1-i >= 0
         -1-i+n >= 0
         715827882-n >= 0
         i >= 0
         */
         // safe
         j = 2*i;j<3*i;// safe
         j++) {
      __CPROVER_assume(
        -2*i+j == 0 &&
        1-i >= 0 &&
        -1-i+n >= 0 &&
        715827882-n >= 0 &&
        i >= 0);
      for (/* invariant:
           -2+j = 0
           -1+k = 0
           -1+i = 0
           715827882-n >= 0
           -2+n >= 0
           */
           k = i; k< j; // safe
           k++) {
        __CPROVER_assume(
         -2+j == 0 &&
         -1+k == 0 &&
         -1+i == 0 &&
         715827882-n >= 0 &&
         -2+n >= 0);
       // safe
       // safe
      __VERIFIER_assert( k-i <= 2*n );
    }
  }
}
END:
;
/* reachable */
}
