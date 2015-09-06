extern void __VERIFIER_error() __attribute__ ((__noreturn__));

//Ticket lock with proportional backoff
//Algorithms for Scalable Synchronization on Shared-Memory Multiprocessors
//ACM TOCS
//February 1991

#include "pthread.h"

#define assume(e) __VERIFIER_assume(e)
#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

volatile unsigned s = 0; //served
volatile unsigned t = 0; //next ticket

void __VERIFIER_atomic_fetch_and_inc(unsigned * l)
{
  /* reachable */
  /* reachable */
  assume(t != -1); /* pretend "integer-semantics" */
  *l = t;
  t = t + 1;
}

#define pause(e)

#define spin_lock(l,t,s)\
{\
  __VERIFIER_atomic_fetch_and_inc(&l); \
  while(1) { \
    pause(l - s); \
    /* consume this many units of time */ \
    /* on most machines, subtraction works correctly despite overflow */ \
    if(s == l) \
      break; \
  }\
}

#define spin_unlock(s)\
{\
  s++;\
}

unsigned c = 0;
void* thr1(void* arg)
{
/* reachable */
while(1){
  unsigned l;
  /* reachable */
  /* reachable */
  spin_lock(l,t,s);
  c = 1; /* assert not proved */
         /* assert not proved */
         assert(c == 1); c = 0;
  spin_unlock(s);
  }

return 0;
/* UNREACHABLE */
}

int main()
{
  pthread_t t;

  /* reachable */
  while(/* reachable */
        __VERIFIER_nondet_int()) pthread_create(&t, 0, thr1, 0);
  thr1(0);

  /* UNREACHABLE */
  return 0;
}

