extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Testcase from Threader's distribution. For details see:
   http://www.model.in.tum.de/~popeea/research/threader
*/

#include "pthread.h"
#define assert(e) if (!(e)) ERROR: __VERIFIER_error();

int flag1 = 0, flag2 = 0; // boolean flags
int turn; // integer variable to hold the ID of the thread whose turn is it
int x; // boolean variable to test mutual exclusion

void *thr1() {
  /* reachable */
  flag1 = 1;
  turn = 1;
  /* reachable */
  while (flag2==1 && turn==1) {};
  // begin: critical section
  x = 0;
  /* assert not proved */
  assert(x<=0);
  // end: critical section
  flag1 = 0;
/* reachable */
}

void *thr2() {
  /* reachable */
  flag2 = 1;
  turn = 0;
  /* reachable */
  while (flag1==1 && turn==0) {};
  // begin: critical section
  x = 1;
  /* assert not proved */
  assert(x>=1);
  // end: critical section
  flag2 = 0;
/* reachable */
}
  
int main() {
  pthread_t t1, t2;
  /* reachable */
  pthread_create(&t1, 0, thr1, 0);
  pthread_create(&t2, 0, thr2, 0);
  pthread_join(t1, 0);
  pthread_join(t2, 0);
  return 0;
}
