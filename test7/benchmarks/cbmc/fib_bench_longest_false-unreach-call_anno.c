extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>

void __VERIFIER_assert(int expression) { if (!expression) { ERROR: __VERIFIER_error();}; return; }

int i=1, j=1;

#define NUM 11

void *
t1(void* arg)
{
  int k = 0;

  for (/* reachable */
       /* invariant:
       11-k >= 0
       k >= 0
       */
       k = 0; k < NUM; k++) {
    __CPROVER_assume(11-k >= 0 && k >= 0);
      i+=j;
  }
    

  /* reachable */
  pthread_exit(NULL);
/* UNREACHABLE */
}

void *
t2(void* arg)
{
  int k = 0;

  for (/* reachable */
       /* invariant:
       11-k >= 0
       k >= 0
       */
       k = 0; k < NUM; k++) {
    __CPROVER_assume(11-k >= 0 && k >= 0);
    j+=i;
  }

  /* reachable */
  pthread_exit(NULL);
/* UNREACHABLE */
}

int
main(int argc, char **argv)
{
  pthread_t id1, id2;

  /* reachable */
  pthread_create(&id1, NULL, t1, NULL);
  pthread_create(&id2, NULL, t2, NULL);

  if (i >= 46368 || j >= 46368) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }

  /* reachable */
  return 0;
}
