
//  P() {}

int main_thread(void)
{

//  P() {}

   int __cs_param_main_argc;

//  P(__cs_param_main_argc) {}

   char **__cs_param_main_argv;

//  P(__cs_param_main_argc) {}

   if (__cs_pc[0]>0|0>=__cs_pc_cs[0]) goto tmain_1;

//  P(__cs_param_main_argc) {}

   static __cs_t __cs_local_main_id1;

//  P(__cs_param_main_argc) {}

   __cs_init_scalar(&__cs_local_main_id1, sizeof(__cs_t));

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

   static __cs_t __cs_local_main_id2;

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

   __cs_init_scalar(&__cs_local_main_id2, sizeof(__cs_t));

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

   __cs_create(&__cs_local_main_id1, 0, t1_0, 0, 1);

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

tmain_1:   if (__cs_pc[0]>1|1>=__cs_pc_cs[0]) goto tmain_2;

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

   __cs_create(&__cs_local_main_id2, 0, t2_0, 0, 2);

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

   static _Bool __cs_local_main___cs_tmp_if_cond_0;

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

   __cs_init_scalar(&__cs_local_main___cs_tmp_if_cond_0, sizeof(_Bool));

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

tmain_2:   if (__cs_pc[0]>2|2>=__cs_pc_cs[0]) goto tmain_3;

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

   __cs_local_main___cs_tmp_if_cond_0 = i>=377||j>=377;

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

   if (__cs_local_main___cs_tmp_if_cond_0) {

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

      __VERIFIER_assert(0);
   }

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

__exit_main:   __VERIFIER_assume(__cs_pc_cs[0]>=3);

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

tmain_3:   return 0;
}
