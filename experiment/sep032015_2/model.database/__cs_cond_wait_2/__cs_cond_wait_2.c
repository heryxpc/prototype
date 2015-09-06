# 138
int __cs_cond_wait_2(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
{
        __VERIFIER_assume((*__cs_cond_to_wait_for) == 1);
        __cs_mutex_lock(__cs_m);
        return 0;
}
