extern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }
  return;
}
unsigned int __VERIFIER_nondet_uint();

int main()
{
  unsigned int n = /* reachable */
                   __VERIFIER_nondet_uint();
  unsigned int x=n, y=0;
  /* invariant:
  -n+y+x = 0
  y >= 0
  */
  while(x>0)
  {
    x--;
    y++;
  }
  __VERIFIER_assert(y==n);
/* reachable */
}

