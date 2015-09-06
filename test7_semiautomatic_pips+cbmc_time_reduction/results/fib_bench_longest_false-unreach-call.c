#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

void __VERIFIER_error() { fprintf(stdout,"Error found\n"); abort(); };
void __VERIFIER_assert(int expression) { if (!expression) { __VERIFIER_error();}; return; }

int i=1, j=1;

#define NUM 1100

void *
t1(void* arg)
{
  int k = 0;
  printf("Thread1 Running\n");

  for (k = 0; k < NUM; k++, i+=j)
    if (i >= 46368 || j >= 46368) {
      ERROR: __VERIFIER_error();
    }
  
  pthread_exit(NULL);
}

void *
t2(void* arg)
{
  int k = 0;
  printf("Thread2 Running\n");

  for (k = 0; k < NUM; k++, j+=i)
    if (i >= 46368 || j >= 46368) {
      ERROR: __VERIFIER_error();
    }
  pthread_exit(NULL);
}

int
main(int argc, char **argv)
{
  pthread_t id1, id2;

  pthread_create(&id1, NULL, t1, NULL);
  pthread_create(&id2, NULL, t2, NULL);

  pthread_join(id2, NULL);
  // pthread_join(id1, NULL);
  

  return 0;
}
