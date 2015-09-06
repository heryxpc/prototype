# 211
void *t2_0(void *__cs_param_t2_arg)
{
        static int __cs_local_t2_k;
        if ((__cs_pc[2] > 0) | (0 >= __cs_pc_cs[2])) goto tt2_0_1;
        __cs_init_scalar(&__cs_local_t2_k, sizeof(int));
        __cs_local_t2_k = 0;
        __cs_local_t2_k = 0;
        {
                tt2_0_1: if ((__cs_pc[2] > 1) | (1 >= __cs_pc_cs[2])) goto tt2_0_2;
                j += i;
        }
        ;
        __cs_local_t2_k++;
        {
                tt2_0_2: if ((__cs_pc[2] > 2) | (2 >= __cs_pc_cs[2])) goto tt2_0_3;
                j += i;
        }
        ;
        __cs_local_t2_k++;
        {
                tt2_0_3: if ((__cs_pc[2] > 3) | (3 >= __cs_pc_cs[2])) goto tt2_0_4;
                j += i;
        }
        ;
        __cs_local_t2_k++;
        {
                tt2_0_4: if ((__cs_pc[2] > 4) | (4 >= __cs_pc_cs[2])) goto tt2_0_5;
                j += i;
        }
        ;
        __cs_local_t2_k++;
        {
                tt2_0_5: if ((__cs_pc[2] > 5) | (5 >= __cs_pc_cs[2])) goto tt2_0_6;
                j += i;
        }
        ;
        __cs_local_t2_k++;
        {
                tt2_0_6: if ((__cs_pc[2] > 6) | (6 >= __cs_pc_cs[2])) goto tt2_0_7;
                j += i;
        }
        ;
        __cs_local_t2_k++;
        tt2_0_7: if ((__cs_pc[2] > 7) | (7 >= __cs_pc_cs[2])) goto tt2_0_8;
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
        return 0;;
}
