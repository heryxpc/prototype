extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>

void *thr1(void *arg)
{
  unsigned int x;
  unsigned int y;
  unsigned int z;
  int i;
  int j;
  int k;
  for (i = 0; i < x; i++)
  {
    __CPROVER_assume(i >= 0);
    {
      __CPROVER_assume(i >= 0);
      {
        __CPROVER_assume(i >= 0);
        {
          for (j = i + 1; j < y; j++)
          {
            __CPROVER_assume((((((-1) - i) + j) >= 0) && (i >= 0)) && ((((-1) + x) - i) >= 0));
            {
              __CPROVER_assume((((((-1) - i) + j) >= 0) && (i >= 0)) && ((((-1) + x) - i) >= 0));
              {
                __CPROVER_assume(i >= 0);
                {
                  for (k = j; k < z; k++)
                  {
                    __CPROVER_assume((((((((-1) - i) + j) >= 0) && (i >= 0)) && ((k - j) >= 0)) && ((((-1) + x) - i) >= 0)) && ((((-1) + y) - j) >= 0));
                    {
                      __CPROVER_assume((((((-1) - i) + j) >= 0) && (i >= 0)) && ((((-1) + x) - i) >= 0));
                      {
                        __CPROVER_assume(i >= 0);
                        {
                          {
                            if (!(k > i))
                            {
                              goto ERROR;
                            }

                          }
                          ;
                        }
                      }
                    }
                  }

                }
              }
            }
          }

        }
      }
    }
  }

  {
    if (!(((i == x) && ((j == y) || (y <= (x + 1)))) && ((((x == 0) || (y <= (x + 1))) || (k == z)) || (z < y))))
    {
      ERROR:
      __VERIFIER_error();

      (void) 0;
    }

  }
  ;
  return 0;
}

int main()
{
  pthread_t t;
  while (1)
  {
    pthread_create(&t, 0, thr1, 0);
  }

}


