extern void __VERIFIER_error(void);                                             
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (/* reachable */
      !(cond)) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }
  return;
}
void __VERIFIER_atomic_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
/* reachable */
  }
  return;
}
int __VERIFIER_nondet_int();
// Source: Azadeh Farzan, Zachary Kincaid, Andreas Podelski: "Inductive Data
// Flow Graphs", POPL 2013

#include <pthread.h>
#include "assert.h"

volatile int x;
volatile int n;

void* thr1(void* arg) {
    __VERIFIER_assert(x < n);
}

void* thr2(void* arg) {
    int t;
    /* reachable */
    t = x;
    x = t + 1;
}

void main(int argc, char* argv[]) {
    pthread_t t1, t2;
    int i;
    /* reachable */
    x = 0;
    n = __VERIFIER_nondet_int();
    __VERIFIER_assume(n > 0);
    pthread_create(&t1, 0, thr1, 0);    
    for (/* invariant:
         i >= 0
         */
         i = 0; i < n; i++) {
	pthread_create(&t2, 0, thr2, 0);
    }
/* reachable */
}
