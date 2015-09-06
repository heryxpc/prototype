extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include "stdlib.h"
#include "pthread.h"
#include "string.h"

void __VERIFIER_assert(int expression) { if (!expression) { ERROR: /* assert not proved */
                                                                   /* assert not proved */
                                                                   __VERIFIER_error();}; return; }

const int SIGMA = 16;

int *array;
int array_index;


void *thread(void * arg)
{
	/* reachable */
	/* reachable */
	array[array_index] = 1;
	return 0;
}


int main()
{
	int tid, sum;
	pthread_t *t;

	t = (pthread_t *)/* reachable */
	                 /* reachable */
	                 malloc(sizeof(pthread_t) * SIGMA);
	array = (int *)malloc(sizeof(int) * SIGMA);

	__VERIFIER_assume(t);
	__VERIFIER_assume(array);

	for (/* invariant:
	     16-tid >= 0
	     tid >= 0
	     */
	     /* invariant:
	     16-tid >= 0
	     tid >= 0
	     */
	     tid=0; tid<SIGMA; tid++) {
		pthread_create(&t[tid], 0, thread, 0);
		array_index++;
	}

	for (/* invariant:
	     16-tid >= 0
	     tid >= 0
	     */
	     /* invariant:
	     16-tid >= 0
	     tid >= 0
	     */
	     tid=0; tid<SIGMA; tid++) {
		pthread_join(t[tid], 0);
	}

	for (/* invariant:
	     16-tid >= 0
	     tid >= 0
	     */
	     /* invariant:
	     16-tid >= 0
	     tid >= 0
	     */
	     tid=sum=0; tid<SIGMA; tid++) {
		sum += array[tid];
	}

	__VERIFIER_assert(sum == SIGMA);  // <-- wrong, different threads might use the same array offset when writing

	/* reachable */
	/* reachable */
	return 0;
}

