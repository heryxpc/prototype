extern void __VERIFIER_error();
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    __VERIFIER_error();

  }

  return;
}

unsigned int __VERIFIER_nondet_uint();
int main()
{
  unsigned int n = __VERIFIER_nondet_uint();
  unsigned int x = n;
  unsigned int y = 0;
  assume(-n+y+x == 0 && y >= 0 );
  while (x > 0)
  {
    x--;
    y++;
  }

  __VERIFIER_assert(y != n);
}

