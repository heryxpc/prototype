[0;1;31m[0m[0;1;31m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0mextern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int expression) { if (!expression) { ERROR: /* assert not proved */
                                                                   /* assert not proved */
                                                                   __VERIFIER_error(); }; return; }
int __global_lock;
void __VERIFIER_atomic_begin() { /* reachable */
                                 /* reachable */
                                 /* reachable */
                                 /* reachable */
                                 /* reachable */
                                 /* reachable */
                                 __VERIFIER_assume(__global_lock==0); __global_lock=1; return; }
void __VERIFIER_atomic_end() { __VERIFIER_assume(__global_lock==1); __global_lock=0; return; }

#include <assert.h>
#include <pthread.h>
#ifndef TRUE
#define TRUE (_Bool)1
#endif
#ifndef FALSE
#define FALSE (_Bool)0
#endif
#ifndef NULL
#define NULL ((void*)0)
#endif
#ifndef FENCE
#define FENCE(x) ((void)0)
#endif
#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) (x==y)
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) (x!=y)
#endif



void * P0(void *arg);


void * P1(void *arg);


void * P2(void *arg);


void fence();


void isync();


void lwfence();




int __unbuffered_cnt;


int __unbuffered_cnt = 0;


int __unbuffered_p2_EAX;


int __unbuffered_p2_EAX = 0;


int __unbuffered_p2_EBX;


int __unbuffered_p2_EBX = 0;


int a;


int a = 0;


_Bool main$tmp_guard0;


_Bool main$tmp_guard1;


int x;


int x = 0;


int y;


int y = 0;


_Bool y$flush_delayed;


int y$mem_tmp;


_Bool y$r_buff0_thd0;


_Bool y$r_buff0_thd1;


_Bool y$r_buff0_thd2;


_Bool y$r_buff0_thd3;


_Bool y$r_buff1_thd0;


_Bool y$r_buff1_thd1;


_Bool y$r_buff1_thd2;


_Bool y$r_buff1_thd3;


_Bool y$read_delayed;


int *y$read_delayed_var;


int y$w_buff0;


_Bool y$w_buff0_used;


int y$w_buff1;


_Bool y$w_buff1_used;


int z;


int z = 0;


_Bool weak$$choice0;


_Bool weak$$choice2;



void * P0(void *arg)
{
  __VERIFIER_atomic_begin();
  a = 1;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  x = 1;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  __unbuffered_cnt = __unbuffered_cnt + 1;
  __VERIFIER_atomic_end();
  return nondet_0();
}



void * P1(void *arg)
{
  __VERIFIER_atomic_begin();
  x = 2;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  y = 1;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  y = y$w_buff0_used && y$r_buff0_thd2 ? y$w_buff0 : (y$w_buff1_used && y$r_buff1_thd2 ? y$w_buff1 : y);
  y$w_buff0_used = y$w_buff0_used && y$r_buff0_thd2 ? FALSE : y$w_buff0_used;
  y$w_buff1_used = y$w_buff0_used && y$r_buff0_thd2 || y$w_buff1_used && y$r_buff1_thd2 ? FALSE : y$w_buff1_used;
  y$r_buff0_thd2 = y$w_buff0_used && y$r_buff0_thd2 ? FALSE : y$r_buff0_thd2;
  y$r_buff1_thd2 = y$w_buff0_used && y$r_buff0_thd2 || y$w_buff1_used && y$r_buff1_thd2 ? FALSE : y$r_buff1_thd2;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  __unbuffered_cnt = __unbuffered_cnt + 1;
  __VERIFIER_atomic_end();
  return nondet_0();
}



void * P2(void *arg)
{
  __VERIFIER_atomic_begin();
  y$w_buff1 = y$w_buff0;
  y$w_buff0 = 2;
  y$w_buff1_used = y$w_buff0_used;
  y$w_buff0_used = TRUE;
  __VERIFIER_assert(!(y$w_buff1_used && y$w_buff0_used));
  y$r_buff1_thd0 = y$r_buff0_thd0;
  y$r_buff1_thd1 = y$r_buff0_thd1;
  y$r_buff1_thd2 = y$r_buff0_thd2;
  y$r_buff1_thd3 = y$r_buff0_thd3;
  y$r_buff0_thd3 = TRUE;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  z = 1;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  __unbuffered_p2_EAX = z;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  __unbuffered_p2_EBX = a;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  y = y$w_buff0_used && y$r_buff0_thd3 ? y$w_buff0 : (y$w_buff1_used && y$r_buff1_thd3 ? y$w_buff1 : y);
  y$w_buff0_used = y$w_buff0_used && y$r_buff0_thd3 ? FALSE : y$w_buff0_used;
  y$w_buff1_used = y$w_buff0_used && y$r_buff0_thd3 || y$w_buff1_used && y$r_buff1_thd3 ? FALSE : y$w_buff1_used;
  y$r_buff0_thd3 = y$w_buff0_used && y$r_buff0_thd3 ? FALSE : y$r_buff0_thd3;
  y$r_buff1_thd3 = y$w_buff0_used && y$r_buff0_thd3 || y$w_buff1_used && y$r_buff1_thd3 ? FALSE : y$r_buff1_thd3;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  __unbuffered_cnt = __unbuffered_cnt + 1;
  __VERIFIER_atomic_end();
  return nondet_0();
}



void fence()
{
  
}



void isync()
{
  
}



void lwfence()
{
  
}



int main()
{
  pthread_create(NULL, NULL, P0, NULL);
  pthread_create(NULL, NULL, P1, NULL);
  pthread_create(NULL, NULL, P2, NULL);
  __VERIFIER_atomic_begin();
  main$tmp_guard0 = __unbuffered_cnt == 3;
  __VERIFIER_atomic_end();
  __VERIFIER_assume(main$tmp_guard0);
  __VERIFIER_atomic_begin();
  y = y$w_buff0_used && y$r_buff0_thd0 ? y$w_buff0 : (y$w_buff1_used && y$r_buff1_thd0 ? y$w_buff1 : y);
  y$w_buff0_used = y$w_buff0_used && y$r_buff0_thd0 ? FALSE : y$w_buff0_used;
  y$w_buff1_used = y$w_buff0_used && y$r_buff0_thd0 || y$w_buff1_used && y$r_buff1_thd0 ? FALSE : y$w_buff1_used;
  y$r_buff0_thd0 = y$w_buff0_used && y$r_buff0_thd0 ? FALSE : y$r_buff0_thd0;
  y$r_buff1_thd0 = y$w_buff0_used && y$r_buff0_thd0 || y$w_buff1_used && y$r_buff1_thd0 ? FALSE : y$r_buff1_thd0;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  /* Program proven to be relaxed for X86, model checker says YES. */
  weak$$choice0 = nondet_1();
  /* Program proven to be relaxed for X86, model checker says YES. */
  weak$$choice2 = nondet_1();
  /* Program proven to be relaxed for X86, model checker says YES. */
  y$flush_delayed = weak$$choice2;
  /* Program proven to be relaxed for X86, model checker says YES. */
  y$mem_tmp = y;
  /* Program proven to be relaxed for X86, model checker says YES. */
  y = !y$w_buff0_used || !y$r_buff0_thd0 && !y$w_buff1_used || !y$r_buff0_thd0 && !y$r_buff1_thd0 ? y : (y$w_buff0_used && y$r_buff0_thd0 ? y$w_buff0 : y$w_buff1);
  /* Program proven to be relaxed for X86, model checker says YES. */
  y$w_buff0 = weak$$choice2 ? y$w_buff0 : (!y$w_buff0_used || !y$r_buff0_thd0 && !y$w_buff1_used || !y$r_buff0_thd0 && !y$r_buff1_thd0 ? y$w_buff0 : (y$w_buff0_used && y$r_buff0_thd0 ? y$w_buff0 : y$w_buff0));
  /* Program proven to be relaxed for X86, model checker says YES. */
  y$w_buff1 = weak$$choice2 ? y$w_buff1 : (!y$w_buff0_used || !y$r_buff0_thd0 && !y$w_buff1_used || !y$r_buff0_thd0 && !y$r_buff1_thd0 ? y$w_buff1 : (y$w_buff0_used && y$r_buff0_thd0 ? y$w_buff1 : y$w_buff1));
  /* Program proven to be relaxed for X86, model checker says YES. */
  y$w_buff0_used = weak$$choice2 ? y$w_buff0_used : (!y$w_buff0_used || !y$r_buff0_thd0 && !y$w_buff1_used || !y$r_buff0_thd0 && !y$r_buff1_thd0 ? y$w_buff0_used : (y$w_buff0_used && y$r_buff0_thd0 ? FALSE : y$w_buff0_used));
  /* Program proven to be relaxed for X86, model checker says YES. */
  y$w_buff1_used = weak$$choice2 ? y$w_buff1_used : (!y$w_buff0_used || !y$r_buff0_thd0 && !y$w_buff1_used || !y$r_buff0_thd0 && !y$r_buff1_thd0 ? y$w_buff1_used : (y$w_buff0_used && y$r_buff0_thd0 ? FALSE : FALSE));
  /* Program proven to be relaxed for X86, model checker says YES. */
  y$r_buff0_thd0 = weak$$choice2 ? y$r_buff0_thd0 : (!y$w_buff0_used || !y$r_buff0_thd0 && !y$w_buff1_used || !y$r_buff0_thd0 && !y$r_buff1_thd0 ? y$r_buff0_thd0 : (y$w_buff0_used && y$r_buff0_thd0 ? FALSE : y$r_buff0_thd0));
  /* Program proven to be relaxed for X86, model checker says YES. */
  y$r_buff1_thd0 = weak$$choice2 ? y$r_buff1_thd0 : (!y$w_buff0_used || !y$r_buff0_thd0 && !y$w_buff1_used || !y$r_buff0_thd0 && !y$r_buff1_thd0 ? y$r_buff1_thd0 : (y$w_buff0_used && y$r_buff0_thd0 ? FALSE : FALSE));
  /* Program proven to be relaxed for X86, model checker says YES. */
  main$tmp_guard1 = !(x == 2 && y == 2 && __unbuffered_p2_EAX == 1 && __unbuffered_p2_EBX == 0);
  /* Program proven to be relaxed for X86, model checker says YES. */
  y = y$flush_delayed ? y$mem_tmp : y;
  /* Program proven to be relaxed for X86, model checker says YES. */
  y$flush_delayed = FALSE;
  __VERIFIER_atomic_end();
  [0;1;35m[0m/* Program proven to be relaxed for X86, model checker says YES. */
  __VERIFIER_assert(main$tmp_guard1);
  /* reachable */
  return 0;
}

