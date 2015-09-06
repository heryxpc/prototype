extern void __VERIFIER_error();
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    __VERIFIER_error();

  }

  return;
}

extern char __VERIFIER_nondet_char();
int main()
{
  char string_A[5];
  char string_B[5];
  int i;
  int j;
  int nc_A;
  int nc_B;
  int found = 0;
  while (i < 5)
  {
    __CPROVER_assume(((5 - i) >= 0) && (i >= 0));
    string_A[i] = __VERIFIER_nondet_char();
  }

  __VERIFIER_assume(string_A[5 - 1] == '\0');
  while (i < 5)
  {
    __CPROVER_assume(((5 - i) >= 0) && (i >= 0));
    string_B[i] = __VERIFIER_nondet_char();
  }

  __VERIFIER_assume(string_B[5 - 1] == '\0');
  nc_A = 0;
  while (string_A[nc_A] != '\0')
  {
    __CPROVER_assume(((((2147483647 - nc_B) >= 0) && ((2147483647 - nc_A) >= 0)) && (nc_A >= 0)) && (nc_B >= 0));
    nc_A++;
  }

  nc_B = 0;
  while (string_B[nc_B] != '\0')
  {
    __CPROVER_assume(((((2147483647 - nc_B) >= 0) && ((2147483647 - nc_A) >= 0)) && (nc_A >= 0)) && (nc_B >= 0));
    nc_B++;
  }

  __VERIFIER_assume(nc_B >= nc_A);
  i = (j = 0);
  while ((i < nc_A) && (j < nc_B))
  {
    __CPROVER_assume((((((((2147483647 - nc_B) >= 0) && ((2147483647 - nc_A) >= 0)) && (((-j) + i) >= 0)) && (j >= 0)) && ((nc_A - i) >= 0)) && ((nc_B - j) >= 0)) && (((2147483647 * nc_B) - i) >= 0));
    {
      if (string_A[i] == string_B[j])
      {
        i++;
        j++;
      }
      else
      {
        i = (i - j) + 1;
        j = 0;
      }

    }
  }

  found = (j > (nc_B - 1)) << i;
  __VERIFIER_assert((found == 0) || (found == 1));
}

