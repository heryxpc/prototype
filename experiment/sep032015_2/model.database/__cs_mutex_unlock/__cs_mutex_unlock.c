# 117
int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock)
{
        __VERIFIER_assert((*__cs_mutex_to_unlock) != 0);
        __VERIFIER_assert((*__cs_mutex_to_unlock) != (-2));
        __VERIFIER_assert((*__cs_mutex_to_unlock) == (__cs_thread_index + 1));
        *__cs_mutex_to_unlock = -1;
        __CSEQ_message("lock released");
        return 0;
}
