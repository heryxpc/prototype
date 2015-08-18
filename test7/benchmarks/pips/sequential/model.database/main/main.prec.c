
//  P() {}

int main(void)
{

//  P() {}

   unsigned int __cs_tmp_t0_r0 = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0) {}

   unsigned int __cs_tmp_t1_r0 = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t1_r0) {}

   unsigned int __cs_tmp_t2_r0 = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t1_r0,__cs_tmp_t2_r0) {}

   unsigned int __cs_tmp_t0_r1 = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t1_r0,__cs_tmp_t2_r0) {}

   unsigned int __cs_tmp_t1_r1 = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t1_r0,__cs_tmp_t1_r1,
//    __cs_tmp_t2_r0) {}

   unsigned int __cs_tmp_t2_r1 = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t1_r0,__cs_tmp_t1_r1,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1) {}

   unsigned int __cs_tmp_t0_r2 = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t1_r0,
//    __cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1) {}

   /* round  0 */
   __VERIFIER_assume(__cs_tmp_t0_r0>0);

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t1_r0,
//    __cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1) {}

   __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1)
//    {__cs_thread_index==0}

   __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1)
//    {__cs_thread_index==0}

   __VERIFIER_assume(__cs_pc_cs[0]>0);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1)
//    {__cs_thread_index==0}

   __VERIFIER_assume(__cs_pc_cs[0]<=3);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1)
//    {__cs_thread_index==0}

   main_thread();

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

   __cs_pc[0] = __cs_pc_cs[0];

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

   if (__cs_active_thread[1]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_thread_index = 1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==1}

      __cs_pc_cs[1] = __cs_pc[1]+__cs_tmp_t1_r0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==1}

      __VERIFIER_assume(__cs_pc_cs[1]<=8);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==1}

      thr1_0(__cs_threadargs[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_pc[1] = __cs_pc_cs[1];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

   if (__cs_active_thread[2]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_thread_index = 2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==2}

      __cs_pc_cs[2] = __cs_pc[2]+__cs_tmp_t2_r0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==2}

      __VERIFIER_assume(__cs_pc_cs[2]<=8);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==2}

      thr1_1(__cs_threadargs[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_pc[2] = __cs_pc_cs[2];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

   /* round  1 */
   if (__cs_active_thread[0]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==0}

      __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==0}

      __VERIFIER_assume(__cs_pc_cs[0]>=__cs_pc[0]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==0}

      __VERIFIER_assume(__cs_pc_cs[0]<=3);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==0}

      main_thread();

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_pc[0] = __cs_pc_cs[0];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

   if (__cs_active_thread[1]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_thread_index = 1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==1}

      __cs_pc_cs[1] = __cs_pc[1]+__cs_tmp_t1_r1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==1}

      __VERIFIER_assume(__cs_pc_cs[1]>=__cs_pc[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==1}

      __VERIFIER_assume(__cs_pc_cs[1]<=8);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==1}

      thr1_0(__cs_threadargs[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_pc[1] = __cs_pc_cs[1];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

   if (__cs_active_thread[2]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_thread_index = 2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==2}

      __cs_pc_cs[2] = __cs_pc[2]+__cs_tmp_t2_r1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==2}

      __VERIFIER_assume(__cs_pc_cs[2]>=__cs_pc[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==2}

      __VERIFIER_assume(__cs_pc_cs[2]<=8);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==2}

      thr1_1(__cs_threadargs[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_pc[2] = __cs_pc_cs[2];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

   if (__cs_active_thread[0]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

      __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==0}

      __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==0}

      __VERIFIER_assume(__cs_pc_cs[0]>=__cs_pc[0]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==0}

      __VERIFIER_assume(__cs_pc_cs[0]<=3);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z)
//    {__cs_thread_index==0}

      main_thread();
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    thr1_0:0`__cs_local_thr1_i,thr1_0:0`__cs_local_thr1_j,
//    thr1_0:0`__cs_local_thr1_k,thr1_0:0`__cs_local_thr1_x,
//    thr1_0:0`__cs_local_thr1_y,thr1_0:0`__cs_local_thr1_z,
//    thr1_1:0`__cs_local_thr1_i,thr1_1:0`__cs_local_thr1_j,
//    thr1_1:0`__cs_local_thr1_k,thr1_1:0`__cs_local_thr1_x,
//    thr1_1:0`__cs_local_thr1_y,thr1_1:0`__cs_local_thr1_z) {}

   return 0;
}
