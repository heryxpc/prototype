[0;1;31m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0mextern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int expression) { if (!expression) { ERROR: /* assert not proved */
                                                                   __VERIFIER_error(); }; return; }
int __global_lock;
void __VERIFIER_atomic_begin() { /* reachable */
                                 /* reachable */
                                 /* reachable */
                                 /* reachable */
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


void * P3(void *arg);


void fence();


void isync();


void lwfence();




int __unbuffered_cnt;


int __unbuffered_cnt = 0;


int __unbuffered_p0_EAX;


int __unbuffered_p0_EAX = 0;


int __unbuffered_p2_EAX;


int __unbuffered_p2_EAX = 0;


_Bool __unbuffered_p2_EAX$flush_delayed;


int __unbuffered_p2_EAX$mem_tmp;


_Bool __unbuffered_p2_EAX$r_buff0_thd0;


_Bool __unbuffered_p2_EAX$r_buff0_thd1;


_Bool __unbuffered_p2_EAX$r_buff0_thd2;


_Bool __unbuffered_p2_EAX$r_buff0_thd3;


_Bool __unbuffered_p2_EAX$r_buff0_thd4;


_Bool __unbuffered_p2_EAX$r_buff1_thd0;


_Bool __unbuffered_p2_EAX$r_buff1_thd1;


_Bool __unbuffered_p2_EAX$r_buff1_thd2;


_Bool __unbuffered_p2_EAX$r_buff1_thd3;


_Bool __unbuffered_p2_EAX$r_buff1_thd4;


_Bool __unbuffered_p2_EAX$read_delayed;


int *__unbuffered_p2_EAX$read_delayed_var;


int __unbuffered_p2_EAX$w_buff0;


_Bool __unbuffered_p2_EAX$w_buff0_used;


int __unbuffered_p2_EAX$w_buff1;


_Bool __unbuffered_p2_EAX$w_buff1_used;


_Bool main$tmp_guard0;


_Bool main$tmp_guard1;


int x;


int x = 0;


_Bool x$flush_delayed;


int x$mem_tmp;


_Bool x$r_buff0_thd0;


_Bool x$r_buff0_thd1;


_Bool x$r_buff0_thd2;


_Bool x$r_buff0_thd3;


_Bool x$r_buff0_thd4;


_Bool x$r_buff1_thd0;


_Bool x$r_buff1_thd1;


_Bool x$r_buff1_thd2;


_Bool x$r_buff1_thd3;


_Bool x$r_buff1_thd4;


_Bool x$read_delayed;


int *x$read_delayed_var;


int x$w_buff0;


_Bool x$w_buff0_used;


int x$w_buff1;


_Bool x$w_buff1_used;


int y;


int y = 0;


_Bool weak$$choice0;


_Bool weak$$choice1;


_Bool weak$$choice2;



void * P0(void *arg)
{
  __VERIFIER_atomic_begin();
  __unbuffered_p0_EAX = y;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  x = 1;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  x = x$w_buff0_used && x$r_buff0_thd1 ? x$w_buff0 : (x$w_buff1_used && x$r_buff1_thd1 ? x$w_buff1 : x);
  x$w_buff0_used = x$w_buff0_used && x$r_buff0_thd1 ? FALSE : x$w_buff0_used;
  x$w_buff1_used = x$w_buff0_used && x$r_buff0_thd1 || x$w_buff1_used && x$r_buff1_thd1 ? FALSE : x$w_buff1_used;
  x$r_buff0_thd1 = x$w_buff0_used && x$r_buff0_thd1 ? FALSE : x$r_buff0_thd1;
  x$r_buff1_thd1 = x$w_buff0_used && x$r_buff0_thd1 || x$w_buff1_used && x$r_buff1_thd1 ? FALSE : x$r_buff1_thd1;
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
  x = x$w_buff0_used && x$r_buff0_thd2 ? x$w_buff0 : (x$w_buff1_used && x$r_buff1_thd2 ? x$w_buff1 : x);
  x$w_buff0_used = x$w_buff0_used && x$r_buff0_thd2 ? FALSE : x$w_buff0_used;
  x$w_buff1_used = x$w_buff0_used && x$r_buff0_thd2 || x$w_buff1_used && x$r_buff1_thd2 ? FALSE : x$w_buff1_used;
  x$r_buff0_thd2 = x$w_buff0_used && x$r_buff0_thd2 ? FALSE : x$r_buff0_thd2;
  x$r_buff1_thd2 = x$w_buff0_used && x$r_buff0_thd2 || x$w_buff1_used && x$r_buff1_thd2 ? FALSE : x$r_buff1_thd2;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  __unbuffered_cnt = __unbuffered_cnt + 1;
  __VERIFIER_atomic_end();
  return nondet_0();
}



void * P2(void *arg)
{
  __VERIFIER_atomic_begin();
  weak$$choice0 = nondet_1();
  weak$$choice2 = nondet_1();
  x$flush_delayed = weak$$choice2;
  x$mem_tmp = x;
  weak$$choice1 = nondet_1();
  x = !x$w_buff0_used ? x : (x$w_buff0_used && x$r_buff0_thd3 ? x$w_buff0 : (x$w_buff0_used && !x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? (weak$$choice0 ? x : (weak$$choice1 ? x$w_buff0 : x$w_buff1)) : (x$w_buff0_used && x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? (weak$$choice0 ? x$w_buff1 : x$w_buff0) : (weak$$choice0 ? x$w_buff0 : x))));
  x$w_buff0 = weak$$choice2 ? x$w_buff0 : (!x$w_buff0_used ? x$w_buff0 : (x$w_buff0_used && x$r_buff0_thd3 ? x$w_buff0 : (x$w_buff0_used && !x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? x$w_buff0 : (x$w_buff0_used && x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? x$w_buff0 : x$w_buff0))));
  x$w_buff1 = weak$$choice2 ? x$w_buff1 : (!x$w_buff0_used ? x$w_buff1 : (x$w_buff0_used && x$r_buff0_thd3 ? x$w_buff1 : (x$w_buff0_used && !x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? x$w_buff1 : (x$w_buff0_used && x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? x$w_buff1 : x$w_buff1))));
  x$w_buff0_used = weak$$choice2 ? x$w_buff0_used : (!x$w_buff0_used ? x$w_buff0_used : (x$w_buff0_used && x$r_buff0_thd3 ? FALSE : (x$w_buff0_used && !x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? weak$$choice0 || !weak$$choice1 : (x$w_buff0_used && x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? weak$$choice0 : weak$$choice0))));
  x$w_buff1_used = weak$$choice2 ? x$w_buff1_used : (!x$w_buff0_used ? x$w_buff1_used : (x$w_buff0_used && x$r_buff0_thd3 ? FALSE : (x$w_buff0_used && !x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? weak$$choice0 : (x$w_buff0_used && x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? FALSE : FALSE))));
  x$r_buff0_thd3 = weak$$choice2 ? x$r_buff0_thd3 : (!x$w_buff0_used ? x$r_buff0_thd3 : (x$w_buff0_used && x$r_buff0_thd3 ? FALSE : (x$w_buff0_used && !x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? x$r_buff0_thd3 : (x$w_buff0_used && x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? FALSE : FALSE))));
  x$r_buff1_thd3 = weak$$choice2 ? x$r_buff1_thd3 : (!x$w_buff0_used ? x$r_buff1_thd3 : (x$w_buff0_used && x$r_buff0_thd3 ? FALSE : (x$w_buff0_used && !x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? (weak$$choice0 ? x$r_buff1_thd3 : FALSE) : (x$w_buff0_used && x$r_buff1_thd3 && x$w_buff1_used && !x$r_buff0_thd3 ? FALSE : FALSE))));
  __unbuffered_p2_EAX$read_delayed = TRUE;
  __unbuffered_p2_EAX$read_delayed_var = &x;
  __unbuffered_p2_EAX = x;
  x = x$flush_delayed ? x$mem_tmp : x;
  x$flush_delayed = FALSE;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  y = 1;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  x = x$w_buff0_used && x$r_buff0_thd3 ? x$w_buff0 : (x$w_buff1_used && x$r_buff1_thd3 ? x$w_buff1 : x);
  x$w_buff0_used = x$w_buff0_used && x$r_buff0_thd3 ? FALSE : x$w_buff0_used;
  x$w_buff1_used = x$w_buff0_used && x$r_buff0_thd3 || x$w_buff1_used && x$r_buff1_thd3 ? FALSE : x$w_buff1_used;
  x$r_buff0_thd3 = x$w_buff0_used && x$r_buff0_thd3 ? FALSE : x$r_buff0_thd3;
  x$r_buff1_thd3 = x$w_buff0_used && x$r_buff0_thd3 || x$w_buff1_used && x$r_buff1_thd3 ? FALSE : x$r_buff1_thd3;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  __unbuffered_cnt = __unbuffered_cnt + 1;
  __VERIFIER_atomic_end();
  return nondet_0();
}



void * P3(void *arg)
{
  __VERIFIER_atomic_begin();
  y = 2;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  x = x$w_buff0_used && x$r_buff0_thd4 ? x$w_buff0 : (x$w_buff1_used && x$r_buff1_thd4 ? x$w_buff1 : x);
  x$w_buff0_used = x$w_buff0_used && x$r_buff0_thd4 ? FALSE : x$w_buff0_used;
  x$w_buff1_used = x$w_buff0_used && x$r_buff0_thd4 || x$w_buff1_used && x$r_buff1_thd4 ? FALSE : x$w_buff1_used;
  x$r_buff0_thd4 = x$w_buff0_used && x$r_buff0_thd4 ? FALSE : x$r_buff0_thd4;
  x$r_buff1_thd4 = x$w_buff0_used && x$r_buff0_thd4 || x$w_buff1_used && x$r_buff1_thd4 ? FALSE : x$r_buff1_thd4;
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
  pthread_create(NULL, NULL, P3, NULL);
  __VERIFIER_atomic_begin();
  main$tmp_guard0 = __unbuffered_cnt == 4;
  __VERIFIER_atomic_end();
  __VERIFIER_assume(main$tmp_guard0);
  __VERIFIER_atomic_begin();
  x = x$w_buff0_used && x$r_buff0_thd0 ? x$w_buff0 : (x$w_buff1_used && x$r_buff1_thd0 ? x$w_buff1 : x);
  x$w_buff0_used = x$w_buff0_used && x$r_buff0_thd0 ? FALSE : x$w_buff0_used;
  x$w_buff1_used = x$w_buff0_used && x$r_buff0_thd0 || x$w_buff1_used && x$r_buff1_thd0 ? FALSE : x$w_buff1_used;
  x$r_buff0_thd0 = x$w_buff0_used && x$r_buff0_thd0 ? FALSE : x$r_buff0_thd0;
  x$r_buff1_thd0 = x$w_buff0_used && x$r_buff0_thd0 || x$w_buff1_used && x$r_buff1_thd0 ? FALSE : x$r_buff1_thd0;
  __VERIFIER_atomic_end();
  __VERIFIER_atomic_begin();
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  weak$$choice0 = nondet_1();
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  weak$$choice2 = nondet_1();
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x$flush_delayed = weak$$choice2;
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x$mem_tmp = x;
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x = !x$w_buff0_used || !x$r_buff0_thd0 && !x$w_buff1_used || !x$r_buff0_thd0 && !x$r_buff1_thd0 ? x : (x$w_buff0_used && x$r_buff0_thd0 ? x$w_buff0 : x$w_buff1);
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x$w_buff0 = weak$$choice2 ? x$w_buff0 : (!x$w_buff0_used || !x$r_buff0_thd0 && !x$w_buff1_used || !x$r_buff0_thd0 && !x$r_buff1_thd0 ? x$w_buff0 : (x$w_buff0_used && x$r_buff0_thd0 ? x$w_buff0 : x$w_buff0));
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x$w_buff1 = weak$$choice2 ? x$w_buff1 : (!x$w_buff0_used || !x$r_buff0_thd0 && !x$w_buff1_used || !x$r_buff0_thd0 && !x$r_buff1_thd0 ? x$w_buff1 : (x$w_buff0_used && x$r_buff0_thd0 ? x$w_buff1 : x$w_buff1));
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x$w_buff0_used = weak$$choice2 ? x$w_buff0_used : (!x$w_buff0_used || !x$r_buff0_thd0 && !x$w_buff1_used || !x$r_buff0_thd0 && !x$r_buff1_thd0 ? x$w_buff0_used : (x$w_buff0_used && x$r_buff0_thd0 ? FALSE : x$w_buff0_used));
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x$w_buff1_used = weak$$choice2 ? x$w_buff1_used : (!x$w_buff0_used || !x$r_buff0_thd0 && !x$w_buff1_used || !x$r_buff0_thd0 && !x$r_buff1_thd0 ? x$w_buff1_used : (x$w_buff0_used && x$r_buff0_thd0 ? FALSE : FALSE));
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x$r_buff0_thd0 = weak$$choice2 ? x$r_buff0_thd0 : (!x$w_buff0_used || !x$r_buff0_thd0 && !x$w_buff1_used || !x$r_buff0_thd0 && !x$r_buff1_thd0 ? x$r_buff0_thd0 : (x$w_buff0_used && x$r_buff0_thd0 ? FALSE : x$r_buff0_thd0));
  /* Program was expected to b[0;1;35m[0me safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x$r_buff1_thd0 = weak$$choice2 ? x$r_buff1_thd0 : (!x$w_buff0_used || !x$r_buff0_thd0 && !x$w_buff1_used || !x$r_buff0_thd0 && !x$r_buff1_thd0 ? x$r_buff1_thd0 : (x$w_buff0_used && x$r_buff0_thd0 ? FALSE : FALSE));
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  weak$$choice1 = nondet_1();
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  __unbuffered_p2_EAX = __unbuffered_p2_EAX$read_delayed ? (weak$$choice1 ? *__unbuffered_p2_EAX$read_delayed_var : __unbuffered_p2_EAX) : __unbuffered_p2_EAX;
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  main$tmp_guard1 = !(x == 2 && y == 2 && __unbuffered_p0_EAX == 2 && __unbuffered_p2_EAX == 2);
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x = x$flush_delayed ? x$mem_tmp : x;
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  x$flush_delayed = FALSE;
  __VERIFIER_atomic_end();
  /* Program was expected to be safe for X86, model checker should have said NO.
This likely is a bug in the tool chain. */
  __VERIFIER_assert(main$tmp_guard1);
  /* reachable */
  return 0;
}

