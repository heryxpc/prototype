extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>

pthread_mutex_t  ma, mb;
int data1, data2;

void * thread1(void * arg)
{  
  /* reachable */
  pthread_mutex_lock(&ma);
  data1++;
  pthread_mutex_unlock(&ma);

  pthread_mutex_lock(&ma);
  data2++;
  pthread_mutex_unlock(&ma);
}


void * thread2(void * arg)
{  
  /* reachable */
  pthread_mutex_lock(&ma);
  data1+=5;
  pthread_mutex_unlock(&ma);

  pthread_mutex_lock(&ma);
  data2-=6;
  pthread_mutex_unlock(&ma);
}


int main()
{
  pthread_t  t1, t2;

  /* reachable */
  pthread_mutex_init(&ma, 0);
  pthread_mutex_init(&mb, 0);

  data1 = 10;
  data2 = 10;

  pthread_create(&t1, 0, thread1, 0);
  pthread_create(&t2, 0, thread2, 0);
  
  pthread_join(t1, 0);
  pthread_join(t2, 0);

  if (data1==16 && data2==5)
  {
    ERROR: /* assert not proved */
           __VERIFIER_error();
      ;    
  }

  /* reachable */
  return 0;
}

