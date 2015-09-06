
//  P() {}

void * t1_0(void *__cs_param_t1_arg)
{

//  P() {}

   static int __cs_local_t1_k;

//  P() {}

   if (__cs_pc[1]>0|0>=__cs_pc_cs[1]) goto tt1_0_1;

//  P() {}

   __cs_init_scalar(&__cs_local_t1_k, sizeof(int));

//  P(__cs_local_t1_k,i,j) {}

   __cs_local_t1_k = 0;

//  P(__cs_local_t1_k,i,j) {__cs_local_t1_k==0}

   __cs_local_t1_k = 0;

//  P(__cs_local_t1_k,i,j) {}

tt1_0_1:   if (__cs_pc[1]>1|1>=__cs_pc_cs[1]) goto tt1_0_2;

//  P(__cs_local_t1_k,i,j) {}

   i += j;

//  P(__cs_local_t1_k,i,j) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i,j) {}

tt1_0_2:   if (__cs_pc[1]>2|2>=__cs_pc_cs[1]) goto tt1_0_3;

//  P(__cs_local_t1_k,i,j) {}

   i += j;

//  P(__cs_local_t1_k,i,j) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i,j) {}

tt1_0_3:   if (__cs_pc[1]>3|3>=__cs_pc_cs[1]) goto tt1_0_4;

//  P(__cs_local_t1_k,i,j) {}

   i += j;

//  P(__cs_local_t1_k,i,j) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i,j) {}

tt1_0_4:   if (__cs_pc[1]>4|4>=__cs_pc_cs[1]) goto tt1_0_5;

//  P(__cs_local_t1_k,i,j) {}

   i += j;

//  P(__cs_local_t1_k,i,j) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i,j) {}

tt1_0_5:   if (__cs_pc[1]>5|5>=__cs_pc_cs[1]) goto tt1_0_6;

//  P(__cs_local_t1_k,i,j) {}

   i += j;

//  P(__cs_local_t1_k,i,j) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i,j) {}

tt1_0_6:   if (__cs_pc[1]>6|6>=__cs_pc_cs[1]) goto tt1_0_7;

//  P(__cs_local_t1_k,i,j) {}

   i += j;

//  P(__cs_local_t1_k,i,j) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i,j) {}

tt1_0_7:   if (__cs_pc[1]>7|7>=__cs_pc_cs[1]) goto tt1_0_8;

//  P(__cs_local_t1_k,i,j) {}

   __VERIFIER_assume(!(__cs_local_t1_k<6));

//  P(__cs_local_t1_k,i,j) {}

__exit_loop_1:   __VERIFIER_assume(__cs_pc_cs[1]>=8);

//  P(__cs_local_t1_k,i,j) {}

__exit_t1:   __VERIFIER_assume(__cs_pc_cs[1]>=8);

//  P(__cs_local_t1_k,i,j) {}

tt1_0_8:   return 0;
}
