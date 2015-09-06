extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include "pthread.h"

#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

int flag1 = 0, flag2 = 0; // N boolean flags 
int turn = 0; // integer variable to hold the ID of the thread whose turn is it
int x; // variable to test mutual exclusion

void* thr1(void* arg) {
  flag1 = 1;
  /* reachable */
  /* reachable */
  while (flag2 >= 1) {
    if (turn != 0) {
      flag1 = 0;
      /* reachable */
      while (turn != 0) {};
      flag1 = 1;
    }
  }
  // begin: critical section
  x = 0;
  /* assert not proved */
  assert(x<=0);
  // end: critical section
  turn = 1;
  flag1 = 0;

  /* reachable */
  return 0;
}

void* thr2(void* arg) {
  flag2 = 1;
  /* reachable */
  /* reachable */
  while (flag1 >= 1) {
    if (turn != 1) {
      flag2 = 0;
      /* reachable */
      while (turn != 1) {};
      flag2 = 1;
    }
  }
  // begin: critical section
  x = 1;
  /* assert not proved */
  assert(x>=1);
  // end: critical section
  turn = 1;
  flag2 = 0;

  return 0;
}

int main()
{
  pthread_t t;

  pthread_create(&t, 0, thr1, 0);
  thr2(0);

  /* reachable */
  return 0;
}

