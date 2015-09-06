extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include "pthread.h"

#define assume(e) __VERIFIER_assume(e)
#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

int mutex;
int res;

void __VERIFIER_atomic_acquire()
{
	/* reachable */
	assume(mutex==0);
	mutex = 1;
}

void __VERIFIER_atomic_release()
{
	assume(mutex==1);
	mutex = 0;
}

typedef int (*FuncType)(int, int);

inline int f1(int a, int b)
{
  return a+b+1;
}

inline int f2(int x, int y)
{
  return x-y+2;
}

void* thr2(void* arg)
{
  FuncType pf;

  if( /* reachable */
      __VERIFIER_nondet_int() )
    pf = f1;
  else
    pf = f2;

  __VERIFIER_atomic_acquire();
  res = pf(4,3);
  __VERIFIER_atomic_release();

  return 0;
}

void* thr1(void* arg)
{
  /* reachable */
  while(1)
  {
    /* reachable */
    /* assert not proved */
    assert(res < 10);
  }

  return 0;
/* UNREACHABLE */
}


int main()
{
  pthread_t t;

  /* reachable */
  pthread_create(&t, 0, thr1, 0);
  while(1)
  {
    /* reachable */
    pthread_create(&t, 0, thr2, 0);
  }
/* UNREACHABLE */
}


