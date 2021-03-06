extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include "pthread.h"

#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

int flag1 = 0, flag2 = 0; // N integer flags 
int x; // variable to test mutual exclusion

void* thr1(void* arg) {
  /* reachable */
  while (1) {
    /* reachable */
    flag1 = 1;
    /* reachable */
    while (flag2 >= 3); 
    flag1 = 3;
    if (flag2 == 1) {
      flag1 = 2;
      /* reachable */
      while (flag2 != 4);
    }
    flag1 = 4;
    /* reachable */
    while (flag2 >= 2);
    // begin critical section
    x = 0;
    /* assert not proved */
    assert(x<=0);
    // end critical section
    /* reachable */
    while (2 <= flag2 && flag2 <= 3);
    flag1 = 0;
  }

  return 0;
/* UNREACHABLE */
}

void* thr2(void* arg) {
  /* reachable */
  while (1) {
    /* reachable */
    flag2 = 1;
    /* reachable */
    while (flag1 >= 3);
    flag2 = 3;
    if (flag1 == 1) {
      flag2 = 2;
      /* reachable */
      while (flag1 != 4);
    }
    flag2 = 4;
    /* reachable */
    while (flag1 >= 2);
    // begin critical section
    x = 1;
    /* assert not proved */
    assert(x>=1);
    // end critical section
    /* reachable */
    while (2 <= flag1 && flag1 <= 3);
    flag2 = 0;
  }

  return 0;
}

int main()
{
  pthread_t t;

  pthread_create(&t, 0, thr1, 0);
  thr2(0);

  /* UNREACHABLE */
  return 0;
}

