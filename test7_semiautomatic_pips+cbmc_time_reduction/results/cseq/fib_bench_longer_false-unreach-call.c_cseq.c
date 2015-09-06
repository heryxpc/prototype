void __VERIFIER_assert(int x) { if(!(x)) {ERROR: goto ERROR;}}
extern void __VERIFIER_assume(int);
extern int __VERIFIER_nondet_int(void);
extern unsigned int __VERIFIER_nondet_uint(void);
extern _Bool __VERIFIER_nondet_bool(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned char __VERIFIER_nondet_uchar(void);/*
 *  generated by CSeq [ 0000 / 0000 ]
 * 
 *                      2C9F merger-0.0-2015.07.09
 *                      FB59 parser-0.0-2015.06.26
 *                      AB0B module-0.0-2015.07.16 ]
 *
 *  2015-08-24 16:08:57
 *
 *  params:
 *    --unwind 11, --rounds 2, -i fib_bench_longer_false-unreach-call.c, -l out, --backend cpachecker, 
 *
 *  modules:
 *    36D1 workarounds-0.0 ()
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
                                        unsigned int __cs_active_thread[THREADS + 1] = {1};
                                        unsigned int __cs_pc[THREADS + 1];
                                        unsigned int __cs_pc_cs[THREADS + 1];
                                        unsigned int __cs_thread_index;
                                        unsigned int __cs_thread_lines[] = {3, 8, 8};
                                        void *__cs_safe_malloc(int __cs_size)
                                        {
                                        void *__cs_ptr = malloc(__cs_size);
                                        __VERIFIER_assume(__cs_ptr);
                                        		return __cs_ptr;
                                        }
                                        void __cs_init_scalar(void *__cs_var, int __cs_size)
                                        {
                                        if (__cs_size == (sizeof(int)))
                                        *((int *) __cs_var) = __VERIFIER_nondet_int();
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
                                        __VERIFIER_assume(__cs_pc[__cs_id] == __cs_thread_lines[__cs_id]);
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
                                        __VERIFIER_assert((*__cs_mutex_to_destroy) != 0);
                                        __VERIFIER_assert((*__cs_mutex_to_destroy) != (-2));
                                        __VERIFIER_assert((*__cs_mutex_to_destroy) == (-1));
                                        *__cs_mutex_to_destroy = -2;
                                        __CSEQ_message("lock destroyed");
                                        return 0;
                                        }
                                        int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock)
                                        {
                                        __VERIFIER_assert((*__cs_mutex_to_lock) != 0);
                                        __VERIFIER_assert((*__cs_mutex_to_lock) != (-2));
                                        __VERIFIER_assume((*__cs_mutex_to_lock) == (-1));
                                        *__cs_mutex_to_lock = __cs_thread_index + 1;
                                        __CSEQ_message("lock acquired");
                                        return 0;
                                        }
                                        int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock)
                                        {
                                        __VERIFIER_assert((*__cs_mutex_to_unlock) != 0);
                                        __VERIFIER_assert((*__cs_mutex_to_unlock) != (-2));
                                        __VERIFIER_assert((*__cs_mutex_to_unlock) == (__cs_thread_index + 1));
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
                                        __VERIFIER_assert((*__cs_cond_to_wait_for) != 0);
                                        __VERIFIER_assert((*__cs_cond_to_wait_for) != (-2));
                                        __cs_mutex_unlock(__cs_m);
                                        }
                                        int __cs_cond_wait_2(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
                                        {
                                        __VERIFIER_assume((*__cs_cond_to_wait_for) == 1);
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
                                        int i = 1;
                                        int j = 1;
                                        void *t1_0(void *__cs_param_t1_arg)
                                        {
                                        static int __cs_local_t1_k;
IF(1,0,tt1_0_1)
                                        __cs_init_scalar(&__cs_local_t1_k, sizeof(int));
                                        __cs_local_t1_k = 0;
                                        __cs_local_t1_k = 0;
                                        		{
tt1_0_1: IF(1,1,tt1_0_2)
                                        i += j;
                                        		}
                                        		;
                                        __cs_local_t1_k++;
                                        		{
tt1_0_2: IF(1,2,tt1_0_3)
                                        i += j;
                                        		}
                                        		;
                                        __cs_local_t1_k++;
                                        		{
tt1_0_3: IF(1,3,tt1_0_4)
                                        i += j;
                                        		}
                                        		;
                                        __cs_local_t1_k++;
                                        		{
tt1_0_4: IF(1,4,tt1_0_5)
                                        i += j;
                                        		}
                                        		;
                                        __cs_local_t1_k++;
                                        		{
tt1_0_5: IF(1,5,tt1_0_6)
                                        i += j;
                                        		}
                                        		;
                                        __cs_local_t1_k++;
                                        		{
tt1_0_6: IF(1,6,tt1_0_7)
                                        i += j;
                                        		}
                                        		;
                                        __cs_local_t1_k++;
tt1_0_7: IF(1,7,tt1_0_8)
                                        __VERIFIER_assume(!(__cs_local_t1_k < 6));
                                        __exit_loop_1:
                                        		__VERIFIER_assume(__cs_pc_cs[1] >= 8);
                                        		;
                                        		;
                                        goto __exit_t1;
                                        		;
                                        __exit_t1:
                                        		__VERIFIER_assume(__cs_pc_cs[1] >= 8);
                                        		;
                                        		;
tt1_0_8: 
                                        STOP_NONVOID(8);
                                        }
                                        void *t2_0(void *__cs_param_t2_arg)
                                        {
                                        static int __cs_local_t2_k;
IF(2,0,tt2_0_1)
                                        __cs_init_scalar(&__cs_local_t2_k, sizeof(int));
                                        __cs_local_t2_k = 0;
                                        __cs_local_t2_k = 0;
                                        		{
tt2_0_1: IF(2,1,tt2_0_2)
                                        j += i;
                                        		}
                                        		;
                                        __cs_local_t2_k++;
                                        		{
tt2_0_2: IF(2,2,tt2_0_3)
                                        j += i;
                                        		}
                                        		;
                                        __cs_local_t2_k++;
                                        		{
tt2_0_3: IF(2,3,tt2_0_4)
                                        j += i;
                                        		}
                                        		;
                                        __cs_local_t2_k++;
                                        		{
tt2_0_4: IF(2,4,tt2_0_5)
                                        j += i;
                                        		}
                                        		;
                                        __cs_local_t2_k++;
                                        		{
tt2_0_5: IF(2,5,tt2_0_6)
                                        j += i;
                                        		}
                                        		;
                                        __cs_local_t2_k++;
                                        		{
tt2_0_6: IF(2,6,tt2_0_7)
                                        j += i;
                                        		}
                                        		;
                                        __cs_local_t2_k++;
tt2_0_7: IF(2,7,tt2_0_8)
                                        __VERIFIER_assume(!(__cs_local_t2_k < 6));
                                        __exit_loop_2:
                                        		__VERIFIER_assume(__cs_pc_cs[2] >= 8);
                                        		;
                                        		;
                                        goto __exit_t2;
                                        		;
                                        __exit_t2:
                                        		__VERIFIER_assume(__cs_pc_cs[2] >= 8);
                                        		;
                                        		;
tt2_0_8: 
                                        STOP_NONVOID(8);
                                        }
                                        int main_thread(void)
                                        {
                                        int __cs_param_main_argc;
                                        		char **__cs_param_main_argv;
IF(0,0,tmain_1)
                                        static __cs_t __cs_local_main_id1;
                                        __cs_init_scalar(&__cs_local_main_id1, sizeof(__cs_t));
                                        static __cs_t __cs_local_main_id2;
                                        __cs_init_scalar(&__cs_local_main_id2, sizeof(__cs_t));
                                        __cs_create(&__cs_local_main_id1, 0, t1_0, 0, 1);
tmain_1: IF(0,1,tmain_2)
                                        __cs_create(&__cs_local_main_id2, 0, t2_0, 0, 2);
                                        static _Bool __cs_local_main___cs_tmp_if_cond_0;
                                        __cs_init_scalar(&__cs_local_main___cs_tmp_if_cond_0, sizeof(_Bool));
tmain_2: IF(0,2,tmain_3)
                                        __cs_local_main___cs_tmp_if_cond_0 = (i >= 377) || (j >= 377);
                                        if (__cs_local_main___cs_tmp_if_cond_0)
                                        		{
                                        __VERIFIER_assert(0);
                                        		}
                                        		;
                                        goto __exit_main;
                                        		;
                                        __exit_main:
                                        		__VERIFIER_assume(__cs_pc_cs[0] >= 3);
                                        		;
                                        		;
tmain_3: 
                                        STOP_NONVOID(3);
                                        }
                                        int main(void)
                                        {
                                        unsigned int __cs_tmp_t0_r0 = __VERIFIER_nondet_uint();
                                        unsigned int __cs_tmp_t1_r0 = __VERIFIER_nondet_uint();
                                        unsigned int __cs_tmp_t2_r0 = __VERIFIER_nondet_uint();
                                        unsigned int __cs_tmp_t0_r1 = __VERIFIER_nondet_uint();
                                        unsigned int __cs_tmp_t1_r1 = __VERIFIER_nondet_uint();
                                        unsigned int __cs_tmp_t2_r1 = __VERIFIER_nondet_uint();
                                        unsigned int __cs_tmp_t0_r2 = __VERIFIER_nondet_uint();
/* round  0 */
                                        __VERIFIER_assume(__cs_tmp_t0_r0 > 0);
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r0;
                                        __VERIFIER_assume(__cs_pc_cs[0] > 0);
                                        __VERIFIER_assume(__cs_pc_cs[0] <= 3);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r0;
                                        __VERIFIER_assume(__cs_pc_cs[1] <= 8);
                                        t1_0(__cs_threadargs[1]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
                                        if (__cs_active_thread[2] == 1)
                                        		{
                                        __cs_thread_index = 2;
                                        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r0;
                                        __VERIFIER_assume(__cs_pc_cs[2] <= 8);
                                        t2_0(__cs_threadargs[2]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
/* round  1 */
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        				__cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                                        __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __VERIFIER_assume(__cs_pc_cs[0] <= 3);
                                        main_thread();
                                        __cs_pc[0] = __cs_pc_cs[0];
                                        		}
                                        if (__cs_active_thread[1] == 1)
                                        		{
                                        __cs_thread_index = 1;
                                        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r1;
                                        __VERIFIER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                        __VERIFIER_assume(__cs_pc_cs[1] <= 8);
                                        t1_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[1] = __cs_pc_cs[1];
                                        		}
                                        if (__cs_active_thread[2] == 1)
                                        		{
                                        __cs_thread_index = 2;
                                        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r1;
                                        __VERIFIER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                        __VERIFIER_assume(__cs_pc_cs[2] <= 8);
                                        t2_0(__cs_threadargs[__cs_thread_index]);
                                        __cs_pc[2] = __cs_pc_cs[2];
                                        		}
                                        if (__cs_active_thread[0] == 1)
                                        		{
                                        __cs_thread_index = 0;
                                        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
                                        __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                                        __VERIFIER_assume(__cs_pc_cs[0] <= 3);
                                        main_thread();
                                        		}
                                        return 0;
                                        }
                                        

