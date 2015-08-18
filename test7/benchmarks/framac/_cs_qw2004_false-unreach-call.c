/*
 *  generated by CSeq [ 0000 / 0000 ]
 * 
 *                      2C9F merger-0.0-2015.07.09
 *                      FB59 parser-0.0-2015.06.26
 *                      AB0B module-0.0-2015.07.16 ]
 *
 *  2015-07-22 16:56:41
 *
 *  params:
 *    -i svcomp2015_unsafe/pthread-lit/qw2004_false-unreach-call.c, --time 750, --rounds 2, --unwind 1, 
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
#define THREADS 1
#define ROUNDS 2
#define STOP_VOID(A) return;
#define STOP_NONVOID(A) return 0;
#define IF(T,A,B) if ((__cs_pc[T] > A) | (A >= __cs_pc_cs[T])) goto B;
#ifndef NULL
#define NULL 0
#endif
                                        unsigned __CPROVER_bitvector[1] __cs_active_thread[THREADS + 1] = {1};
                                        unsigned __CPROVER_bitvector[3] __cs_pc[THREADS + 1];
                                        unsigned __CPROVER_bitvector[4] __cs_pc_cs[THREADS + 1];
                                        unsigned int __cs_thread_index;
                                        unsigned __CPROVER_bitvector[3] __cs_thread_lines[] = {7, 4};
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
                                        int stoppingFlag;
                                        int pendingIo;
                                        int stoppingEvent;
                                        int stopped;
                                        int __CSEQ_atomic_dec()
                                        {
                                        pendingIo--;
                                        return pendingIo;
                                        		;
                                        }
                                        void *BCSP_PnpStop_0(void *__cs_param_BCSP_PnpStop_arg)
                                        {
IF(1,0,tBCSP_PnpStop_0_1)
                                        stoppingFlag = 1;
                                        		{
                                        static int __cs_local_BCSP_IoDecrement_pending;
                                        __cs_init_scalar(&__cs_local_BCSP_IoDecrement_pending, sizeof(int));
                                        __cs_local_BCSP_IoDecrement_pending = __CSEQ_atomic_dec();
                                        static _Bool __cs_local_BCSP_IoDecrement___cs_tmp_if_cond_1;
                                        __cs_init_scalar(&__cs_local_BCSP_IoDecrement___cs_tmp_if_cond_1, sizeof(_Bool));
                                        __cs_local_BCSP_IoDecrement___cs_tmp_if_cond_1 = __cs_local_BCSP_IoDecrement_pending == 0;
                                        if (__cs_local_BCSP_IoDecrement___cs_tmp_if_cond_1)
                                        				{
tBCSP_PnpStop_0_1: IF(1,1,tBCSP_PnpStop_0_2)
                                        stoppingEvent = 1;
                                        				}
                                        __CPROVER_assume(__cs_pc_cs[1] >= 2);
                                        				;
                                        __exit__BCSP_IoDecrement_1:
                                        				__CPROVER_assume(__cs_pc_cs[1] >= 2);
                                        				;
                                        				;
                                        		}
                                        		;
tBCSP_PnpStop_0_2: IF(1,2,tBCSP_PnpStop_0_3)
                                        __CPROVER_assume(stoppingEvent);
tBCSP_PnpStop_0_3: IF(1,3,tBCSP_PnpStop_0_4)
                                        stopped = 1;
                                        __exit_BCSP_PnpStop:
                                        		__CPROVER_assume(__cs_pc_cs[1] >= 4);
                                        		;
                                        		;
tBCSP_PnpStop_0_4: 
                                        STOP_NONVOID(4);
                                        }
                                        void main_thread(void)
                                        {
                                        		;
IF(0,0,tmain_1)
                                        static __cs_t __cs_local_main_t;
                                        __cs_init_scalar(&__cs_local_main_t, sizeof(__cs_t));
                                        pendingIo = 1;
                                        stoppingFlag = 0;
                                        stoppingEvent = 0;
                                        stopped = 0;
                                        __cs_create(&__cs_local_main_t, 0, BCSP_PnpStop_0, 0, 1);
                                        static void *__cs_retval__BCSP_PnpAdd_1;
                                        		{
                                        static void *__cs_param_BCSP_PnpAdd_arg;
tmain_1: IF(0,1,tmain_2)
                                        __cs_param_BCSP_PnpAdd_arg = 0;
                                        static int __cs_local_BCSP_PnpAdd_status;
                                        __cs_init_scalar(&__cs_local_BCSP_PnpAdd_status, sizeof(int));
                                        static int __cs_retval__BCSP_IoIncrement_1;
                                        				{
                                        static _Bool __cs_local_BCSP_IoIncrement___cs_tmp_if_cond_0;
                                        __cs_init_scalar(&__cs_local_BCSP_IoIncrement___cs_tmp_if_cond_0, sizeof(_Bool));
tmain_2: IF(0,2,tmain_3)
                                        __cs_local_BCSP_IoIncrement___cs_tmp_if_cond_0 = stoppingFlag;
                                        if (__cs_local_BCSP_IoIncrement___cs_tmp_if_cond_0)
                                        						{
                                        __cs_retval__BCSP_IoIncrement_1 = -1;
                                        goto __exit__BCSP_IoIncrement_1;
                                        								;
                                        						}
                                        						else
                                        						{
tmain_3: IF(0,3,tmain_4)
                                        pendingIo = pendingIo + 1;
                                        						}
                                        __CPROVER_assume(__cs_pc_cs[0] >= 4);
                                        						;
                                        __cs_retval__BCSP_IoIncrement_1 = 0;
                                        goto __exit__BCSP_IoIncrement_1;
                                        						;
                                        __exit__BCSP_IoIncrement_1:
                                        						__CPROVER_assume(__cs_pc_cs[0] >= 4);
                                        						;
                                        						;
                                        				}
                                        				;
                                        __cs_local_BCSP_PnpAdd_status = __cs_retval__BCSP_IoIncrement_1;
                                        static _Bool __cs_local_BCSP_PnpAdd___cs_tmp_if_cond_2;
                                        __cs_init_scalar(&__cs_local_BCSP_PnpAdd___cs_tmp_if_cond_2, sizeof(_Bool));
                                        __cs_local_BCSP_PnpAdd___cs_tmp_if_cond_2 = __cs_local_BCSP_PnpAdd_status == 0;
                                        if (__cs_local_BCSP_PnpAdd___cs_tmp_if_cond_2)
                                        				{
tmain_4: IF(0,4,tmain_5)
                                        assert(!stopped);
                                        				}
                                        __CPROVER_assume(__cs_pc_cs[0] >= 5);
                                        				;
                                        				{
                                        static int __cs_local_BCSP_IoDecrement_pending;
                                        __cs_init_scalar(&__cs_local_BCSP_IoDecrement_pending, sizeof(int));
                                        __cs_local_BCSP_IoDecrement_pending = __CSEQ_atomic_dec();
                                        static _Bool __cs_local_BCSP_IoDecrement___cs_tmp_if_cond_1;
                                        __cs_init_scalar(&__cs_local_BCSP_IoDecrement___cs_tmp_if_cond_1, sizeof(_Bool));
                                        __cs_local_BCSP_IoDecrement___cs_tmp_if_cond_1 = __cs_local_BCSP_IoDecrement_pending == 0;
                                        if (__cs_local_BCSP_IoDecrement___cs_tmp_if_cond_1)
                                        						{
tmain_5: IF(0,5,tmain_6)
                                        stoppingEvent = 1;
                                        						}
                                        __CPROVER_assume(__cs_pc_cs[0] >= 6);
                                        						;
                                        __exit__BCSP_IoDecrement_2:
                                        						__CPROVER_assume(__cs_pc_cs[0] >= 6);
                                        						;
                                        						;
                                        				}
                                        				;
                                        __exit__BCSP_PnpAdd_1:
                                        				__CPROVER_assume(__cs_pc_cs[0] >= 6);
                                        				;
                                        				;
                                        		}
                                        		;
tmain_6: IF(0,6,tmain_7)
                                        __cs_retval__BCSP_PnpAdd_1;
                                        __exit_main:
                                        		__CPROVER_assume(__cs_pc_cs[0] >= 7);
                                        		;
                                        		;
tmain_7: 
                                        STOP_VOID(7);
                                        }
                                        int main(void)
                                        {
                                        unsigned __CPROVER_bitvector[3] __cs_tmp_t0_r0 = (unsigned __CPROVER_bitvector[3])nondet_uint();
                                        unsigned __CPROVER_bitvector[3] __cs_tmp_t1_r0 = (unsigned __CPROVER_bitvector[3])nondet_uint();
                                        unsigned __CPROVER_bitvector[3] __cs_tmp_t0_r1 = (unsigned __CPROVER_bitvector[3])nondet_uint();
                                        unsigned __CPROVER_bitvector[3] __cs_tmp_t1_r1 = (unsigned __CPROVER_bitvector[3])nondet_uint();
                                        unsigned __CPROVER_bitvector[3] __cs_tmp_t0_r2 = (unsigned __CPROVER_bitvector[3])nondet_uint();
/* round  0 */
                                        __CPROVER_assume(__cs_tmp_t0_r0 > 0);
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r0;
                                        __CPROVER_assume(__cs_pc_cs[0] > 0);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 7);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r0;
                                        __CPROVER_assume(__cs_pc_cs[1] <= 4);
                                        BCSP_PnpStop_0(__cs_threadargs[1]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
/* round  1 */
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        				__cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 7);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        		}
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r1;
                                        __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                        __CPROVER_assume(__cs_pc_cs[1] <= 4);
                                        BCSP_PnpStop_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
                                        __CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __CPROVER_assume(__cs_pc_cs[0] <= 7);
                                        main_thread();
                                        		}
                                        return 0;
                                        }
                                        
