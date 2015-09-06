[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;31m[0m[0;1;35m[0m[0;1;35m[0mextern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>
#include <assert.h>

pthread_mutex_t  mutex;
int data = 0;

void *thread1(void *arg)
{
  /* reachable */
  pthread_mutex_lock(&mutex);
  data++;
  pthread_mutex_unlock(&mutex);
}


void *thread2(void *arg)
{
  /* reachable */
  pthread_mutex_lock(&mutex);
  data+=2;
  pthread_mutex_unlock(&mutex);
}


void *thread3(void *arg)
{
  /* reachable */
  pthread_mutex_lock(&mutex);
  if (data >= 3){
    ERROR: /* assert not proved */
           __VERIFIER_error();
    ;
  }
  /* reachable */
  pthread_mutex_unlock(&mutex);
}


int main()
{
  /* reachable */
  pthread_mutex_init(&mutex, 0);

  pthread_t t1, t2, t3;

  pthread_create(&t1, 0, thread1, 0);
  pthread_create(&t2, 0, thread2, 0);
  pthread_create(&t3, 0, thread3, 0);

  pthread_join(t1, 0);
  pthread_join(t2, 0);
  pthread_join(t3, 0);

  return 0;
}
