[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m// Source: Azadeh Farzan, Zachary Kincaid, Andreas Podelski: "Inductive Data
// Flow Graphs", POPL 2013

#include <pthread.h>
#include "assert.h"

volatile int x;
#define N 50

void* thr1(void* arg) {
    /* reachable */
    __VERIFIER_assert(x < N);
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
    pthread_create(&t1, 0, thr1, 0);
    for (/* invariant:
         50-i >= 0
         i >= 0
         */
         i = 0; i < N; i++) {
	pthread_create(&t2, 0, thr2, 0);
    }
/* reachable */
}
