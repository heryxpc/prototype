extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include "pthread.h"

#define assume(e) __VERIFIER_assume(e)
#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

int x=1, m=0;

void __VERIFIER_atomic_acquire()
{
	/* reachable */
	assume(m==0);
	m = 1;
}

void __VERIFIER_atomic_release()
{
	/* reachable */
	assume(m==1);
	m = 0;
}

void* thr1(void* arg) {
  __VERIFIER_atomic_acquire(); // m=0 /\ m'=1
  x = 0;
  x = 1;
  /* assert not proved */
  assert(x>=1);
  __VERIFIER_atomic_release();

  return 0;
}

int main()
{
  pthread_t t;

  /* reachable */
  while(1) /* reachable */
           pthread_create(&t, 0, thr1, 0);
/* UNREACHABLE */
}

