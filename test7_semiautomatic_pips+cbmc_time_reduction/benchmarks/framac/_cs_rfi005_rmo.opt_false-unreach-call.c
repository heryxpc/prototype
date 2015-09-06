/*
 *  generated by CSeq [ 0000 / 0000 ]
 * 
 *                      2C9F merger-0.0-2015.07.09
 *                      FB59 parser-0.0-2015.06.26
 *                      AB0B module-0.0-2015.07.16 ]
 *
 *  2015-07-22 17:25:55
 *
 *  params:
 *    -i svcomp2015_unsafe/pthread-wmm/rfi005_rmo.opt_false-unreach-call.c, --time 750, --rounds 2, 
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
#define THREADS 2
#define ROUNDS 2
#define STOP_VOID(A) return;
#define STOP_NONVOID(A) return 0;
#define IF(T,A,B) if ((__cs_pc[T] > A) | (A >= __cs_pc_cs[T])) goto B;
#ifndef NULL
#define NULL 0
#endif
                                        unsigned __CPROVER_bitvector[1] __cs_active_thread[THREADS + 1] = {1};
                                        unsigned __CPROVER_bitvector[6] __cs_pc[THREADS + 1];
                                        unsigned __CPROVER_bitvector[7] __cs_pc_cs[THREADS + 1];
                                        unsigned int __cs_thread_index;
                                        unsigned __CPROVER_bitvector[6] __cs_thread_lines[] = {27, 21, 45};
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
                                        void fence();
                                        void isync();
                                        void lwfence();
                                        int __unbuffered_cnt;
                                        int __unbuffered_cnt = 0;
                                        int __unbuffered_p0_EAX;
                                        int __unbuffered_p0_EAX = 0;
                                        int __unbuffered_p1_EAX;
                                        int __unbuffered_p1_EAX = 0;
                                        int __unbuffered_p1_EBX;
                                        int __unbuffered_p1_EBX = 0;
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
                                        _Bool y$r_buff1_thd0;
                                        _Bool y$r_buff1_thd1;
                                        _Bool y$r_buff1_thd2;
                                        _Bool y$read_delayed;
                                        int *y$read_delayed_var;
                                        int y$w_buff0;
                                        _Bool y$w_buff0_used;
                                        int y$w_buff1;
                                        _Bool y$w_buff1_used;
                                        _Bool weak$$choice0;
                                        _Bool weak$$choice2;
                                        void *P0_0(void *__cs_param_P0_arg)
                                        {
IF(1,0,tP0_0_1)
                                        __CSEQ_atomic_begin();
tP0_0_1: IF(1,1,tP0_0_2)
                                        x = 1;
                                        __CSEQ_atomic_end();
tP0_0_2: IF(1,2,tP0_0_3)
                                        __CSEQ_atomic_begin();
                                        __CSEQ_atomic_end();
tP0_0_3: IF(1,3,tP0_0_4)
                                        __CSEQ_atomic_begin();
tP0_0_4: IF(1,4,tP0_0_5)
                                        weak$$choice0 = nondet_0();
tP0_0_5: IF(1,5,tP0_0_6)
                                        weak$$choice2 = nondet_0();
tP0_0_6: IF(1,6,tP0_0_7)
                                        y$flush_delayed = weak$$choice2;
tP0_0_7: IF(1,7,tP0_0_8)
                                        y$mem_tmp = y;
tP0_0_8: IF(1,8,tP0_0_9)
                                        y = ((!y$w_buff0_used) || ((!y$r_buff0_thd1) && (!y$w_buff1_used))) || ((!y$r_buff0_thd1) && (!y$r_buff1_thd1)) ? y : y$w_buff0_used && y$r_buff0_thd1 ? y$w_buff0 : y$w_buff1;
tP0_0_9: IF(1,9,tP0_0_10)
                                        y$w_buff0 = weak$$choice2 ? y$w_buff0 : ((!y$w_buff0_used) || ((!y$r_buff0_thd1) && (!y$w_buff1_used))) || ((!y$r_buff0_thd1) && (!y$r_buff1_thd1)) ? y$w_buff0 : y$w_buff0_used && y$r_buff0_thd1 ? y$w_buff0 : y$w_buff0;
tP0_0_10: IF(1,10,tP0_0_11)
                                        y$w_buff1 = weak$$choice2 ? y$w_buff1 : ((!y$w_buff0_used) || ((!y$r_buff0_thd1) && (!y$w_buff1_used))) || ((!y$r_buff0_thd1) && (!y$r_buff1_thd1)) ? y$w_buff1 : y$w_buff0_used && y$r_buff0_thd1 ? y$w_buff1 : y$w_buff1;
tP0_0_11: IF(1,11,tP0_0_12)
                                        y$w_buff0_used = weak$$choice2 ? y$w_buff0_used : ((!y$w_buff0_used) || ((!y$r_buff0_thd1) && (!y$w_buff1_used))) || ((!y$r_buff0_thd1) && (!y$r_buff1_thd1)) ? y$w_buff0_used : y$w_buff0_used && y$r_buff0_thd1 ? (_Bool) 0 : y$w_buff0_used;
tP0_0_12: IF(1,12,tP0_0_13)
                                        y$w_buff1_used = weak$$choice2 ? y$w_buff1_used : ((!y$w_buff0_used) || ((!y$r_buff0_thd1) && (!y$w_buff1_used))) || ((!y$r_buff0_thd1) && (!y$r_buff1_thd1)) ? y$w_buff1_used : y$w_buff0_used && y$r_buff0_thd1 ? (_Bool) 0 : (_Bool) 0;
tP0_0_13: IF(1,13,tP0_0_14)
                                        y$r_buff0_thd1 = weak$$choice2 ? y$r_buff0_thd1 : ((!y$w_buff0_used) || ((!y$r_buff0_thd1) && (!y$w_buff1_used))) || ((!y$r_buff0_thd1) && (!y$r_buff1_thd1)) ? y$r_buff0_thd1 : y$w_buff0_used && y$r_buff0_thd1 ? (_Bool) 0 : y$r_buff0_thd1;
tP0_0_14: IF(1,14,tP0_0_15)
                                        y$r_buff1_thd1 = weak$$choice2 ? y$r_buff1_thd1 : ((!y$w_buff0_used) || ((!y$r_buff0_thd1) && (!y$w_buff1_used))) || ((!y$r_buff0_thd1) && (!y$r_buff1_thd1)) ? y$r_buff1_thd1 : y$w_buff0_used && y$r_buff0_thd1 ? (_Bool) 0 : (_Bool) 0;
tP0_0_15: IF(1,15,tP0_0_16)
                                        __unbuffered_p0_EAX = y;
tP0_0_16: IF(1,16,tP0_0_17)
                                        y = y$flush_delayed ? y$mem_tmp : y;
tP0_0_17: IF(1,17,tP0_0_18)
                                        y$flush_delayed = (_Bool) 0;
                                        __CSEQ_atomic_end();
tP0_0_18: IF(1,18,tP0_0_19)
                                        __CSEQ_atomic_begin();
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
                                        y$w_buff1 = y$w_buff0;
tP1_0_2: IF(2,2,tP1_0_3)
                                        y$w_buff0 = 1;
tP1_0_3: IF(2,3,tP1_0_4)
                                        y$w_buff1_used = y$w_buff0_used;
tP1_0_4: IF(2,4,tP1_0_5)
                                        y$w_buff0_used = (_Bool) 1;
tP1_0_5: IF(2,5,tP1_0_6)
                                        assert(!(y$w_buff1_used && y$w_buff0_used));
tP1_0_6: IF(2,6,tP1_0_7)
                                        y$r_buff1_thd0 = y$r_buff0_thd0;
tP1_0_7: IF(2,7,tP1_0_8)
                                        y$r_buff1_thd1 = y$r_buff0_thd1;
tP1_0_8: IF(2,8,tP1_0_9)
                                        y$r_buff1_thd2 = y$r_buff0_thd2;
tP1_0_9: IF(2,9,tP1_0_10)
                                        y$r_buff0_thd2 = (_Bool) 1;
                                        __CSEQ_atomic_end();
tP1_0_10: IF(2,10,tP1_0_11)
                                        __CSEQ_atomic_begin();
tP1_0_11: IF(2,11,tP1_0_12)
                                        y$w_buff1 = y$w_buff0;
tP1_0_12: IF(2,12,tP1_0_13)
                                        y$w_buff0 = 2;
tP1_0_13: IF(2,13,tP1_0_14)
                                        y$w_buff1_used = y$w_buff0_used;
tP1_0_14: IF(2,14,tP1_0_15)
                                        y$w_buff0_used = (_Bool) 1;
tP1_0_15: IF(2,15,tP1_0_16)
                                        assert(!(y$w_buff1_used && y$w_buff0_used));
tP1_0_16: IF(2,16,tP1_0_17)
                                        y$r_buff1_thd0 = y$r_buff0_thd0;
tP1_0_17: IF(2,17,tP1_0_18)
                                        y$r_buff1_thd1 = y$r_buff0_thd1;
tP1_0_18: IF(2,18,tP1_0_19)
                                        y$r_buff1_thd2 = y$r_buff0_thd2;
tP1_0_19: IF(2,19,tP1_0_20)
                                        y$r_buff0_thd2 = (_Bool) 1;
                                        __CSEQ_atomic_end();
tP1_0_20: IF(2,20,tP1_0_21)
                                        __CSEQ_atomic_begin();
tP1_0_21: IF(2,21,tP1_0_22)
                                        weak$$choice0 = nondet_0();
tP1_0_22: IF(2,22,tP1_0_23)
                                        weak$$choice2 = nondet_0();
tP1_0_23: IF(2,23,tP1_0_24)
                                        y$flush_delayed = weak$$choice2;
tP1_0_24: IF(2,24,tP1_0_25)
                                        y$mem_tmp = y;
tP1_0_25: IF(2,25,tP1_0_26)
                                        y = ((!y$w_buff0_used) || ((!y$r_buff0_thd2) && (!y$w_buff1_used))) || ((!y$r_buff0_thd2) && (!y$r_buff1_thd2)) ? y : y$w_buff0_used && y$r_buff0_thd2 ? y$w_buff0 : y$w_buff1;
tP1_0_26: IF(2,26,tP1_0_27)
                                        y$w_buff0 = weak$$choice2 ? y$w_buff0 : ((!y$w_buff0_used) || ((!y$r_buff0_thd2) && (!y$w_buff1_used))) || ((!y$r_buff0_thd2) && (!y$r_buff1_thd2)) ? y$w_buff0 : y$w_buff0_used && y$r_buff0_thd2 ? y$w_buff0 : y$w_buff0;
tP1_0_27: IF(2,27,tP1_0_28)
                                        y$w_buff1 = weak$$choice2 ? y$w_buff1 : ((!y$w_buff0_used) || ((!y$r_buff0_thd2) && (!y$w_buff1_used))) || ((!y$r_buff0_thd2) && (!y$r_buff1_thd2)) ? y$w_buff1 : y$w_buff0_used && y$r_buff0_thd2 ? y$w_buff1 : y$w_buff1;
tP1_0_28: IF(2,28,tP1_0_29)
                                        y$w_buff0_used = weak$$choice2 ? y$w_buff0_used : ((!y$w_buff0_used) || ((!y$r_buff0_thd2) && (!y$w_buff1_used))) || ((!y$r_buff0_thd2) && (!y$r_buff1_thd2)) ? y$w_buff0_used : y$w_buff0_used && y$r_buff0_thd2 ? (_Bool) 0 : y$w_buff0_used;
tP1_0_29: IF(2,29,tP1_0_30)
                                        y$w_buff1_used = weak$$choice2 ? y$w_buff1_used : ((!y$w_buff0_used) || ((!y$r_buff0_thd2) && (!y$w_buff1_used))) || ((!y$r_buff0_thd2) && (!y$r_buff1_thd2)) ? y$w_buff1_used : y$w_buff0_used && y$r_buff0_thd2 ? (_Bool) 0 : (_Bool) 0;
tP1_0_30: IF(2,30,tP1_0_31)
                                        y$r_buff0_thd2 = weak$$choice2 ? y$r_buff0_thd2 : ((!y$w_buff0_used) || ((!y$r_buff0_thd2) && (!y$w_buff1_used))) || ((!y$r_buff0_thd2) && (!y$r_buff1_thd2)) ? y$r_buff0_thd2 : y$w_buff0_used && y$r_buff0_thd2 ? (_Bool) 0 : y$r_buff0_thd2;
tP1_0_31: IF(2,31,tP1_0_32)
                                        y$r_buff1_thd2 = weak$$choice2 ? y$r_buff1_thd2 : ((!y$w_buff0_used) || ((!y$r_buff0_thd2) && (!y$w_buff1_used))) || ((!y$r_buff0_thd2) && (!y$r_buff1_thd2)) ? y$r_buff1_thd2 : y$w_buff0_used && y$r_buff0_thd2 ? (_Bool) 0 : (_Bool) 0;
tP1_0_32: IF(2,32,tP1_0_33)
                                        __unbuffered_p1_EAX = y;
tP1_0_33: IF(2,33,tP1_0_34)
                                        y = y$flush_delayed ? y$mem_tmp : y;
tP1_0_34: IF(2,34,tP1_0_35)
                                        y$flush_delayed = (_Bool) 0;
                                        __CSEQ_atomic_end();
tP1_0_35: IF(2,35,tP1_0_36)
                                        __CSEQ_atomic_begin();
tP1_0_36: IF(2,36,tP1_0_37)
                                        __unbuffered_p1_EBX = x;
                                        __CSEQ_atomic_end();
tP1_0_37: IF(2,37,tP1_0_38)
                                        __CSEQ_atomic_begin();
tP1_0_38: IF(2,38,tP1_0_39)
                                        y = y$w_buff0_used && y$r_buff0_thd2 ? y$w_buff0 : y$w_buff1_used && y$r_buff1_thd2 ? y$w_buff1 : y;
tP1_0_39: IF(2,39,tP1_0_40)
                                        y$w_buff0_used = y$w_buff0_used && y$r_buff0_thd2 ? (_Bool) 0 : y$w_buff0_used;
tP1_0_40: IF(2,40,tP1_0_41)
                                        y$w_buff1_used = (y$w_buff0_used && y$r_buff0_thd2) || (y$w_buff1_used && y$r_buff1_thd2) ? (_Bool) 0 : y$w_buff1_used;
tP1_0_41: IF(2,41,tP1_0_42)
                                        y$r_buff0_thd2 = y$w_buff0_used && y$r_buff0_thd2 ? (_Bool) 0 : y$r_buff0_thd2;
tP1_0_42: IF(2,42,tP1_0_43)
                                        y$r_buff1_thd2 = (y$w_buff0_used && y$r_buff0_thd2) || (y$w_buff1_used && y$r_buff1_thd2) ? (_Bool) 0 : y$r_buff1_thd2;
                                        __CSEQ_atomic_end();
tP1_0_43: IF(2,43,tP1_0_44)
                                        __CSEQ_atomic_begin();
tP1_0_44: IF(2,44,tP1_0_45)
                                        __unbuffered_cnt = __unbuffered_cnt + 1;
                                        __CSEQ_atomic_end();
                                        goto __exit_P1;
                                        		;
                                        __exit_P1:
                                        		__CPROVER_assume(__cs_pc_cs[2] >= 45);
                                        		;
                                        		;
tP1_0_45: 
                                        STOP_NONVOID(45);
                                        }
                                        int main_thread(void)
                                        {
                                        		;
IF(0,0,tmain_1)
                                        __cs_create(0, 0, P0_0, 0, 1);
tmain_1: IF(0,1,tmain_2)
                                        __cs_create(0, 0, P1_0, 0, 2);
tmain_2: IF(0,2,tmain_3)
                                        __CSEQ_atomic_begin();
tmain_3: IF(0,3,tmain_4)
                                        main$tmp_guard0 = __unbuffered_cnt == 2;
                                        __CSEQ_atomic_end();
tmain_4: IF(0,4,tmain_5)
                                        __CPROVER_assume(main$tmp_guard0);
tmain_5: IF(0,5,tmain_6)
                                        __CSEQ_atomic_begin();
tmain_6: IF(0,6,tmain_7)
                                        y = y$w_buff0_used && y$r_buff0_thd0 ? y$w_buff0 : y$w_buff1_used && y$r_buff1_thd0 ? y$w_buff1 : y;
tmain_7: IF(0,7,tmain_8)
                                        y$w_buff0_used = y$w_buff0_used && y$r_buff0_thd0 ? (_Bool) 0 : y$w_buff0_used;
tmain_8: IF(0,8,tmain_9)
                                        y$w_buff1_used = (y$w_buff0_used && y$r_buff0_thd0) || (y$w_buff1_used && y$r_buff1_thd0) ? (_Bool) 0 : y$w_buff1_used;
tmain_9: IF(0,9,tmain_10)
                                        y$r_buff0_thd0 = y$w_buff0_used && y$r_buff0_thd0 ? (_Bool) 0 : y$r_buff0_thd0;
tmain_10: IF(0,10,tmain_11)
                                        y$r_buff1_thd0 = (y$w_buff0_used && y$r_buff0_thd0) || (y$w_buff1_used && y$r_buff1_thd0) ? (_Bool) 0 : y$r_buff1_thd0;
                                        __CSEQ_atomic_end();
tmain_11: IF(0,11,tmain_12)
                                        __CSEQ_atomic_begin();
tmain_12: IF(0,12,tmain_13)
                                        weak$$choice0 = nondet_0();
tmain_13: IF(0,13,tmain_14)
                                        weak$$choice2 = nondet_0();
tmain_14: IF(0,14,tmain_15)
                                        y$flush_delayed = weak$$choice2;
tmain_15: IF(0,15,tmain_16)
                                        y$mem_tmp = y;
tmain_16: IF(0,16,tmain_17)
                                        y = ((!y$w_buff0_used) || ((!y$r_buff0_thd0) && (!y$w_buff1_used))) || ((!y$r_buff0_thd0) && (!y$r_buff1_thd0)) ? y : y$w_buff0_used && y$r_buff0_thd0 ? y$w_buff0 : y$w_buff1;
tmain_17: IF(0,17,tmain_18)
                                        y$w_buff0 = weak$$choice2 ? y$w_buff0 : ((!y$w_buff0_used) || ((!y$r_buff0_thd0) && (!y$w_buff1_used))) || ((!y$r_buff0_thd0) && (!y$r_buff1_thd0)) ? y$w_buff0 : y$w_buff0_used && y$r_buff0_thd0 ? y$w_buff0 : y$w_buff0;
tmain_18: IF(0,18,tmain_19)
                                        y$w_buff1 = weak$$choice2 ? y$w_buff1 : ((!y$w_buff0_used) || ((!y$r_buff0_thd0) && (!y$w_buff1_used))) || ((!y$r_buff0_thd0) && (!y$r_buff1_thd0)) ? y$w_buff1 : y$w_buff0_used && y$r_buff0_thd0 ? y$w_buff1 : y$w_buff1;
tmain_19: IF(0,19,tmain_20)
                                        y$w_buff0_used = weak$$choice2 ? y$w_buff0_used : ((!y$w_buff0_used) || ((!y$r_buff0_thd0) && (!y$w_buff1_used))) || ((!y$r_buff0_thd0) && (!y$r_buff1_thd0)) ? y$w_buff0_used : y$w_buff0_used && y$r_buff0_thd0 ? (_Bool) 0 : y$w_buff0_used;
tmain_20: IF(0,20,tmain_21)
                                        y$w_buff1_used = weak$$choice2 ? y$w_buff1_used : ((!y$w_buff0_used) || ((!y$r_buff0_thd0) && (!y$w_buff1_used))) || ((!y$r_buff0_thd0) && (!y$r_buff1_thd0)) ? y$w_buff1_used : y$w_buff0_used && y$r_buff0_thd0 ? (_Bool) 0 : (_Bool) 0;
tmain_21: IF(0,21,tmain_22)
                                        y$r_buff0_thd0 = weak$$choice2 ? y$r_buff0_thd0 : ((!y$w_buff0_used) || ((!y$r_buff0_thd0) && (!y$w_buff1_used))) || ((!y$r_buff0_thd0) && (!y$r_buff1_thd0)) ? y$r_buff0_thd0 : y$w_buff0_used && y$r_buff0_thd0 ? (_Bool) 0 : y$r_buff0_thd0;
tmain_22: IF(0,22,tmain_23)
                                        y$r_buff1_thd0 = weak$$choice2 ? y$r_buff1_thd0 : ((!y$w_buff0_used) || ((!y$r_buff0_thd0) && (!y$w_buff1_used))) || ((!y$r_buff0_thd0) && (!y$r_buff1_thd0)) ? y$r_buff1_thd0 : y$w_buff0_used && y$r_buff0_thd0 ? (_Bool) 0 : (_Bool) 0;
tmain_23: IF(0,23,tmain_24)
                                        main$tmp_guard1 = !((((y == 2) && (__unbuffered_p0_EAX == 0)) && (__unbuffered_p1_EAX == 2)) && (__unbuffered_p1_EBX == 0));
tmain_24: IF(0,24,tmain_25)
                                        y = y$flush_delayed ? y$mem_tmp : y;
tmain_25: IF(0,25,tmain_26)
                                        y$flush_delayed = (_Bool) 0;
                                        __CSEQ_atomic_end();
tmain_26: IF(0,26,tmain_27)
                                        assert(main$tmp_guard1);
                                        goto __exit_main;
                                        		;
                                        __exit_main:
                                        		__CPROVER_assume(__cs_pc_cs[0] >= 27);
                                        		;
                                        		;
tmain_27: 
                                        STOP_NONVOID(27);
                                        }
                                        int main(void)
                                        {
                                        unsigned __CPROVER_bitvector[5] __cs_tmp_t0_r0 = (unsigned __CPROVER_bitvector[5])nondet_uint();
                                        unsigned __CPROVER_bitvector[5] __cs_tmp_t1_r0 = (unsigned __CPROVER_bitvector[5])nondet_uint();
                                        unsigned __CPROVER_bitvector[6] __cs_tmp_t2_r0 = (unsigned __CPROVER_bitvector[6])nondet_uint();
                                        unsigned __CPROVER_bitvector[5] __cs_tmp_t0_r1 = (unsigned __CPROVER_bitvector[5])nondet_uint();
                                        unsigned __CPROVER_bitvector[5] __cs_tmp_t1_r1 = (unsigned __CPROVER_bitvector[5])nondet_uint();
                                        unsigned __CPROVER_bitvector[6] __cs_tmp_t2_r1 = (unsigned __CPROVER_bitvector[6])nondet_uint();
                                        unsigned __CPROVER_bitvector[5] __cs_tmp_t0_r2 = (unsigned __CPROVER_bitvector[5])nondet_uint();
/* round  0 */
                                        __CPROVER_assume(__cs_tmp_t0_r0 > 0);
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r0;
                                        __CPROVER_assume(__cs_pc_cs[0] > 0);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 27);
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
                                        __CPROVER_assume(__cs_pc_cs[2] <= 45);
                                        P1_0(__cs_threadargs[2]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
/* round  1 */
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        				__cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 27);
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
                                        __CPROVER_assume(__cs_pc_cs[2] <= 45);
                                        P1_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 27);
                                        main_thread();
                                        		}
                                        return 0;
                                        }
                                        
