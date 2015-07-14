[0;1;31m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0mextern void __VERIFIER_error();
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    /* assert not proved */
    __VERIFIER_error();

  }

  return;
}

int __VERIFIER_nondet_int();
char x[100];
char y[100];
int i;
int j;
int k;
void main()
{
  k = /* reachable */
      __VERIFIER_nondet_int();
  i = 0;
    /* invariant:
    i50.0 >= 0
    */
    while (x[i] != 0)
  {
    y[i] = x[i];
    i++;
  }

  y[i] = 0;
  if ((k >= 0) && (k < i))
    if (y[k] != 0)
  {
    __VERIFIER_assert(0);
  }


/* reachable */
}

