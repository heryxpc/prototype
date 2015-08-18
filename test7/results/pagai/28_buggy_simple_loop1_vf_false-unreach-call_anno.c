[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;31m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0mextern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>

#define assert_nl(e) { if(!(e)) { goto ERROR; } }
#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

void* thr1(void* arg){
  unsigned int x, y, z;
  int i, j, k;
  for(/* reachable */
      /* invariant:
      i >= 0
      */
      i=0; i<x; i++) {
    for(/* invariant:
        -1-i+j >= 0
        i >= 0
        -1+x-i >= 0
        */
        j=i+1; j<y; j++) {
      for(/* invariant:
          -1-i+j >= 0
          i >= 0
          k-j >= 0
          -1+x-i >= 0
          -1+y-j >= 0
          */
          k = j; k < z; k++) {
	assert_nl(k > i);
      }
    }
  }

  /* assert not proved */
  assert(i == x && (/* uncomment to make error go away: x == 0 ||*/ j == y || y <= x+1) && (x == 0 || y <= x+1 || k == z || z < y)) ;

  /* reachable */
  return 0;
}

int main()
{
  pthread_t t;

  /* reachable */
  while(1)
  {
	  /* reachable */
	  pthread_create(&t, 0, thr1, 0);
  }
/* UNREACHABLE */
}

