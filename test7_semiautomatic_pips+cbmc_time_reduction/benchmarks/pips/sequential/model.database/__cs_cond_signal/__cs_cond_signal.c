# 146
int __cs_cond_signal(__cs_cond_t *__cs_cond_to_signal)
{
        *__cs_cond_to_signal = 1;
        __CSEQ_message("conditional variable signal");
        return 0;
}
