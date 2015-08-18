/*
 *  generated by CSeq [ 0000 / 0000 ]
 * 
 *                      2C9F merger-0.0-2015.07.09
 *                      FB59 parser-0.0-2015.06.26
 *                      AB0B module-0.0-2015.07.16 ]
 *
 *  2015-07-22 17:22:30
 *
 *  params:
 *    -i svcomp2015_unsafe/pthread-wmm/mix056_power.oepc_false-unreach-call.c, --time 750, --rounds 2, 
 *
 *  modules:
 *    4062 workarounds-0.0 ()
 *    5E66 functiontracker-0.0 ()
 *    AE03 preinstrumenter-0.0 (error-label)
 *    8CEB constants-0.0 ()
 *    6EDD spinlock-0.0 ()
 *    9C8E switchconverter-0.0 ()
 *    6A40 dowhileconverter-0.0 ()
 *    B23B conditionextractor-0.0 ()
 *    BB48 varnames-0.0 ()
 *    698C inliner-0.0 ()
 *    1629 unroller-0.0 (unwind)
 *    8667 duplicator-0.0 ()
 *    72E0 condwaitconverter-0.0 ()
 *    454D lazyseq-0.0 (rounds schedule threads deadlock)
 *    2B01 instrumenter-0.0 (backend bitwidth header)
 *    A4A2 feeder-0.0 (backend time llvm)
 *    07D4 cex-0.0 (backend linemap cex exitcode threadnamesmap threadindexes threadindextoname varnamesmap coordstofunctions)
 *
 */
