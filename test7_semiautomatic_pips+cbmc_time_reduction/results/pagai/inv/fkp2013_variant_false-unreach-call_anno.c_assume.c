#include <pthread.h>

extern void __VERIFIER_error(void);
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

void __VERIFIER_atomic_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    __VERIFIER_error();

  }

  return;
}

int __VERIFIER_nondet_int();
volatile int x;
volatile int n;
void *thr1(void *arg)
{
  __VERIFIER_assert(x < n);
}

void *thr2(void *arg)
{
  int t;
  t = x;
  x = t + 1;
}

int main(int argc, char *argv[])
{
  pthread_t t1;
  pthread_t t2;
  int i;
  x = 0;
  n = __VERIFIER_nondet_int();
  __VERIFIER_assume(n > 0);
  pthread_create(&t1, 0, thr1, 0);
  for (i = 0; i < n; i++)
  {
    __CPROVER_assume(i >= 0);
    {
      pthread_create(&t2, 0, thr2, 0);
    }
  }

}

