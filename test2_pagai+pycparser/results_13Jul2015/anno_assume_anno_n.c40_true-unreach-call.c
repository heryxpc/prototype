extern void __VERIFIER_error();
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
    i51.0 >= 0
    */
    while (x[i] != 0)
  {
    y[i] = x[i];
    i++;
  }

  y[i] = 0;
  if ((k >= 0) && (k < i))
    if (y[k] == 0)
  {
    ERROR:
    /* assert not proved */
    __VERIFIER_error();

  }


/* reachable */
}

