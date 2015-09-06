extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>

int i=1, j=1;

#define NUM 5

void *
t1(void* arg)
{
  int k = 0;

  for (/* reachable */
       /* invariant:
       5-k >= 0
       k >= 0
       */
       k = 0; k < NUM; k++)
    i+=j;

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
       5-k >= 0
       k >= 0
       */
       k = 0; k < NUM; k++)
    j+=i;

  /* reachable */
  pthread_exit(NULL);
/* UNREACHABLE */
}

int main(int argc, char **argv)
{
  pthread_t id1, id2;

  /* reachable */
  pthread_create(&id1, NULL, t1, NULL);
  pthread_create(&id2, NULL, t2, NULL);

  if (i >= 144 || j >= 144) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }

  /* reachable */
  return 0;
}
