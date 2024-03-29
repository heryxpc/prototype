[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;31m[0m[0;1;35m[0m[0;1;31m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0mextern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>

#define assume(e) __VERIFIER_assume(e)
#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

#define MONITOR_EQ(x,y) \
{ \
  while(1) \
  {\
    __VERIFIER_atomic_acquire();\
    assert(g0==g1);\
    __VERIFIER_atomic_release();\
  }\
}

int g0 = 0,g1 = 0,x = 0;
_Bool lock = 0;
int mutex = 0;

void __VERIFIER_atomic_acquire()
{
	/* reachable */
	/* reachable */
	/* reachable */
	assume(mutex==0);
	mutex = 1;
}

void __VERIFIER_atomic_release()
{
	/* reachable */
	assume(mutex==1);
	mutex = 0;
}

void* thr3(void* arg)
{

  __VERIFIER_atomic_acquire();
  if(__VERIFIER_nondet_int())
  {
    g0=0;
    g1=0;
    lock=0;
  }
  __VERIFIER_atomic_release();
  
  __VERIFIER_atomic_acquire();
  if(lock)
  {
    x=1;
    /* assert not proved */
    assert(g0==1 && g1==1);
  }
  __VERIFIER_atomic_release();

  return 0;
}

void* thr2(void* arg)
{
  /* reachable */
  /* assert not proved */
  MONITOR_EQ(g0,g1);

  return 0;
/* UNREACHABLE */
}

void* thr1(void* arg)
{
  __VERIFIER_atomic_acquire();
  g0=1,g1=1;
  __VERIFIER_atomic_release();
  lock=1;

  return 0;
}

int main() {
  pthread_t t;

  /* reachable */
  pthread_create(&t, 0, thr1, 0);
  pthread_create(&t, 0, thr2, 0);
  while(1)
  {
    /* reachable */
    pthread_create(&t, 0, thr3, 0);
  }
/* UNREACHABLE */
}

