# 134
int __cs_cond_wait_1(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
{
        __VERIFIER_assert((*__cs_cond_to_wait_for) != 0);
        __VERIFIER_assert((*__cs_cond_to_wait_for) != (-2));
        __cs_mutex_unlock(__cs_m);
}
