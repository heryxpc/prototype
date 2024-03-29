extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include "pthread.h"

#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

int x;
int y;
int b1, b2; // N boolean flags
int X; //variable to test mutual exclusion

void* thr1(void* arg) {
  /* reachable */
  while (1) {
    b1 = 1;
    /* reachable */
    x = 1;
    if (y != 0) {
      b1 = 0;
      /* reachable */
      while (y != 0) {};
      continue;
    }
    y = 1;
    if (x != 1) {
      b1 = 0;
      /* reachable */
      while (b2 >= 1) {};
      if (y != 1) {
	/* reachable */
	while (y != 0) {};
	continue;
      }
    }
    break;
  }
  // begin: critical section
  X = 0;
  /* assert not proved */
  assert(X <= 0);
  // end: critical section
  /* reachable */
  y = 0;
  b1 = 0;

  return 0;
}

void* thr2(void* arg) {
  /* reachable */
  while (1) {
    b2 = 1;
    /* reachable */
    x = 2;
    if (y != 0) {
      b2 = 0;
      /* reachable */
      while (y != 0) {};
      continue;
    }
    y = 2;
    if (x != 2) {
      b2 = 0;
      /* reachable */
      while (b1 >= 1) {};
      if (y != 2) {
	/* reachable */
	while (y != 0) {};
	continue;
      }
    }
    break;
  }
  // begin: critical section
  X = 1;
  /* assert not proved */
  assert(X >= 1);
  // end: critical section
  /* reachable */
  y = 0;
  b2 = 0;

  return 0;
}

int main()
{
  pthread_t t;

  pthread_create(&t, 0, thr1, 0);
  thr2(0);

  return 0;
}

