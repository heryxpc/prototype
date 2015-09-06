extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>

int count = 0;

#define assume(e) __VERIFIER_assume(e)
#define assert_nl(e) { if(!(e)) { goto ERROR; } }
#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

void __VERIFIER_atomic_acquire(int * m)
{
	/* reachable */
	assume(*m==0);
	*m = 1;
}

void __VERIFIER_atomic_release(int * m)
{
	assume(*m==1);
	*m = 0;
}

void __VERIFIER_atomic_inc()
{
  count++;
}

void __VERIFIER_atomic_dec()
{
  count--;
}

int mutexa = 0;
int mutexb = 0;
inline void my_thread1()
{
  __VERIFIER_atomic_acquire(&mutexa);
  __VERIFIER_atomic_inc();
  __VERIFIER_atomic_dec();
  __VERIFIER_atomic_release(&mutexa);
}

inline void my_thread2()
{
  __VERIFIER_atomic_acquire(&mutexb);
  __VERIFIER_atomic_dec();
  __VERIFIER_atomic_inc();
  __VERIFIER_atomic_release(&mutexb);
}

void* thr1(void* arg)
{
  /* reachable */
  while(1)
  {

    __VERIFIER_atomic_acquire(&mutexa);
    assert_nl(count >= -1);
    __VERIFIER_atomic_release(&mutexa);

    __VERIFIER_atomic_acquire(&mutexb);
    /* assert OK */
    assert(count <= 1);
    __VERIFIER_atomic_release(&mutexb);

  }
  return 0;
/* UNREACHABLE */
}

void* thr2(void* arg)
{
  if(/* reachable */
     __VERIFIER_nondet_int())
    my_thread1();
  else
    my_thread2();
  /* reachable */
  return 0;
}

int main(void)
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

