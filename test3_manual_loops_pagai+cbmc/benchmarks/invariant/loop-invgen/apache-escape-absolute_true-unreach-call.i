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
           /* assert OK */
           /* assert OK */
           /* assert OK */
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
      scheme;
  int urilen,tokenlen;
  int cp,c;
  urilen = __VERIFIER_nondet_int();
  tokenlen = __VERIFIER_nondet_int();
  scheme = __VERIFIER_nondet_int();
  if(urilen>0); else goto END;
  if(tokenlen>0); else goto END;
  if(scheme >= 0 );else goto END;
  // unsafe: possible undefined behavior
  if (scheme == 0
      || (urilen-1 < scheme)) {
    goto END;
  }
  cp = scheme;
  // safe
  __VERIFIER_assert(cp-1 < urilen);
  // safe
  __VERIFIER_assert(0 <= cp-1);
  if (__VERIFIER_nondet_int()) {
      __VERIFIER_assert(cp < urilen);
      __VERIFIER_assert(0 <= cp);
      /* UNREACHABLE */
      // safe
      while ( cp != urilen-1) {
   if(__VERIFIER_nondet_int()) break;
   __VERIFIER_assert(cp < urilen);
   __VERIFIER_assert(0 <= cp);
   // safe
   ++cp;
      }
      __VERIFIER_assert(cp < urilen);
      __VERIFIER_assert( 0 <= cp );
      // safe
      if (cp == urilen-1) goto END;
      // safe
      __VERIFIER_assert(cp+1 < urilen);
      // safe
      __VERIFIER_assert( 0 <= cp+1 );
      // safe
      // safe
      if (cp+1 == urilen-1) goto END;
      // safe
      ++cp;
      scheme = cp;
      if (__VERIFIER_nondet_int()) {
   c = 0;
   __VERIFIER_assert(cp < urilen);
   __VERIFIER_assert(0<=cp);
   /* UNREACHABLE */
   // safe
   // safe
   while ( cp != urilen-1
    && c < tokenlen - 1) {
       __VERIFIER_assert(cp < urilen);
       __VERIFIER_assert(0<=cp);
       if (__VERIFIER_nondet_int()) {
    // safe
    ++c;
    __VERIFIER_assert(c < tokenlen);
    __VERIFIER_assert(0<=c);
    __VERIFIER_assert(cp < urilen);
    __VERIFIER_assert(0<=cp);
       }
       // safe
       ++cp;
   }
   goto END;
      }
  }
 END:
  /* reachable */
  return;
}
