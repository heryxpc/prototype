extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>

unsigned int r = 0;
unsigned int s = 0;
void __VERIFIER_atomic_inc_r()
{
  __VERIFIER_assume(r != (-1));
  r = r + 1;
}

void *thr1(void *arg)
{
  unsigned int l = 0;
  __VERIFIER_atomic_inc_r();
  if (r == 1)
  {
    L3:
    s = s + 1;

    l = l + 1;
    {
      if (!(s == l))
      {
        ERROR:
        __VERIFIER_error();

        (void) 0;
      }

    }
    ;
    goto L3;
  }

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


