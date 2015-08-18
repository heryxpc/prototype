extern void __VERIFIER_error();

#include <stdlib.h>
#include <pthread.h>
#include <string.h>

void __VERIFIER_assert(int expression)
{
  if (!expression)
  {
    ERROR:
    __VERIFIER_error();

  }

  ;
  return;
}

const int SIGMA = 16;
int *array;
int array_index;
void *thread(void *arg)
{
  array[array_index] = 1;
  return 0;
}

int main()
{
  int tid;
  int sum;
  pthread_t *t;
  t = (pthread_t *) malloc((sizeof(pthread_t)) * SIGMA);
  array = (int *) malloc((sizeof(int)) * SIGMA);
  __VERIFIER_assume(t);
  __VERIFIER_assume(array);
  for (tid = 0; tid < SIGMA; tid++)
  {
    __CPROVER_assume(((16 - tid) >= 0) && (tid >= 0));
    {
      pthread_create(&t[tid], 0, thread, 0);
      array_index++;
    }
  }

  for (tid = 0; tid < SIGMA; tid++)
  {
    __CPROVER_assume(((16 - tid) >= 0) && (tid >= 0));
    {
      pthread_join(t[tid], 0);
    }
  }

  for (tid = (sum = 0); tid < SIGMA; tid++)
  {
    __CPROVER_assume(((16 - tid) >= 0) && (tid >= 0)); //This Invariant may be the difference maker
    {
      sum += array[tid];
    }
  }

  __VERIFIER_assert(sum == SIGMA);
  return 0;
}

