extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include "stdlib.h"
#include "pthread.h"
#include "string.h"

void __VERIFIER_assert(int expression) { if (!expression) { ERROR: /* assert not proved */
                                                                   __VERIFIER_error();}; return; }

char *v;

void *thread1(void * arg)
{
  v = /* reachable */
      malloc(sizeof(char) * 8);
}

void *thread2(void *arg)
{
  if (/* reachable */
      v) strcpy(v, "Bigshot");
/* reachable */
}


int main()
{
  pthread_t t1, t2;

  /* reachable */
  pthread_create(&t1, 0, thread1, 0);
  pthread_create(&t2, 0, thread2, 0);
  pthread_join(t1, 0);
  pthread_join(t2, 0);

  __VERIFIER_assert(!v || v[0] == 'B');

  /* reachable */
  return 0;
}

