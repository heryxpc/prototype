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
  unsigned int SIZE = __VERIFIER_nondet_uint();
  int i;
  int j;
  int k;
  int key;
  int v[SIZE];
  for (j = 1; j < SIZE; j++)
  {
    key = v[j];
    i = j - 1;
        while ((i >= 0) && (v[i] > key))
    {
      v[i + 1] = v[i];
      i = i - 1;
    }

    v[i + 1] = key;
  }

  for (k = 1; k < SIZE; k++)
    __VERIFIER_assert(v[k - 1] <= v[k]);

  return 0;
}

