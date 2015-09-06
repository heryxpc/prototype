# 269
int main_thread(void)
{
        int __cs_param_main_argc;
        char **__cs_param_main_argv;
        if ((__cs_pc[0] > 0) | (0 >= __cs_pc_cs[0])) goto tmain_1;
        static __cs_t __cs_local_main_id1;
        __cs_init_scalar(&__cs_local_main_id1, sizeof(__cs_t));
        static __cs_t __cs_local_main_id2;
        __cs_init_scalar(&__cs_local_main_id2, sizeof(__cs_t));
        __cs_create(&__cs_local_main_id1, 0, t1_0, 0, 1);
        tmain_1: if ((__cs_pc[0] > 1) | (1 >= __cs_pc_cs[0])) goto tmain_2;
        __cs_create(&__cs_local_main_id2, 0, t2_0, 0, 2);
        static _Bool __cs_local_main___cs_tmp_if_cond_0;
        __cs_init_scalar(&__cs_local_main___cs_tmp_if_cond_0, sizeof(_Bool));
        tmain_2: if ((__cs_pc[0] > 2) | (2 >= __cs_pc_cs[0])) goto tmain_3;
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
        return 0;;
}
