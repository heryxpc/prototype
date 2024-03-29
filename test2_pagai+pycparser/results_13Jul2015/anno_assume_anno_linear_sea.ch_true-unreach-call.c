extern void __VERIFIER_error();
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
    /* invariant:
    j >= 0
    */
    while ((j < n) && (a[j] != q))
  {
    j++;
  }

  if (j < SIZE)
    return 1;
  else
    return 0;

}

int main()
{
  SIZE = (__VERIFIER_nondet_uint() / 8) + 1;
  int a[SIZE];
  a[SIZE / 2] = 3;
  __VERIFIER_assert(linear_search(a, SIZE, 3));
/* reachable */
}

