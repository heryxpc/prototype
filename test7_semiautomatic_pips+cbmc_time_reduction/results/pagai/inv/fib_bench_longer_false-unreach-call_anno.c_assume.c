extern void __VERIFIER_error();
#include <pthread.h>
int i = 1;
int j = 1;
void *t1(void *arg)
{
  int k = 0;
  for (k = 0; k < 6; k++)
  {
    __CPROVER_assume(((6 - k) >= 0) && (k >= 0));
    i += j;
  }

  pthread_exit(0);
}

void *t2(void *arg)
{
  int k = 0;
  for (k = 0; k < 6; k++)
  {
    __CPROVER_assume(((6 - k) >= 0) && (k >= 0));
    j += i;
  }

  pthread_exit(0);
}

int int main(int argc, char **argv)
{
  pthread_t id1;
  pthread_t id2;
  pthread_create(&id1, 0, t1, 0);
  pthread_create(&id2, 0, t2, 0);
  if ((i >= 377) || (j >= 377))
  {
    ERROR:
    __VERIFIER_error();

  }

  return 0;
}

