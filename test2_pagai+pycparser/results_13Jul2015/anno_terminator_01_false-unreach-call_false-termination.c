extern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }
  return;
}
int __VERIFIER_nondet_int();

main()
{
  int x=/* reachable */
        __VERIFIER_nondet_int();
  int *p = &x;
 
  /* reachable */
  while(x<100) {
   (*p)++;
  }                       
  __VERIFIER_assert(0);    
/* UNREACHABLE */
}

