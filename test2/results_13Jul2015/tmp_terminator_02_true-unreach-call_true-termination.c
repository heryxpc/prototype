[0;1;31m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0mextern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }
  return;
}
int __VERIFIER_nondet_int();
_Bool __VERIFIER_nondet_bool();

main()
{
  int x=/* reachable */
        __VERIFIER_nondet_int();
  int y=__VERIFIER_nondet_int();
  int z=__VERIFIER_nondet_int();
  __VERIFIER_assume(x<100);
  __VERIFIER_assume(z<100);
  /* reachable */
  while(x<100 && 100<z) 
  {
    _Bool tmp=__VERIFIER_nondet_bool();
    if (tmp)
   {
     x++;
   }
   else
   {
     x--;
     z--;
   }
  }                       
    
  __VERIFIER_assert(x>=100 || z<=100);
/* UNREACHABLE */
}


