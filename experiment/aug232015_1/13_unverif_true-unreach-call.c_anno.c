extern void __VERIFIER_error() __attribute__ ((__noreturn__));

//Symmetry-Aware Predicate Abstraction for Shared-Variable Concurrent Programs (Extended Technical Report). CoRR abs/1102.2330 (2011)

#include <pthread.h>

#define assume(e) __VERIFIER_assume(e)
#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

unsigned int r = 0;
unsigned int s = 0;

void __VERIFIER_atomic_inc_r()
{
  /* reachable */
  assume(r!=-1); //to avoid overflows
  r = r + 1; 
}

void* thr1(void* arg){
  unsigned int l = 0;

  __VERIFIER_atomic_inc_r();
  if(r == 1){
    L3: /* invariant:
        l >= 0
        */
        s = s + 1;
    l = l + 1;
    /* assert not proved */
    assert(s == l);
    goto L3;
  }

  /* reachable */
  return 0;
}

int main(){
  pthread_t t;

  /* reachable */
  while(1){
    /* reachable */
    pthread_create(&t, 0, thr1, 0);
  }
/* UNREACHABLE */
}
