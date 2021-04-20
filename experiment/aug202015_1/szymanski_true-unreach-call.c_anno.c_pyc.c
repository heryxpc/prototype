extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Testcase from Threader's distribution. For details see:
   http://www.model.in.tum.de/~popeea/research/threader
*/

#include "pthread.h"
#define assert(e) if (!(e)) ERROR: __VERIFIER_error();

int flag1 = 0, flag2 = 0; // integer flags 
int x; // boolean variable to test mutual exclusion

void *thr1() {
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
  /* reachable */
  flag1 = 0;
}

void *thr2() {
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
  /* reachable */
  flag2 = 0;
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