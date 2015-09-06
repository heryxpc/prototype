extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <stdlib.h>
#include <pthread.h>

#define SIZE  128
#define MAX   4
#define NUM_THREADS  13

int table[SIZE];
pthread_mutex_t  cas_mutex[SIZE];

pthread_t  tids[NUM_THREADS];


int cas(int * tab, int h, int val, int new_val)
{
  int ret_val = 0;
  /* invariant:
  127-h >= 0
  3-m >= 0
  m >= 0
  127+h >= 0
  */
  pthread_mutex_lock(&cas_mutex[h]);
  
 
  if ( tab[h] == val ) {
    tab[h] = new_val;
    ret_val = 1;
  }

  pthread_mutex_unlock(&cas_mutex[h]);

  
  return ret_val;
} 



void * thread_routine(void * arg)
{
  int tid;
  int m = 0, w, h;
  /* reachable */
  tid = *((int *)arg);
  
  while(1){
    if ( /* invariant:
         4-m >= 0
         m >= 0
         */
         m < MAX ){
      w = (++m) * 11 + tid;
    }
    else{
      /* reachable */
      pthread_exit(NULL);
    }
    
    h = (w * 7) % SIZE;
    
    if (h<0)
    {
      ERROR: /* assert OK */
             __VERIFIER_error();
      ;
    }

    while ( cas(table, h, 0, w) == 0){
      h = (h+1) % SIZE;
    }
  }

/* UNREACHABLE */
}


int main()
{
  int i, arg;

  for (/* reachable */
       /* invariant:
       128-i >= 0
       i >= 0
       */
       i = 0; i < SIZE; i++)
    pthread_mutex_init(&cas_mutex[i], NULL);

  for (/* invariant:
       13-i >= 0
       i >= 0
       */
       i = 0; i < NUM_THREADS; i++){
    arg=i;
    pthread_create(&tids[i], NULL,  thread_routine, &arg);
  }

  for (/* invariant:
       13-i >= 0
       i >= 0
       */
       i = 0; i < NUM_THREADS; i++){
    pthread_join(tids[i], NULL);
  }

  for (/* invariant:
       128-i >= 0
       i >= 0
       */
       i = 0; i < SIZE; i++){
    pthread_mutex_destroy(&cas_mutex[i]);
  }

/* reachable */
}
