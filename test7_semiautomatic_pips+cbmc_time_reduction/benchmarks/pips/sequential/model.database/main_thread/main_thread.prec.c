
//  P() {}

int main_thread(void)
{

//  P() {}

   if (__cs_pc[0]>0|0>=__cs_pc_cs[0]) goto tmain_1;

//  P() {}

   static __cs_t __cs_local_main_t;

//  P() {}

   __cs_init_scalar(&__cs_local_main_t, sizeof(__cs_t));

//  P(__cs_local_main_t) {}

   __cs_create(&__cs_local_main_t, 0, thr1_0, 0, 1);

//  P(__cs_local_main_t) {}

tmain_1:   if (__cs_pc[0]>1|1>=__cs_pc_cs[0]) goto tmain_2;

//  P(__cs_local_main_t) {}

   __cs_create(&__cs_local_main_t, 0, thr1_1, 0, 2);

//  P(__cs_local_main_t) {}

tmain_2:   if (__cs_pc[0]>2|2>=__cs_pc_cs[0]) goto tmain_3;

//  P(__cs_local_main_t) {}

   __VERIFIER_assume(!1);

//  P(__cs_local_main_t) {}

__exit_loop_8:   __VERIFIER_assume(__cs_pc_cs[0]>=3);

//  P(__cs_local_main_t) {}

__exit_main:   __VERIFIER_assume(__cs_pc_cs[0]>=3);

//  P(__cs_local_main_t) {}

tmain_3:   return 0;
}