#include <stdio.h>
#include <stdlib.h>
#define THREADS 3
#define ROUNDS 2
#define STOP_VOID(A) return;
#define STOP_NONVOID(A) return 0;
#define IF(T,A,B) if ((__cs_pc[T] > A) | (A >= __cs_pc_cs[T])) goto B;
#ifndef NULL
#define NULL 0
#endif
                                        unsigned __CPROVER_bitvector[1] __cs_active_thread[THREADS + 1] = {1};
                                        unsigned __CPROVER_bitvector[5] __cs_pc[THREADS + 1];
                                        unsigned __CPROVER_bitvector[6] __cs_pc_cs[THREADS + 1];
                                        unsigned int __cs_thread_index;
                                        unsigned __CPROVER_bitvector[5] __cs_thread_lines[] = {15, 21, 12, 25};
                                        void *__cs_safe_malloc(int __cs_size)
                                        {
                                        void *__cs_ptr = malloc(__cs_size);
                                        __CPROVER_assume(__cs_ptr);
                                        		return __cs_ptr;
                                        }
                                        void __cs_init_scalar(void *__cs_var, int __cs_size)
                                        {
                                        if (__cs_size == (sizeof(int)))
                                        *((int *) __cs_var) = nondet_int();
                                        		else
                                        		{
                                        char *__cs_ptr = (char *) __cs_var;
                                        int __cs_j;
                                        		}
                                        }
                                        void __CSEQ_message(char *__cs_message)
                                        {
                                        		;
                                        }
                                        typedef int __cs_t;
                                        void *__cs_threadargs[THREADS + 1];
                                        int __cs_create(__cs_t *__cs_new_thread_id, void *__cs_attr, void *(*__cs_t)(void *), void *__cs_arg, int __cs_threadID)
                                        {
                                        if (__cs_threadID > THREADS)
                                        				return 0;
                                        *__cs_new_thread_id = __cs_threadID;
                                        __cs_active_thread[__cs_threadID] = 1;
                                        __cs_threadargs[__cs_threadID] = __cs_arg;
                                        __CSEQ_message("thread spawned");
                                        return 0;
                                        }
                                        int __cs_join(__cs_t __cs_id, void **__cs_value_ptr)
                                        {
                                        __CPROVER_assume(__cs_pc[__cs_id] == __cs_thread_lines[__cs_id]);
                                        return 0;
                                        }
                                        int __cs_exit(void *__cs_value_ptr)
                                        {
                                        		return 0;
                                        }
                                        typedef int __cs_mutex_t;
                                        int __cs_mutex_init(__cs_mutex_t *__cs_m, int __cs_val)
                                        {
                                        *__cs_m = -1;
                                        return 0;
                                        }
                                        int __cs_mutex_destroy(__cs_mutex_t *__cs_mutex_to_destroy)
                                        {
                                        __CPROVER_assert((*__cs_mutex_to_destroy) != 0, "attempt to destroy an uninitialized mutex");
                                        __CPROVER_assert((*__cs_mutex_to_destroy) != (-2), "attempt to destroy a previously destroyed mutex");
                                        __CPROVER_assert((*__cs_mutex_to_destroy) == (-1), "attempt to destroy a locked mutex");
                                        *__cs_mutex_to_destroy = -2;
                                        __CSEQ_message("lock destroyed");
                                        return 0;
                                        }
                                        int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock)
                                        {
                                        __CPROVER_assert((*__cs_mutex_to_lock) != 0, "attempt to lock an uninitialized mutex");
                                        __CPROVER_assert((*__cs_mutex_to_lock) != (-2), "attempt to lock a destroyed mutex");
                                        __CPROVER_assume((*__cs_mutex_to_lock) == (-1));
                                        *__cs_mutex_to_lock = __cs_thread_index + 1;
                                        __CSEQ_message("lock acquired");
                                        return 0;
                                        }
                                        int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock)
                                        {
                                        __CPROVER_assert((*__cs_mutex_to_unlock) != 0, "attempt to unlock an uninitialized mutex");
                                        __CPROVER_assert((*__cs_mutex_to_unlock) != (-2), "attempt to unlock a destroyed mutex");
                                        __CPROVER_assert((*__cs_mutex_to_unlock) == (__cs_thread_index + 1), "attempt to release a lock held by another thread");
                                        *__cs_mutex_to_unlock = -1;
                                        __CSEQ_message("lock released");
                                        return 0;
                                        }
                                        typedef int __cs_cond_t;
                                        int __cs_cond_init(__cs_cond_t *__cs_cond_to_init, void *__cs_attr)
                                        {
                                        *__cs_cond_to_init = -1;
                                        return 0;
                                        }
                                        int __cs_cond_wait_1(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
                                        {
                                        __CPROVER_assert((*__cs_cond_to_wait_for) != 0, "attempt to use an uninitialized conditional variable");
                                        __CPROVER_assert((*__cs_cond_to_wait_for) != (-2), "attempt to use a destroyed conditional variable");
                                        __cs_mutex_unlock(__cs_m);
                                        }
                                        int __cs_cond_wait_2(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
                                        {
                                        __CPROVER_assume((*__cs_cond_to_wait_for) == 1);
                                        __cs_mutex_lock(__cs_m);
                                        return 0;
                                        }
                                        int __cs_cond_signal(__cs_cond_t *__cs_cond_to_signal)
                                        {
                                        *__cs_cond_to_signal = 1;
                                        __CSEQ_message("conditional variable signal");
                                        return 0;
                                        }
                                        extern void __VERIFIER_error();
                                        int __global_lock;
                                        void __CSEQ_atomic_begin()
                                        {
                                        __CPROVER_assume(__global_lock == 0);
                                        __global_lock = 1;
                                        return;
                                        		;
                                        }
                                        void __CSEQ_atomic_end()
                                        {
                                        __CPROVER_assume(__global_lock == 1);
                                        __global_lock = 0;
                                        return;
                                        		;
                                        }
                                        void *P0_0(void *__cs_param__arg);
                                        void *P1_0(void *__cs_param__arg);
                                        void *P2_0(void *__cs_param__arg);
                                        void fence();
                                        void isync();
                                        void lwfence();
                                        int __unbuffered_cnt;
                                        int __unbuffered_cnt = 0;
                                        int __unbuffered_p2_EAX;
                                        int __unbuffered_p2_EAX = 0;
                                        _Bool main$tmp_guard0;
                                        _Bool main$tmp_guard1;
                                        int x;
                                        int x = 0;
                                        int y;
                                        int y = 0;
                                        int z;
                                        int z = 0;
                                        _Bool z$flush_delayed;
                                        int z$mem_tmp;
                                        _Bool z$r_buff0_thd0;
                                        _Bool z$r_buff0_thd1;
                                        _Bool z$r_buff0_thd2;
                                        _Bool z$r_buff0_thd3;
                                        _Bool z$r_buff1_thd0;
                                        _Bool z$r_buff1_thd1;
                                        _Bool z$r_buff1_thd2;
                                        _Bool z$r_buff1_thd3;
                                        _Bool z$read_delayed;
                                        int *z$read_delayed_var;
                                        int z$w_buff0;
                                        _Bool z$w_buff0_used;
                                        int z$w_buff1;
                                        _Bool z$w_buff1_used;
                                        _Bool weak$$choice0;
                                        _Bool weak$$choice2;
                                        void *P0_0(void *__cs_param_P0_arg)
                                        {
IF(1,0,tP0_0_1)
                                        __CSEQ_atomic_begin();
tP0_0_1: IF(1,1,tP0_0_2)
                                        z$w_buff1 = z$w_buff0;
tP0_0_2: IF(1,2,tP0_0_3)
                                        z$w_buff0 = 1;
tP0_0_3: IF(1,3,tP0_0_4)
                                        z$w_buff1_used = z$w_buff0_used;
tP0_0_4: IF(1,4,tP0_0_5)
                                        z$w_buff0_used = (_Bool) 1;
tP0_0_5: IF(1,5,tP0_0_6)
                                        assert(!(z$w_buff1_used && z$w_buff0_used));
tP0_0_6: IF(1,6,tP0_0_7)
                                        z$r_buff1_thd0 = z$r_buff0_thd0;
tP0_0_7: IF(1,7,tP0_0_8)
                                        z$r_buff1_thd1 = z$r_buff0_thd1;
tP0_0_8: IF(1,8,tP0_0_9)
                                        z$r_buff1_thd2 = z$r_buff0_thd2;
tP0_0_9: IF(1,9,tP0_0_10)
                                        z$r_buff1_thd3 = z$r_buff0_thd3;
tP0_0_10: IF(1,10,tP0_0_11)
                                        z$r_buff0_thd1 = (_Bool) 1;
                                        __CSEQ_atomic_end();
tP0_0_11: IF(1,11,tP0_0_12)
                                        __CSEQ_atomic_begin();
tP0_0_12: IF(1,12,tP0_0_13)
                                        x = 1;
                                        __CSEQ_atomic_end();
tP0_0_13: IF(1,13,tP0_0_14)
                                        __CSEQ_atomic_begin();
tP0_0_14: IF(1,14,tP0_0_15)
                                        z = z$w_buff0_used && z$r_buff0_thd1 ? z$w_buff0 : z$w_buff1_used && z$r_buff1_thd1 ? z$w_buff1 : z;
tP0_0_15: IF(1,15,tP0_0_16)
                                        z$w_buff0_used = z$w_buff0_used && z$r_buff0_thd1 ? (_Bool) 0 : z$w_buff0_used;
tP0_0_16: IF(1,16,tP0_0_17)
                                        z$w_buff1_used = (z$w_buff0_used && z$r_buff0_thd1) || (z$w_buff1_used && z$r_buff1_thd1) ? (_Bool) 0 : z$w_buff1_used;
tP0_0_17: IF(1,17,tP0_0_18)
                                        z$r_buff0_thd1 = z$w_buff0_used && z$r_buff0_thd1 ? (_Bool) 0 : z$r_buff0_thd1;
tP0_0_18: IF(1,18,tP0_0_19)
                                        z$r_buff1_thd1 = (z$w_buff0_used && z$r_buff0_thd1) || (z$w_buff1_used && z$r_buff1_thd1) ? (_Bool) 0 : z$r_buff1_thd1;
                                        __CSEQ_atomic_end();
tP0_0_19: IF(1,19,tP0_0_20)
                                        __CSEQ_atomic_begin();
tP0_0_20: IF(1,20,tP0_0_21)
                                        __unbuffered_cnt = __unbuffered_cnt + 1;
                                        __CSEQ_atomic_end();
                                        goto __exit_P0;
                                        		;
                                        __exit_P0:
                                        		__CPROVER_assume(__cs_pc_cs[1] >= 21);
                                        		;
                                        		;
tP0_0_21: 
                                        STOP_NONVOID(21);
                                        }
                                        void *P1_0(void *__cs_param_P1_arg)
                                        {
IF(2,0,tP1_0_1)
                                        __CSEQ_atomic_begin();
tP1_0_1: IF(2,1,tP1_0_2)
                                        x = 2;
                                        __CSEQ_atomic_end();
tP1_0_2: IF(2,2,tP1_0_3)
                                        __CSEQ_atomic_begin();
tP1_0_3: IF(2,3,tP1_0_4)
                                        y = 1;
                                        __CSEQ_atomic_end();
tP1_0_4: IF(2,4,tP1_0_5)
                                        __CSEQ_atomic_begin();
tP1_0_5: IF(2,5,tP1_0_6)
                                        z = z$w_buff0_used && z$r_buff0_thd2 ? z$w_buff0 : z$w_buff1_used && z$r_buff1_thd2 ? z$w_buff1 : z;
tP1_0_6: IF(2,6,tP1_0_7)
                                        z$w_buff0_used = z$w_buff0_used && z$r_buff0_thd2 ? (_Bool) 0 : z$w_buff0_used;
tP1_0_7: IF(2,7,tP1_0_8)
                                        z$w_buff1_used = (z$w_buff0_used && z$r_buff0_thd2) || (z$w_buff1_used && z$r_buff1_thd2) ? (_Bool) 0 : z$w_buff1_used;
tP1_0_8: IF(2,8,tP1_0_9)
                                        z$r_buff0_thd2 = z$w_buff0_used && z$r_buff0_thd2 ? (_Bool) 0 : z$r_buff0_thd2;
tP1_0_9: IF(2,9,tP1_0_10)
                                        z$r_buff1_thd2 = (z$w_buff0_used && z$r_buff0_thd2) || (z$w_buff1_used && z$r_buff1_thd2) ? (_Bool) 0 : z$r_buff1_thd2;
                                        __CSEQ_atomic_end();
tP1_0_10: IF(2,10,tP1_0_11)
                                        __CSEQ_atomic_begin();
tP1_0_11: IF(2,11,tP1_0_12)
                                        __unbuffered_cnt = __unbuffered_cnt + 1;
                                        __CSEQ_atomic_end();
                                        goto __exit_P1;
                                        		;
                                        __exit_P1:
                                        		__CPROVER_assume(__cs_pc_cs[2] >= 12);
                                        		;
                                        		;
tP1_0_12: 
                                        STOP_NONVOID(12);
                                        }
                                        void *P2_0(void *__cs_param_P2_arg)
                                        {
IF(3,0,tP2_0_1)
                                        __CSEQ_atomic_begin();
tP2_0_1: IF(3,1,tP2_0_2)
                                        y = 2;
                                        __CSEQ_atomic_end();
tP2_0_2: IF(3,2,tP2_0_3)
                                        __CSEQ_atomic_begin();
tP2_0_3: IF(3,3,tP2_0_4)
                                        weak$$choice0 = nondet_1();
tP2_0_4: IF(3,4,tP2_0_5)
                                        weak$$choice2 = nondet_1();
tP2_0_5: IF(3,5,tP2_0_6)
                                        z$flush_delayed = weak$$choice2;
tP2_0_6: IF(3,6,tP2_0_7)
                                        z$mem_tmp = z;
tP2_0_7: IF(3,7,tP2_0_8)
                                        z = ((!z$w_buff0_used) || ((!z$r_buff0_thd3) && (!z$w_buff1_used))) || ((!z$r_buff0_thd3) && (!z$r_buff1_thd3)) ? z : z$w_buff0_used && z$r_buff0_thd3 ? z$w_buff0 : z$w_buff1;
tP2_0_8: IF(3,8,tP2_0_9)
                                        z$w_buff0 = weak$$choice2 ? z$w_buff0 : ((!z$w_buff0_used) || ((!z$r_buff0_thd3) && (!z$w_buff1_used))) || ((!z$r_buff0_thd3) && (!z$r_buff1_thd3)) ? z$w_buff0 : z$w_buff0_used && z$r_buff0_thd3 ? z$w_buff0 : z$w_buff0;
tP2_0_9: IF(3,9,tP2_0_10)
                                        z$w_buff1 = weak$$choice2 ? z$w_buff1 : ((!z$w_buff0_used) || ((!z$r_buff0_thd3) && (!z$w_buff1_used))) || ((!z$r_buff0_thd3) && (!z$r_buff1_thd3)) ? z$w_buff1 : z$w_buff0_used && z$r_buff0_thd3 ? z$w_buff1 : z$w_buff1;
tP2_0_10: IF(3,10,tP2_0_11)
                                        z$w_buff0_used = weak$$choice2 ? z$w_buff0_used : ((!z$w_buff0_used) || ((!z$r_buff0_thd3) && (!z$w_buff1_used))) || ((!z$r_buff0_thd3) && (!z$r_buff1_thd3)) ? z$w_buff0_used : z$w_buff0_used && z$r_buff0_thd3 ? (_Bool) 0 : z$w_buff0_used;
tP2_0_11: IF(3,11,tP2_0_12)
                                        z$w_buff1_used = weak$$choice2 ? z$w_buff1_used : ((!z$w_buff0_used) || ((!z$r_buff0_thd3) && (!z$w_buff1_used))) || ((!z$r_buff0_thd3) && (!z$r_buff1_thd3)) ? z$w_buff1_used : z$w_buff0_used && z$r_buff0_thd3 ? (_Bool) 0 : (_Bool) 0;
tP2_0_12: IF(3,12,tP2_0_13)
                                        z$r_buff0_thd3 = weak$$choice2 ? z$r_buff0_thd3 : ((!z$w_buff0_used) || ((!z$r_buff0_thd3) && (!z$w_buff1_used))) || ((!z$r_buff0_thd3) && (!z$r_buff1_thd3)) ? z$r_buff0_thd3 : z$w_buff0_used && z$r_buff0_thd3 ? (_Bool) 0 : z$r_buff0_thd3;
tP2_0_13: IF(3,13,tP2_0_14)
                                        z$r_buff1_thd3 = weak$$choice2 ? z$r_buff1_thd3 : ((!z$w_buff0_used) || ((!z$r_buff0_thd3) && (!z$w_buff1_used))) || ((!z$r_buff0_thd3) && (!z$r_buff1_thd3)) ? z$r_buff1_thd3 : z$w_buff0_used && z$r_buff0_thd3 ? (_Bool) 0 : (_Bool) 0;
tP2_0_14: IF(3,14,tP2_0_15)
                                        __unbuffered_p2_EAX = z;
tP2_0_15: IF(3,15,tP2_0_16)
                                        z = z$flush_delayed ? z$mem_tmp : z;
tP2_0_16: IF(3,16,tP2_0_17)
                                        z$flush_delayed = (_Bool) 0;
                                        __CSEQ_atomic_end();
tP2_0_17: IF(3,17,tP2_0_18)
                                        __CSEQ_atomic_begin();
tP2_0_18: IF(3,18,tP2_0_19)
                                        z = z$w_buff0_used && z$r_buff0_thd3 ? z$w_buff0 : z$w_buff1_used && z$r_buff1_thd3 ? z$w_buff1 : z;
tP2_0_19: IF(3,19,tP2_0_20)
                                        z$w_buff0_used = z$w_buff0_used && z$r_buff0_thd3 ? (_Bool) 0 : z$w_buff0_used;
tP2_0_20: IF(3,20,tP2_0_21)
                                        z$w_buff1_used = (z$w_buff0_used && z$r_buff0_thd3) || (z$w_buff1_used && z$r_buff1_thd3) ? (_Bool) 0 : z$w_buff1_used;
tP2_0_21: IF(3,21,tP2_0_22)
                                        z$r_buff0_thd3 = z$w_buff0_used && z$r_buff0_thd3 ? (_Bool) 0 : z$r_buff0_thd3;
tP2_0_22: IF(3,22,tP2_0_23)
                                        z$r_buff1_thd3 = (z$w_buff0_used && z$r_buff0_thd3) || (z$w_buff1_used && z$r_buff1_thd3) ? (_Bool) 0 : z$r_buff1_thd3;
                                        __CSEQ_atomic_end();
tP2_0_23: IF(3,23,tP2_0_24)
                                        __CSEQ_atomic_begin();
tP2_0_24: IF(3,24,tP2_0_25)
                                        __unbuffered_cnt = __unbuffered_cnt + 1;
                                        __CSEQ_atomic_end();
                                        goto __exit_P2;
                                        		;
                                        __exit_P2:
                                        		__CPROVER_assume(__cs_pc_cs[3] >= 25);
                                        		;
                                        		;
tP2_0_25: 
                                        STOP_NONVOID(25);
                                        }
                                        int main_thread(void)
                                        {
                                        		;
IF(0,0,tmain_1)
                                        __cs_create(0, 0, P0_0, 0, 1);
tmain_1: IF(0,1,tmain_2)
                                        __cs_create(0, 0, P1_0, 0, 2);
tmain_2: IF(0,2,tmain_3)
                                        __cs_create(0, 0, P2_0, 0, 3);
tmain_3: IF(0,3,tmain_4)
                                        __CSEQ_atomic_begin();
tmain_4: IF(0,4,tmain_5)
                                        main$tmp_guard0 = __unbuffered_cnt == 3;
                                        __CSEQ_atomic_end();
tmain_5: IF(0,5,tmain_6)
                                        __CPROVER_assume(main$tmp_guard0);
tmain_6: IF(0,6,tmain_7)
                                        __CSEQ_atomic_begin();
tmain_7: IF(0,7,tmain_8)
                                        z = z$w_buff0_used && z$r_buff0_thd0 ? z$w_buff0 : z$w_buff1_used && z$r_buff1_thd0 ? z$w_buff1 : z;
tmain_8: IF(0,8,tmain_9)
                                        z$w_buff0_used = z$w_buff0_used && z$r_buff0_thd0 ? (_Bool) 0 : z$w_buff0_used;
tmain_9: IF(0,9,tmain_10)
                                        z$w_buff1_used = (z$w_buff0_used && z$r_buff0_thd0) || (z$w_buff1_used && z$r_buff1_thd0) ? (_Bool) 0 : z$w_buff1_used;
tmain_10: IF(0,10,tmain_11)
                                        z$r_buff0_thd0 = z$w_buff0_used && z$r_buff0_thd0 ? (_Bool) 0 : z$r_buff0_thd0;
tmain_11: IF(0,11,tmain_12)
                                        z$r_buff1_thd0 = (z$w_buff0_used && z$r_buff0_thd0) || (z$w_buff1_used && z$r_buff1_thd0) ? (_Bool) 0 : z$r_buff1_thd0;
                                        __CSEQ_atomic_end();
tmain_12: IF(0,12,tmain_13)
                                        __CSEQ_atomic_begin();
tmain_13: IF(0,13,tmain_14)
                                        main$tmp_guard1 = !(((x == 2) && (y == 2)) && (__unbuffered_p2_EAX == 0));
                                        __CSEQ_atomic_end();
tmain_14: IF(0,14,tmain_15)
                                        assert(main$tmp_guard1);
                                        goto __exit_main;
                                        		;
                                        __exit_main:
                                        		__CPROVER_assume(__cs_pc_cs[0] >= 15);
                                        		;
                                        		;
tmain_15: 
                                        STOP_NONVOID(15);
                                        }
                                        int main(void)
                                        {
                                        unsigned __CPROVER_bitvector[4] __cs_tmp_t0_r0 = (unsigned __CPROVER_bitvector[4])nondet_uint();
                                        unsigned __CPROVER_bitvector[5] __cs_tmp_t1_r0 = (unsigned __CPROVER_bitvector[5])nondet_uint();
                                        unsigned __CPROVER_bitvector[4] __cs_tmp_t2_r0 = (unsigned __CPROVER_bitvector[4])nondet_uint();
                                        unsigned __CPROVER_bitvector[5] __cs_tmp_t3_r0 = (unsigned __CPROVER_bitvector[5])nondet_uint();
                                        unsigned __CPROVER_bitvector[4] __cs_tmp_t0_r1 = (unsigned __CPROVER_bitvector[4])nondet_uint();
                                        unsigned __CPROVER_bitvector[5] __cs_tmp_t1_r1 = (unsigned __CPROVER_bitvector[5])nondet_uint();
                                        unsigned __CPROVER_bitvector[4] __cs_tmp_t2_r1 = (unsigned __CPROVER_bitvector[4])nondet_uint();
                                        unsigned __CPROVER_bitvector[5] __cs_tmp_t3_r1 = (unsigned __CPROVER_bitvector[5])nondet_uint();
                                        unsigned __CPROVER_bitvector[4] __cs_tmp_t0_r2 = (unsigned __CPROVER_bitvector[4])nondet_uint();
/* round  0 */
                                        __CPROVER_assume(__cs_tmp_t0_r0 > 0);
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r0;
                                        __CPROVER_assume(__cs_pc_cs[0] > 0);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 15);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r0;
                                        __CPROVER_assume(__cs_pc_cs[1] <= 21);
                                        P0_0(__cs_threadargs[1]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
                                        if (__cs_active_thread[2] == 1)
                                        		{
                                        __cs_thread_index = 2;
                                        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r0;
                                        __CPROVER_assume(__cs_pc_cs[2] <= 12);
                                        P1_0(__cs_threadargs[2]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
                                        if (__cs_active_thread[3] == 1)
                                        		{
                                        __cs_thread_index = 3;
                                        __cs_pc_cs[3] = __cs_pc[3] + __cs_tmp_t3_r0;
                                        __CPROVER_assume(__cs_pc_cs[3] <= 25);
                                        P2_0(__cs_threadargs[3]);
                                        __cs_pc[3] = __cs_pc_cs[3];
                                        		}
/* round  1 */
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        				__cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 15);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        		}
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r1;
                                        __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                        __CPROVER_assume(__cs_pc_cs[1] <= 21);
                                        P0_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
                                        if (__cs_active_thread[2] == 1)
                                        		{
                                        __cs_thread_index = 2;
                                        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r1;
                                        __CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                        __CPROVER_assume(__cs_pc_cs[2] <= 12);
                                        P1_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
                                        if (__cs_active_thread[3] == 1)
                                        		{
                                        __cs_thread_index = 3;
                                        __cs_pc_cs[3] = __cs_pc[3] + __cs_tmp_t3_r1;
                                        __CPROVER_assume(__cs_pc_cs[3] >= __cs_pc[3]);
                                        __CPROVER_assume(__cs_pc_cs[3] <= 25);
                                        P2_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[3] = __cs_pc_cs[3];
                                        		}
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 15);
                                        main_thread();
                                        		}
                                        return 0;
                                        }
                                        
