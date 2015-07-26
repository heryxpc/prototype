// analysis: AIopt
/* processing Function main */
extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           /* assert OK */
           /* assert OK */
           /* assert OK */
           /* assert OK */
           /* assert OK */
           /* assert OK */
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
void main ()
{
  int /* reachable */
      len;
  int i;
  int j;
  int bufsize;
  bufsize = __VERIFIER_nondet_int();
  len = __VERIFIER_nondet_int();
  // unsafe: possible undefined behavior
  int limit = bufsize - 4;
  if (bufsize < 0) return;
  for (/* invariant:
       i = 0
       2147483651-bufsize >= 0
       bufsize >= 0
       */
       i = 0; i < len; ) {
    __CPROVER_assume(i == 0 &&
       2147483651-bufsize >= 0 &&
       bufsize >= 0
       );
    for (/* invariant:
         j = 0
         i = 0
         2147483651-bufsize >= 0
         -1+len >= 0
         bufsize >= 0
         */
         j = 0; i < len && j < limit; ){
      __CPROVER_assume(j == 0 &&
         i == 0 &&
         2147483651-bufsize >= 0 &&
         -1+len >= 0 &&
         bufsize >= 0
       );
      // safe
      if (i + 1 < len){
 // safe
 __VERIFIER_assert(i+1<len);
 __VERIFIER_assert(0<=i);
 if( __VERIFIER_nondet_int() ) goto ELSE;
        __VERIFIER_assert(i<len);
 __VERIFIER_assert(0<=i);
        __VERIFIER_assert(j<bufsize);
 __VERIFIER_assert(0<=j);
        // safe
        j++;
        // safe
        i++;
        __VERIFIER_assert(i<len);
 __VERIFIER_assert(0<=i);
        __VERIFIER_assert(j<bufsize);
 __VERIFIER_assert(0<=j);
        // safe
        j++;
        // safe
        i++;
        __VERIFIER_assert(j<bufsize);
 __VERIFIER_assert(0<=j);
        // safe
        j++;
      } else {
ELSE:
        __VERIFIER_assert(i<len);
 __VERIFIER_assert(0<=i);
        __VERIFIER_assert(j<bufsize);
 __VERIFIER_assert(0<=j);
        // safe
        j++;
        // safe
        i++;
      }
    }
  }
/* reachable */
}
