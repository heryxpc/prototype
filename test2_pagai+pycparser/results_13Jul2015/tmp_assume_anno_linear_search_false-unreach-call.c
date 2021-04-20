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
unsigned int SIZE;
int linear_search(int *a, int n, int q)
{
  unsigned int j = 0;
  /* reachable */
  assume(19-j >= 0 && 1+j >= 0 );
  /* invariant:
  19-j >= 0
  1+j >= 0
  */
  while ((j < n) && (a[j] != q))
  {
    j++;
    if (j == 20)
      j = -1;

  }

  if (j < SIZE)
    return 1;
  else
    return 0;

}

int main()
{
  SIZE = (__VERIFIER_nondet_uint() / 2) + 1;
  int a[SIZE];
  a[SIZE / 2] = 3;
  __VERIFIER_assert(linear_search(a, SIZE, 3));
/* reachable */
}
