# 299
int main(void)
{
        unsigned int __cs_tmp_t0_r0 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t1_r0 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t2_r0 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t0_r1 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t1_r1 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t2_r1 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t0_r2 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t1_r2 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t2_r2 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t0_r3 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t1_r3 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t2_r3 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t0_r4 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t1_r4 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t2_r4 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t0_r5 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t1_r5 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t2_r5 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t0_r6 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t1_r6 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t2_r6 = __VERIFIER_nondet_uint();
        unsigned int __cs_tmp_t0_r7 = __VERIFIER_nondet_uint();
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
/* round  2 */
if (__cs_active_thread[0] == 1)
{
    __cs_thread_index = 0;
    __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
    __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
    __VERIFIER_assume(__cs_pc_cs[0] <= 3);
    main_thread();
    __cs_pc[0] = __cs_pc_cs[0];
}
if (__cs_active_thread[1] == 1)
{
        __cs_thread_index = 1;
        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r2;
        __VERIFIER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
        __VERIFIER_assume(__cs_pc_cs[1] <= 8);
        t1_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[1] = __cs_pc_cs[1];
}
if (__cs_active_thread[2] == 1)
{
        __cs_thread_index = 2;
        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r2;
        __VERIFIER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
        __VERIFIER_assume(__cs_pc_cs[2] <= 8);
        t2_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[2] = __cs_pc_cs[2];
}
/* round  3 */
if (__cs_active_thread[0] == 1)
{
    __cs_thread_index = 0;
    __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r3;
    __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
    __VERIFIER_assume(__cs_pc_cs[0] <= 3);
    main_thread();
    __cs_pc[0] = __cs_pc_cs[0];
}
if (__cs_active_thread[1] == 1)
{
        __cs_thread_index = 1;
        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r3;
        __VERIFIER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
        __VERIFIER_assume(__cs_pc_cs[1] <= 8);
        t1_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[1] = __cs_pc_cs[1];
}
if (__cs_active_thread[2] == 1)
{
        __cs_thread_index = 2;
        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r3;
        __VERIFIER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
        __VERIFIER_assume(__cs_pc_cs[2] <= 8);
        t2_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[2] = __cs_pc_cs[2];
}
/* round  4 */
if (__cs_active_thread[0] == 1)
{
    __cs_thread_index = 0;
    __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r4;
    __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
    __VERIFIER_assume(__cs_pc_cs[0] <= 3);
    main_thread();
    __cs_pc[0] = __cs_pc_cs[0];
}
if (__cs_active_thread[1] == 1)
{
        __cs_thread_index = 1;
        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r4;
        __VERIFIER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
        __VERIFIER_assume(__cs_pc_cs[1] <= 8);
        t1_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[1] = __cs_pc_cs[1];
}
if (__cs_active_thread[2] == 1)
{
        __cs_thread_index = 2;
        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r4;
        __VERIFIER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
        __VERIFIER_assume(__cs_pc_cs[2] <= 8);
        t2_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[2] = __cs_pc_cs[2];
}
/* round  5 */
if (__cs_active_thread[0] == 1)
{
    __cs_thread_index = 0;
    __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r5;
    __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
    __VERIFIER_assume(__cs_pc_cs[0] <= 3);
    main_thread();
    __cs_pc[0] = __cs_pc_cs[0];
}
if (__cs_active_thread[1] == 1)
{
        __cs_thread_index = 1;
        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r5;
        __VERIFIER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
        __VERIFIER_assume(__cs_pc_cs[1] <= 8);
        t1_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[1] = __cs_pc_cs[1];
}
if (__cs_active_thread[2] == 1)
{
        __cs_thread_index = 2;
        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r5;
        __VERIFIER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
        __VERIFIER_assume(__cs_pc_cs[2] <= 8);
        t2_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[2] = __cs_pc_cs[2];
}
/* round  6 */
if (__cs_active_thread[0] == 1)
{
    __cs_thread_index = 0;
    __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r6;
    __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
    __VERIFIER_assume(__cs_pc_cs[0] <= 3);
    main_thread();
    __cs_pc[0] = __cs_pc_cs[0];
}
if (__cs_active_thread[1] == 1)
{
        __cs_thread_index = 1;
        __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r6;
        __VERIFIER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
        __VERIFIER_assume(__cs_pc_cs[1] <= 8);
        t1_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[1] = __cs_pc_cs[1];
}
if (__cs_active_thread[2] == 1)
{
        __cs_thread_index = 2;
        __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r6;
        __VERIFIER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
        __VERIFIER_assume(__cs_pc_cs[2] <= 8);
        t2_0(__cs_threadargs[__cs_thread_index]);
        __cs_pc[2] = __cs_pc_cs[2];
}
if (__cs_active_thread[0] == 1)
{
        __cs_thread_index = 0;
        __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r7;
        __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
        __VERIFIER_assume(__cs_pc_cs[0] <= 3);
        main_thread();
}
return 0;
}
