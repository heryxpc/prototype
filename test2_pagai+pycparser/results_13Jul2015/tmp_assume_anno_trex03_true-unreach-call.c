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

unsigned int __VERIFIER_nondet_uint();
_Bool __VERIFIER_nondet_bool();
int main()
{
  unsigned int x1 = /* reachable */
                    __VERIFIER_nondet_uint();
  unsigned int x2 = __VERIFIER_nondet_uint();
  unsigned int x3 = __VERIFIER_nondet_uint();
  unsigned int d1 = 1;
  unsigned int d2 = 1;
  unsigned int d3 = 1;
  _Bool c1 = __VERIFIER_nondet_bool();
  _Bool c2 = __VERIFIER_nondet_bool();
    /* reachable */
    while (((x1 > 0) && (x2 > 0)) && (x3 > 0))
  {
    if (c1)
      x1 = x1 - d1;
    else
      if (c2)
      x2 = x2 - d2;
    else
      x3 = x3 - d3;


    c1 = __VERIFIER_nondet_bool();
    c2 = __VERIFIER_nondet_bool();
  }

  __VERIFIER_assert(((x1 == 0) || (x2 == 0)) || (x3 == 0));
  /* reachable */
  return 0;
}

