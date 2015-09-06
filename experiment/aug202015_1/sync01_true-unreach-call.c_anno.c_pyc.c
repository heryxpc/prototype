extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include "stdio.h" 
#include "pthread.h"

int  num;

pthread_mutex_t  m;
pthread_cond_t  empty, full;

void * thread1(void * arg)
{
  /* reachable */
  pthread_mutex_lock(&m);

  /* reachable */
  while (num > 0) 
    pthread_cond_wait(&empty, &m);
  
  /* reachable */
  num++;

  pthread_mutex_unlock(&m);
  pthread_cond_signal(&full);
}


void * thread2(void * arg)
{
  /* reachable */
  pthread_mutex_lock(&m);

  /* reachable */
  while (num == 0) 
    pthread_cond_wait(&full, &m);

  /* reachable */
  num--;
  
  pthread_mutex_unlock(&m);

  pthread_cond_signal(&empty);
}


int main()
{
  pthread_t  t1, t2;

  /* reachable */
  num = 1;

  pthread_mutex_init(&m, 0);
  pthread_cond_init(&empty, 0);
  pthread_cond_init(&full, 0);
  
  pthread_create(&t1, 0, thread1, 0);
  pthread_create(&t2, 0, thread2, 0);
  
  pthread_join(t1, 0);
  pthread_join(t2, 0);

  if (num!=1)
  {
    ERROR: /* assert not proved */
           __VERIFIER_error();
    ;
  }

  /* reachable */
  return 0;
  
}
