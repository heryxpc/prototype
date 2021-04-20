/*
 *  generated by CSeq [ 0000 / 0000 ]
 * 
 *                      2C9F merger-0.0-2015.07.09
 *                      FB59 parser-0.0-2015.06.26
 *                      AB0B module-0.0-2015.07.16 ]
 *
 *  2015-07-22 16:54:36
 *
 *  params:
 *    -i svcomp2015_unsafe/pthread/singleton_false-unreach-call.c, --time 750, --rounds 4, --unwind 1, 
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
#define THREADS 6
#define ROUNDS 4
#define STOP_VOID(A) return;
#define STOP_NONVOID(A) return 0;
#define IF(T,A,B) if ((__cs_pc[T] > A) | (A >= __cs_pc_cs[T])) goto B;
#ifndef NULL
#define NULL 0
#endif
                                        unsigned __CPROVER_bitvector[1] __cs_active_thread[THREADS + 1] = {1};
                                        unsigned __CPROVER_bitvector[4] __cs_pc[THREADS + 1];
                                        unsigned __CPROVER_bitvector[5] __cs_pc_cs[THREADS + 1];
                                        unsigned int __cs_thread_index;
                                        unsigned __CPROVER_bitvector[4] __cs_thread_lines[] = {3, 1, 1, 1, 1, 1, 11};
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
                                        char *v;
                                        void *thread1_0(void *__cs_param_thread1_arg)
                                        {
IF(1,0,tthread1_0_1)
                                        v = __cs_safe_malloc(sizeof(char));
                                        goto __exit_thread1;
                                        		;
                                        __exit_thread1:
                                        		__CPROVER_assume(__cs_pc_cs[1] >= 1);
                                        		;
                                        		;
tthread1_0_1: 
                                        STOP_NONVOID(1);
                                        }
                                        void *thread2_0(void *__cs_param_thread2_arg)
                                        {
IF(2,0,tthread2_0_1)
                                        v[0] = 'X';
                                        goto __exit_thread2;
                                        		;
                                        __exit_thread2:
                                        		__CPROVER_assume(__cs_pc_cs[2] >= 1);
                                        		;
                                        		;
tthread2_0_1: 
                                        STOP_NONVOID(1);
                                        }
                                        void *thread2_1(void *__cs_param_thread2_arg)
                                        {
IF(4,0,tthread2_1_1)
                                        v[0] = 'X';
                                        goto __exit_thread2;
                                        		;
                                        __exit_thread2:
                                        		__CPROVER_assume(__cs_pc_cs[4] >= 1);
                                        		;
                                        		;
tthread2_1_1: 
                                        STOP_NONVOID(1);
                                        }
                                        void *thread2_2(void *__cs_param_thread2_arg)
                                        {
IF(5,0,tthread2_2_1)
                                        v[0] = 'X';
                                        goto __exit_thread2;
                                        		;
                                        __exit_thread2:
                                        		__CPROVER_assume(__cs_pc_cs[5] >= 1);
                                        		;
                                        		;
tthread2_2_1: 
                                        STOP_NONVOID(1);
                                        }
                                        void *thread3_0(void *__cs_param_thread3_arg)
                                        {
IF(3,0,tthread3_0_1)
                                        v[0] = 'Y';
                                        goto __exit_thread3;
                                        		;
                                        __exit_thread3:
                                        		__CPROVER_assume(__cs_pc_cs[3] >= 1);
                                        		;
                                        		;
tthread3_0_1: 
                                        STOP_NONVOID(1);
                                        }
                                        void *thread0_0(void *__cs_param_thread0_arg)
                                        {
                                        static __cs_t __cs_local_thread0_t1;
IF(6,0,tthread0_0_1)
                                        __cs_init_scalar(&__cs_local_thread0_t1, sizeof(__cs_t));
                                        static __cs_t __cs_local_thread0_t2;
                                        __cs_init_scalar(&__cs_local_thread0_t2, sizeof(__cs_t));
                                        static __cs_t __cs_local_thread0_t3;
                                        __cs_init_scalar(&__cs_local_thread0_t3, sizeof(__cs_t));
                                        static __cs_t __cs_local_thread0_t4;
                                        __cs_init_scalar(&__cs_local_thread0_t4, sizeof(__cs_t));
                                        static __cs_t __cs_local_thread0_t5;
                                        __cs_init_scalar(&__cs_local_thread0_t5, sizeof(__cs_t));
tthread0_0_1: IF(6,1,tthread0_0_2)
                                        __cs_create(&__cs_local_thread0_t1, 0, thread1_0, 0, 1);
tthread0_0_2: IF(6,2,tthread0_0_3)
                                        __cs_join(__cs_local_thread0_t1, 0);
tthread0_0_3: IF(6,3,tthread0_0_4)
                                        __cs_create(&__cs_local_thread0_t2, 0, thread2_0, 0, 2);
tthread0_0_4: IF(6,4,tthread0_0_5)
                                        __cs_create(&__cs_local_thread0_t3, 0, thread3_0, 0, 3);
tthread0_0_5: IF(6,5,tthread0_0_6)
                                        __cs_create(&__cs_local_thread0_t4, 0, thread2_1, 0, 4);
tthread0_0_6: IF(6,6,tthread0_0_7)
                                        __cs_create(&__cs_local_thread0_t5, 0, thread2_2, 0, 5);
tthread0_0_7: IF(6,7,tthread0_0_8)
                                        __cs_join(__cs_local_thread0_t2, 0);
tthread0_0_8: IF(6,8,tthread0_0_9)
                                        __cs_join(__cs_local_thread0_t3, 0);
tthread0_0_9: IF(6,9,tthread0_0_10)
                                        __cs_join(__cs_local_thread0_t4, 0);
tthread0_0_10: IF(6,10,tthread0_0_11)
                                        __cs_join(__cs_local_thread0_t5, 0);
                                        goto __exit_thread0;
                                        		;
                                        __exit_thread0:
                                        		__CPROVER_assume(__cs_pc_cs[6] >= 11);
                                        		;
                                        		;
tthread0_0_11: 
                                        STOP_NONVOID(11);
                                        }
                                        int main_thread(void)
                                        {
IF(0,0,tmain_1)
                                        static __cs_t __cs_local_main_t;
                                        __cs_init_scalar(&__cs_local_main_t, sizeof(__cs_t));
                                        __cs_create(&__cs_local_main_t, 0, thread0_0, 0, 6);
tmain_1: IF(0,1,tmain_2)
                                        __cs_join(__cs_local_main_t, 0);
tmain_2: IF(0,2,tmain_3)
                                        assert(v[0] == 'X');
                                        goto __exit_main;
                                        		;
                                        __exit_main:
                                        		__CPROVER_assume(__cs_pc_cs[0] >= 3);
                                        		;
                                        		;
tmain_3: 
                                        STOP_NONVOID(3);
                                        }
                                        int main(void)
                                        {
                                        unsigned __CPROVER_bitvector[2] __cs_tmp_t0_r0 = (unsigned __CPROVER_bitvector[2])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t1_r0 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t2_r0 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t3_r0 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t4_r0 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t5_r0 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[4] __cs_tmp_t6_r0 = (unsigned __CPROVER_bitvector[4])nondet_uint();
                                        unsigned __CPROVER_bitvector[2] __cs_tmp_t0_r1 = (unsigned __CPROVER_bitvector[2])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t1_r1 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t2_r1 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t3_r1 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t4_r1 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t5_r1 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[4] __cs_tmp_t6_r1 = (unsigned __CPROVER_bitvector[4])nondet_uint();
                                        unsigned __CPROVER_bitvector[2] __cs_tmp_t0_r2 = (unsigned __CPROVER_bitvector[2])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t1_r2 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t2_r2 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t3_r2 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t4_r2 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t5_r2 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[4] __cs_tmp_t6_r2 = (unsigned __CPROVER_bitvector[4])nondet_uint();
                                        unsigned __CPROVER_bitvector[2] __cs_tmp_t0_r3 = (unsigned __CPROVER_bitvector[2])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t1_r3 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t2_r3 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t3_r3 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t4_r3 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[1] __cs_tmp_t5_r3 = (unsigned __CPROVER_bitvector[1])nondet_uint();
                                        unsigned __CPROVER_bitvector[4] __cs_tmp_t6_r3 = (unsigned __CPROVER_bitvector[4])nondet_uint();
                                        unsigned __CPROVER_bitvector[2] __cs_tmp_t0_r4 = (unsigned __CPROVER_bitvector[2])nondet_uint();
/* round  0 */
                                        __CPROVER_assume(__cs_tmp_t0_r0 > 0);
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r0;
                                        __CPROVER_assume(__cs_pc_cs[0] > 0);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 3);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r0;
                                        __CPROVER_assume(__cs_pc_cs[1] <= 1);
                                        thread1_0(__cs_threadargs[1]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
                                        if (__cs_active_thread[2] == 1)
                                        		{
                                        __cs_thread_index = 2;
                                        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r0;
                                        __CPROVER_assume(__cs_pc_cs[2] <= 1);
                                        thread2_0(__cs_threadargs[2]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
                                        if (__cs_active_thread[3] == 1)
                                        		{
                                        __cs_thread_index = 3;
                                        __cs_pc_cs[3] = __cs_pc[3] + __cs_tmp_t3_r0;
                                        __CPROVER_assume(__cs_pc_cs[3] <= 1);
                                        thread3_0(__cs_threadargs[3]);
                                        __cs_pc[3] = __cs_pc_cs[3];
                                        		}
                                        if (__cs_active_thread[4] == 1)
                                        		{
                                        __cs_thread_index = 4;
                                        __cs_pc_cs[4] = __cs_pc[4] + __cs_tmp_t4_r0;
                                        __CPROVER_assume(__cs_pc_cs[4] <= 1);
                                        thread2_1(__cs_threadargs[4]);
                                        __cs_pc[4] = __cs_pc_cs[4];
                                        		}
                                        if (__cs_active_thread[5] == 1)
                                        		{
                                        __cs_thread_index = 5;
                                        __cs_pc_cs[5] = __cs_pc[5] + __cs_tmp_t5_r0;
                                        __CPROVER_assume(__cs_pc_cs[5] <= 1);
                                        thread2_2(__cs_threadargs[5]);
                                        __cs_pc[5] = __cs_pc_cs[5];
                                        		}
                                        if (__cs_active_thread[6] == 1)
                                        		{
                                        __cs_thread_index = 6;
                                        __cs_pc_cs[6] = __cs_pc[6] + __cs_tmp_t6_r0;
                                        __CPROVER_assume(__cs_pc_cs[6] <= 11);
                                        thread0_0(__cs_threadargs[6]);
                                        __cs_pc[6] = __cs_pc_cs[6];
                                        		}
/* round  1 */
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        				__cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 3);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        		}
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r1;
                                        __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                        __CPROVER_assume(__cs_pc_cs[1] <= 1);
                                        thread1_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
                                        if (__cs_active_thread[2] == 1)
                                        		{
                                        __cs_thread_index = 2;
                                        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r1;
                                        __CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                        __CPROVER_assume(__cs_pc_cs[2] <= 1);
                                        thread2_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
                                        if (__cs_active_thread[3] == 1)
                                        		{
                                        __cs_thread_index = 3;
                                        __cs_pc_cs[3] = __cs_pc[3] + __cs_tmp_t3_r1;
                                        __CPROVER_assume(__cs_pc_cs[3] >= __cs_pc[3]);
                                        __CPROVER_assume(__cs_pc_cs[3] <= 1);
                                        thread3_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[3] = __cs_pc_cs[3];
                                        		}
                                        if (__cs_active_thread[4] == 1)
                                        		{
                                        __cs_thread_index = 4;
                                        __cs_pc_cs[4] = __cs_pc[4] + __cs_tmp_t4_r1;
                                        __CPROVER_assume(__cs_pc_cs[4] >= __cs_pc[4]);
                                        __CPROVER_assume(__cs_pc_cs[4] <= 1);
                                        thread2_1(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[4] = __cs_pc_cs[4];
                                        		}
                                        if (__cs_active_thread[5] == 1)
                                        		{
                                        __cs_thread_index = 5;
                                        __cs_pc_cs[5] = __cs_pc[5] + __cs_tmp_t5_r1;
                                        __CPROVER_assume(__cs_pc_cs[5] >= __cs_pc[5]);
                                        __CPROVER_assume(__cs_pc_cs[5] <= 1);
                                        thread2_2(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[5] = __cs_pc_cs[5];
                                        		}
                                        if (__cs_active_thread[6] == 1)
                                        		{
                                        __cs_thread_index = 6;
                                        __cs_pc_cs[6] = __cs_pc[6] + __cs_tmp_t6_r1;
                                        __CPROVER_assume(__cs_pc_cs[6] >= __cs_pc[6]);
                                        __CPROVER_assume(__cs_pc_cs[6] <= 11);
                                        thread0_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[6] = __cs_pc_cs[6];
                                        		}
/* round  2 */
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        				__cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 3);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        		}
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r2;
                                        __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                        __CPROVER_assume(__cs_pc_cs[1] <= 1);
                                        thread1_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
                                        if (__cs_active_thread[2] == 1)
                                        		{
                                        __cs_thread_index = 2;
                                        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r2;
                                        __CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                        __CPROVER_assume(__cs_pc_cs[2] <= 1);
                                        thread2_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
                                        if (__cs_active_thread[3] == 1)
                                        		{
                                        __cs_thread_index = 3;
                                        __cs_pc_cs[3] = __cs_pc[3] + __cs_tmp_t3_r2;
                                        __CPROVER_assume(__cs_pc_cs[3] >= __cs_pc[3]);
                                        __CPROVER_assume(__cs_pc_cs[3] <= 1);
                                        thread3_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[3] = __cs_pc_cs[3];
                                        		}
                                        if (__cs_active_thread[4] == 1)
                                        		{
                                        __cs_thread_index = 4;
                                        __cs_pc_cs[4] = __cs_pc[4] + __cs_tmp_t4_r2;
                                        __CPROVER_assume(__cs_pc_cs[4] >= __cs_pc[4]);
                                        __CPROVER_assume(__cs_pc_cs[4] <= 1);
                                        thread2_1(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[4] = __cs_pc_cs[4];
                                        		}
                                        if (__cs_active_thread[5] == 1)
                                        		{
                                        __cs_thread_index = 5;
                                        __cs_pc_cs[5] = __cs_pc[5] + __cs_tmp_t5_r2;
                                        __CPROVER_assume(__cs_pc_cs[5] >= __cs_pc[5]);
                                        __CPROVER_assume(__cs_pc_cs[5] <= 1);
                                        thread2_2(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[5] = __cs_pc_cs[5];
                                        		}
                                        if (__cs_active_thread[6] == 1)
                                        		{
                                        __cs_thread_index = 6;
                                        __cs_pc_cs[6] = __cs_pc[6] + __cs_tmp_t6_r2;
                                        __CPROVER_assume(__cs_pc_cs[6] >= __cs_pc[6]);
                                        __CPROVER_assume(__cs_pc_cs[6] <= 11);
                                        thread0_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[6] = __cs_pc_cs[6];
                                        		}
/* round  3 */
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        				__cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r3;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 3);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        		}
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r3;
                                        __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                        __CPROVER_assume(__cs_pc_cs[1] <= 1);
                                        thread1_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
                                        if (__cs_active_thread[2] == 1)
                                        		{
                                        __cs_thread_index = 2;
                                        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r3;
                                        __CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                        __CPROVER_assume(__cs_pc_cs[2] <= 1);
                                        thread2_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
                                        if (__cs_active_thread[3] == 1)
                                        		{
                                        __cs_thread_index = 3;
                                        __cs_pc_cs[3] = __cs_pc[3] + __cs_tmp_t3_r3;
                                        __CPROVER_assume(__cs_pc_cs[3] >= __cs_pc[3]);
                                        __CPROVER_assume(__cs_pc_cs[3] <= 1);
                                        thread3_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[3] = __cs_pc_cs[3];
                                        		}
                                        if (__cs_active_thread[4] == 1)
                                        		{
                                        __cs_thread_index = 4;
                                        __cs_pc_cs[4] = __cs_pc[4] + __cs_tmp_t4_r3;
                                        __CPROVER_assume(__cs_pc_cs[4] >= __cs_pc[4]);
                                        __CPROVER_assume(__cs_pc_cs[4] <= 1);
                                        thread2_1(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[4] = __cs_pc_cs[4];
                                        		}
                                        if (__cs_active_thread[5] == 1)
                                        		{
                                        __cs_thread_index = 5;
                                        __cs_pc_cs[5] = __cs_pc[5] + __cs_tmp_t5_r3;
                                        __CPROVER_assume(__cs_pc_cs[5] >= __cs_pc[5]);
                                        __CPROVER_assume(__cs_pc_cs[5] <= 1);
                                        thread2_2(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[5] = __cs_pc_cs[5];
                                        		}
                                        if (__cs_active_thread[6] == 1)
                                        		{
                                        __cs_thread_index = 6;
                                        __cs_pc_cs[6] = __cs_pc[6] + __cs_tmp_t6_r3;
                                        __CPROVER_assume(__cs_pc_cs[6] >= __cs_pc[6]);
                                        __CPROVER_assume(__cs_pc_cs[6] <= 11);
                                        thread0_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[6] = __cs_pc_cs[6];
                                        		}
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r4;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 3);
                                        main_thread();
                                        		}
                                        return 0;
                                        }
                                        