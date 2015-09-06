# 108
int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock)
{
        __VERIFIER_assert((*__cs_mutex_to_lock) != 0);
        __VERIFIER_assert((*__cs_mutex_to_lock) != (-2));
        __VERIFIER_assume((*__cs_mutex_to_lock) == (-1));
        *__cs_mutex_to_lock = __cs_thread_index + 1;
        __CSEQ_message("lock acquired");
        return 0;
}
