# 815
int main_thread(void)
{
      ;
      if ((__cs_pc[0] > 0) | (0 >= __cs_pc_cs[0])) goto tmain_1;
      static __cs_t __cs_local_main_t;
      __cs_init_scalar(&__cs_local_main_t, sizeof(__cs_t));
      {
        __cs_create(&__cs_local_main_t, 0, thr1_0, 0, 1);
}
;
{
        tmain_1: if ((__cs_pc[0] > 1) | (1 >= __cs_pc_cs[0])) goto tmain_2;
        __cs_create(&__cs_local_main_t, 0, thr1_1, 0, 2);
}
;
tmain_2: if ((__cs_pc[0] > 2) | (2 >= __cs_pc_cs[0])) goto tmain_3;
__VERIFIER_assume(!1);
__exit_loop_8:
__VERIFIER_assume(__cs_pc_cs[0] >= 3);
;
;
__exit_main:
__VERIFIER_assume(__cs_pc_cs[0] >= 3);
;
;
tmain_3:
return 0;;
}
