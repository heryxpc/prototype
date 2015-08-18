# 101
int __cs_mutex_destroy(__cs_mutex_t *__cs_mutex_to_destroy)
{
        __VERIFIER_assert((*__cs_mutex_to_destroy) != 0);
        __VERIFIER_assert((*__cs_mutex_to_destroy) != (-2));
        __VERIFIER_assert((*__cs_mutex_to_destroy) == (-1));
        *__cs_mutex_to_destroy = -2;
        __CSEQ_message("lock destroyed");
        return 0;
}
