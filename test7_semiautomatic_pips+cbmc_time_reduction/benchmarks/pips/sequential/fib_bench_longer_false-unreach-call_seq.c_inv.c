// <--------PROPERTIES i#init==1, j#init==1 AND i==1, j==1 REMAIN INVARIANT DESPITE THE FACT THAT THEY DO CHANGE---->
//  P() {}

void __CSEQ_message(char *__cs_message)
{
}

//  P() {0==-1}

int __cs_cond_init(__cs_cond_t *__cs_cond_to_init, void *__cs_attr)
{

//  P() {0==-1}

   *__cs_cond_to_init = -1;

//  P() {0==-1}

   return 0;
}

//  P() {0==-1}

int __cs_cond_signal(__cs_cond_t *__cs_cond_to_signal)
{

//  P() {0==-1}

   *__cs_cond_to_signal = 1;

//  P() {0==-1}

   __CSEQ_message("conditional variable signal");

//  P() {0==-1}

   return 0;
}

//  P() {0==-1}

int __cs_cond_wait_1(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
{

//  P() {0==-1}

   *__cs_cond_to_wait_for!=0?(void) 0:__assert_fail("((*__cs_cond_to_wait_for) != 0)", "./fib_bench_longer_false-unreach-call_seq.c", 142, __func__);

//  P() {0==-1}

   *__cs_cond_to_wait_for!=-2?(void) 0:__assert_fail("((*__cs_cond_to_wait_for) != (-2))", "./fib_bench_longer_false-unreach-call_seq.c", 143, __func__);

//  P() {0==-1}

   __cs_mutex_unlock(__cs_m);
}

//  P() {0==-1}

int __cs_cond_wait_2(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
{

//  P() {0==-1}

   !(*__cs_cond_to_wait_for==1)?(void) 0:__assert_fail("!((*__cs_cond_to_wait_for) == 1)", "./fib_bench_longer_false-unreach-call_seq.c", 148, __func__);

//  P() {0==-1}

   __cs_mutex_lock(__cs_m);

//  P() {0==-1}

   return 0;
}

//  P() {1<=__cs_threadID, __cs_threadID<=2}

int __cs_create(__cs_t *__cs_new_thread_id, void *__cs_attr, void *(*__cs_t)(void *), void *__cs_arg, int __cs_threadID)
{

//  P() {1<=__cs_threadID, __cs_threadID<=2}

   if (__cs_threadID>2) {

//  P() {0==-1}

      return 0;
   }

//  P() {1<=__cs_threadID, __cs_threadID<=2}

   *__cs_new_thread_id = __cs_threadID;

//  P(__cs_threadID) {}

   __cs_active_thread[__cs_threadID] = 1;

//  P(__cs_threadID) {}

   __cs_threadargs[__cs_threadID] = __cs_arg;

//  P(__cs_threadID) {}

   __CSEQ_message("thread spawned");

//  P(__cs_threadID) {}

   return 0;
}

//  P() {0==-1}

int __cs_exit(void *__cs_value_ptr)
{

//  P() {0==-1}

   return 0;
}

//  P() {}

void __cs_init_scalar(void *__cs_var, int __cs_size)
{

//  P() {}

   if (__cs_size==sizeof(int)) {

//  P() {}

      *((int *) __cs_var);
   }
   else {

//  P() {}

      char *__cs_ptr = (char *) __cs_var;

//  P() {}

      int __cs_j;
   }
}

//  P() {0==-1}

int __cs_join(__cs_t __cs_id, void **__cs_value_ptr)
{

//  P() {0==-1}

   !(__cs_pc[__cs_id]==__cs_thread_lines[__cs_id])?(void) 0:__assert_fail("!(__cs_pc[__cs_id] == __cs_thread_lines[__cs_id])", "./fib_bench_longer_false-unreach-call_seq.c", 94, __func__);

//  P() {0==-1}

   return 0;
}

//  P() {0==-1}

int __cs_mutex_destroy(__cs_mutex_t *__cs_mutex_to_destroy)
{

//  P() {0==-1}

   *__cs_mutex_to_destroy!=0?(void) 0:__assert_fail("((*__cs_mutex_to_destroy) != 0)", "./fib_bench_longer_false-unreach-call_seq.c", 109, __func__);

//  P() {0==-1}

   *__cs_mutex_to_destroy!=-2?(void) 0:__assert_fail("((*__cs_mutex_to_destroy) != (-2))", "./fib_bench_longer_false-unreach-call_seq.c", 110, __func__);

//  P() {0==-1}

   *__cs_mutex_to_destroy==-1?(void) 0:__assert_fail("((*__cs_mutex_to_destroy) == (-1))", "./fib_bench_longer_false-unreach-call_seq.c", 111, __func__);

//  P() {0==-1}

   *__cs_mutex_to_destroy = -2;

//  P() {0==-1}

   __CSEQ_message("lock destroyed");

//  P() {0==-1}

   return 0;
}

//  P() {0==-1}

int __cs_mutex_init(__cs_mutex_t *__cs_m, int __cs_val)
{

//  P() {0==-1}

   *__cs_m = -1;

//  P() {0==-1}

   return 0;
}

//  P() {0==-1}

int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock)
{

//  P() {0==-1}

   *__cs_mutex_to_lock!=0?(void) 0:__assert_fail("((*__cs_mutex_to_lock) != 0)", "./fib_bench_longer_false-unreach-call_seq.c", 118, __func__);

//  P() {0==-1}

   *__cs_mutex_to_lock!=-2?(void) 0:__assert_fail("((*__cs_mutex_to_lock) != (-2))", "./fib_bench_longer_false-unreach-call_seq.c", 119, __func__);

//  P() {0==-1}

   !(*__cs_mutex_to_lock==-1)?(void) 0:__assert_fail("!((*__cs_mutex_to_lock) == (-1))", "./fib_bench_longer_false-unreach-call_seq.c", 120, __func__);

//  P() {0==-1}

   *__cs_mutex_to_lock = __cs_thread_index+1;

//  P() {0==-1}

   __CSEQ_message("lock acquired");

//  P() {0==-1}

   return 0;
}

//  P() {0==-1}

int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock)
{

//  P() {0==-1}

   *__cs_mutex_to_unlock!=0?(void) 0:__assert_fail("((*__cs_mutex_to_unlock) != 0)", "./fib_bench_longer_false-unreach-call_seq.c", 127, __func__);

//  P() {0==-1}

   *__cs_mutex_to_unlock!=-2?(void) 0:__assert_fail("((*__cs_mutex_to_unlock) != (-2))", "./fib_bench_longer_false-unreach-call_seq.c", 128, __func__);

//  P() {0==-1}

   *__cs_mutex_to_unlock==__cs_thread_index+1?(void) 0:__assert_fail("((*__cs_mutex_to_unlock) == (__cs_thread_index + 1))", "./fib_bench_longer_false-unreach-call_seq.c", 129, __func__);

//  P() {0==-1}

   *__cs_mutex_to_unlock = -1;

//  P() {0==-1}

   __CSEQ_message("lock released");

//  P() {0==-1}

   return 0;
}

//  P() {0==-1}

void * __cs_safe_malloc(int __cs_size)
{

//  P() {0==-1}

   void *__cs_ptr = malloc(__cs_size);

//  P() {0==-1}

   !__cs_ptr?(void) 0:__assert_fail("!(__cs_ptr)", "./fib_bench_longer_false-unreach-call_seq.c", 63, __func__);

//  P() {0==-1}

   return __cs_ptr;
}

//  P() {i==1, j==1}

int main(void)
{
   //<------------------ REMOVED __VERIFIER_nondet_uint() TO PROVIDE NON DETERMINISM ON PIPS---------------->

//  P() {i==1, j==1}

   unsigned int __cs_tmp_t0_r0;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0) {i==1, j==1}

   unsigned int __cs_tmp_t1_r0;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t1_r0) {i==1, j==1}

   unsigned int __cs_tmp_t2_r0;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t1_r0,__cs_tmp_t2_r0) {i==1, j==1}

   unsigned int __cs_tmp_t0_r1;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t1_r0,__cs_tmp_t2_r0)
//    {i==1, j==1}

   unsigned int __cs_tmp_t1_r1;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t1_r0,__cs_tmp_t1_r1,
//    __cs_tmp_t2_r0) {i==1, j==1}

   unsigned int __cs_tmp_t2_r1;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t1_r0,__cs_tmp_t1_r1,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1) {i==1, j==1}

   unsigned int __cs_tmp_t0_r2;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t1_r0,
//    __cs_tmp_t1_r1,__cs_tmp_t2_r0,__cs_tmp_t2_r1) {i==1, j==1}

   unsigned int __cs_tmp_t1_r2;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t1_r0,
//    __cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t2_r0,__cs_tmp_t2_r1)
//    {i==1, j==1}

   unsigned int __cs_tmp_t2_r2;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t1_r0,
//    __cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    __cs_tmp_t2_r2) {i==1, j==1}

   unsigned int __cs_tmp_t0_r3;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t2_r0,
//    __cs_tmp_t2_r1,__cs_tmp_t2_r2) {i==1, j==1}

   unsigned int __cs_tmp_t1_r3;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t1_r3,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2) {i==1, j==1}

   unsigned int __cs_tmp_t2_r3;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t1_r3,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3)
//    {i==1, j==1}

   unsigned int __cs_tmp_t0_r4;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,
//    __cs_tmp_t2_r3) {i==1, j==1}

   unsigned int __cs_tmp_t1_r4;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    __cs_tmp_t2_r2,__cs_tmp_t2_r3) {i==1, j==1}

   unsigned int __cs_tmp_t2_r4;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    __cs_tmp_t2_r2,__cs_tmp_t2_r3,__cs_tmp_t2_r4) {i==1, j==1}

   unsigned int __cs_tmp_t0_r5;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t1_r0,__cs_tmp_t1_r1,
//    __cs_tmp_t1_r2,__cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t2_r0,
//    __cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,__cs_tmp_t2_r4)
//    {i==1, j==1}

   unsigned int __cs_tmp_t1_r5;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t1_r0,__cs_tmp_t1_r1,
//    __cs_tmp_t1_r2,__cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4) {i==1, j==1}

   unsigned int __cs_tmp_t2_r5;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t1_r0,__cs_tmp_t1_r1,
//    __cs_tmp_t1_r2,__cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5) {i==1, j==1}

   unsigned int __cs_tmp_t0_r6;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,__cs_tmp_t1_r0,
//    __cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t1_r3,__cs_tmp_t1_r4,
//    __cs_tmp_t1_r5,__cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,
//    __cs_tmp_t2_r3,__cs_tmp_t2_r4,__cs_tmp_t2_r5) {i==1, j==1}

   unsigned int __cs_tmp_t1_r6;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,__cs_tmp_t1_r0,
//    __cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t1_r3,__cs_tmp_t1_r4,
//    __cs_tmp_t1_r5,__cs_tmp_t1_r6,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    __cs_tmp_t2_r2,__cs_tmp_t2_r3,__cs_tmp_t2_r4,__cs_tmp_t2_r5)
//    {i==1, j==1}

   unsigned int __cs_tmp_t2_r6;
   // = __VERIFIER_nondet_uint();

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,__cs_tmp_t1_r0,
//    __cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t1_r3,__cs_tmp_t1_r4,
//    __cs_tmp_t1_r5,__cs_tmp_t1_r6,__cs_tmp_t2_r0,__cs_tmp_t2_r1,
//    __cs_tmp_t2_r2,__cs_tmp_t2_r3,__cs_tmp_t2_r4,__cs_tmp_t2_r5,
//    __cs_tmp_t2_r6) {i==1, j==1}

   unsigned int __cs_tmp_t0_r7;

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,__cs_tmp_t0_r7,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t1_r3,
//    __cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,__cs_tmp_t2_r0,
//    __cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,__cs_tmp_t2_r4,
//    __cs_tmp_t2_r5,__cs_tmp_t2_r6) {i==1, j==1}

   // = __VERIFIER_nondet_uint();
   /* round  0 */
   !(__cs_tmp_t0_r0>0)?(void) 0:__assert_fail("!(__cs_tmp_t0_r0 > 0)", "./fib_bench_longer_false-unreach-call_seq.c", 333, __func__);

//  P(__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,__cs_tmp_t0_r3,
//    __cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,__cs_tmp_t0_r7,
//    __cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,__cs_tmp_t1_r3,
//    __cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,__cs_tmp_t2_r0,
//    __cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,__cs_tmp_t2_r4,
//    __cs_tmp_t2_r5,__cs_tmp_t2_r6) {i==1, j==1, __cs_tmp_t0_r0<=0}

   __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6)
//    {__cs_thread_index==0, i==1, j==1, __cs_tmp_t0_r0<=0}

   __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6)
//    {__cs_thread_index==0, i==1, j==1, __cs_tmp_t0_r0<=0}

   !(__cs_pc_cs[0]>0)?(void) 0:__assert_fail("!(__cs_pc_cs[0] > 0)", "./fib_bench_longer_false-unreach-call_seq.c", 336, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6)
//    {__cs_thread_index==0, i==1, j==1, __cs_tmp_t0_r0<=0}

   !(__cs_pc_cs[0]<=3)?(void) 0:__assert_fail("!(__cs_pc_cs[0] <= 3)", "./fib_bench_longer_false-unreach-call_seq.c", 337, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6)
//    {__cs_thread_index==0, i==1, j==1, __cs_tmp_t0_r0<=0}

   main_thread();

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   __cs_pc[0] = __cs_pc_cs[0];

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[1]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc_cs[1] = __cs_pc[1]+__cs_tmp_t1_r0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[1] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 344, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      t1_0(__cs_threadargs[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc[1] = __cs_pc_cs[1];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[2]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc_cs[2] = __cs_pc[2]+__cs_tmp_t2_r0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[2] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 352, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      t2_0(__cs_threadargs[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc[2] = __cs_pc_cs[2];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   /* round  1 */
   if (__cs_active_thread[0]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]>=__cs_pc[0])?(void) 0:__assert_fail("!(__cs_pc_cs[0] >= __cs_pc[0])", "./fib_bench_longer_false-unreach-call_seq.c", 361, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]<=3)?(void) 0:__assert_fail("!(__cs_pc_cs[0] <= 3)", "./fib_bench_longer_false-unreach-call_seq.c", 362, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      main_thread();

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_pc[0] = __cs_pc_cs[0];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[1]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc_cs[1] = __cs_pc[1]+__cs_tmp_t1_r1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]>=__cs_pc[1])?(void) 0:__assert_fail("!(__cs_pc_cs[1] >= __cs_pc[1])", "./fib_bench_longer_false-unreach-call_seq.c", 370, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[1] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 371, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      t1_0(__cs_threadargs[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc[1] = __cs_pc_cs[1];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[2]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc_cs[2] = __cs_pc[2]+__cs_tmp_t2_r1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]>=__cs_pc[2])?(void) 0:__assert_fail("!(__cs_pc_cs[2] >= __cs_pc[2])", "./fib_bench_longer_false-unreach-call_seq.c", 379, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[2] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 380, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      t2_0(__cs_threadargs[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc[2] = __cs_pc_cs[2];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   /* round  2 */
   if (__cs_active_thread[0]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]>=__cs_pc[0])?(void) 0:__assert_fail("!(__cs_pc_cs[0] >= __cs_pc[0])", "./fib_bench_longer_false-unreach-call_seq.c", 389, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]<=3)?(void) 0:__assert_fail("!(__cs_pc_cs[0] <= 3)", "./fib_bench_longer_false-unreach-call_seq.c", 390, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      main_thread();

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_pc[0] = __cs_pc_cs[0];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[1]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc_cs[1] = __cs_pc[1]+__cs_tmp_t1_r2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]>=__cs_pc[1])?(void) 0:__assert_fail("!(__cs_pc_cs[1] >= __cs_pc[1])", "./fib_bench_longer_false-unreach-call_seq.c", 398, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[1] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 399, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      t1_0(__cs_threadargs[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc[1] = __cs_pc_cs[1];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[2]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc_cs[2] = __cs_pc[2]+__cs_tmp_t2_r2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]>=__cs_pc[2])?(void) 0:__assert_fail("!(__cs_pc_cs[2] >= __cs_pc[2])", "./fib_bench_longer_false-unreach-call_seq.c", 407, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[2] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 408, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      t2_0(__cs_threadargs[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc[2] = __cs_pc_cs[2];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   /* round  3 */
   if (__cs_active_thread[0]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r3;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]>=__cs_pc[0])?(void) 0:__assert_fail("!(__cs_pc_cs[0] >= __cs_pc[0])", "./fib_bench_longer_false-unreach-call_seq.c", 417, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]<=3)?(void) 0:__assert_fail("!(__cs_pc_cs[0] <= 3)", "./fib_bench_longer_false-unreach-call_seq.c", 418, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      main_thread();

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_pc[0] = __cs_pc_cs[0];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[1]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc_cs[1] = __cs_pc[1]+__cs_tmp_t1_r3;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]>=__cs_pc[1])?(void) 0:__assert_fail("!(__cs_pc_cs[1] >= __cs_pc[1])", "./fib_bench_longer_false-unreach-call_seq.c", 426, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[1] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 427, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      t1_0(__cs_threadargs[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc[1] = __cs_pc_cs[1];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[2]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc_cs[2] = __cs_pc[2]+__cs_tmp_t2_r3;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]>=__cs_pc[2])?(void) 0:__assert_fail("!(__cs_pc_cs[2] >= __cs_pc[2])", "./fib_bench_longer_false-unreach-call_seq.c", 435, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[2] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 436, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      t2_0(__cs_threadargs[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc[2] = __cs_pc_cs[2];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   /* round  4 */
   if (__cs_active_thread[0]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r4;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]>=__cs_pc[0])?(void) 0:__assert_fail("!(__cs_pc_cs[0] >= __cs_pc[0])", "./fib_bench_longer_false-unreach-call_seq.c", 445, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]<=3)?(void) 0:__assert_fail("!(__cs_pc_cs[0] <= 3)", "./fib_bench_longer_false-unreach-call_seq.c", 446, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      main_thread();

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_pc[0] = __cs_pc_cs[0];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[1]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc_cs[1] = __cs_pc[1]+__cs_tmp_t1_r4;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]>=__cs_pc[1])?(void) 0:__assert_fail("!(__cs_pc_cs[1] >= __cs_pc[1])", "./fib_bench_longer_false-unreach-call_seq.c", 454, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[1] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 455, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      t1_0(__cs_threadargs[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc[1] = __cs_pc_cs[1];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[2]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc_cs[2] = __cs_pc[2]+__cs_tmp_t2_r4;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]>=__cs_pc[2])?(void) 0:__assert_fail("!(__cs_pc_cs[2] >= __cs_pc[2])", "./fib_bench_longer_false-unreach-call_seq.c", 463, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[2] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 464, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      t2_0(__cs_threadargs[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc[2] = __cs_pc_cs[2];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   /* round  5 */
   if (__cs_active_thread[0]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r5;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]>=__cs_pc[0])?(void) 0:__assert_fail("!(__cs_pc_cs[0] >= __cs_pc[0])", "./fib_bench_longer_false-unreach-call_seq.c", 473, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]<=3)?(void) 0:__assert_fail("!(__cs_pc_cs[0] <= 3)", "./fib_bench_longer_false-unreach-call_seq.c", 474, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      main_thread();

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_pc[0] = __cs_pc_cs[0];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[1]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc_cs[1] = __cs_pc[1]+__cs_tmp_t1_r5;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]>=__cs_pc[1])?(void) 0:__assert_fail("!(__cs_pc_cs[1] >= __cs_pc[1])", "./fib_bench_longer_false-unreach-call_seq.c", 482, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[1] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 483, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      t1_0(__cs_threadargs[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc[1] = __cs_pc_cs[1];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[2]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc_cs[2] = __cs_pc[2]+__cs_tmp_t2_r5;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]>=__cs_pc[2])?(void) 0:__assert_fail("!(__cs_pc_cs[2] >= __cs_pc[2])", "./fib_bench_longer_false-unreach-call_seq.c", 491, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[2] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 492, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      t2_0(__cs_threadargs[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc[2] = __cs_pc_cs[2];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   /* round  6 */
   if (__cs_active_thread[0]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r6;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]>=__cs_pc[0])?(void) 0:__assert_fail("!(__cs_pc_cs[0] >= __cs_pc[0])", "./fib_bench_longer_false-unreach-call_seq.c", 501, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]<=3)?(void) 0:__assert_fail("!(__cs_pc_cs[0] <= 3)", "./fib_bench_longer_false-unreach-call_seq.c", 502, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      main_thread();

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_pc[0] = __cs_pc_cs[0];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[1]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 1;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc_cs[1] = __cs_pc[1]+__cs_tmp_t1_r6;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]>=__cs_pc[1])?(void) 0:__assert_fail("!(__cs_pc_cs[1] >= __cs_pc[1])", "./fib_bench_longer_false-unreach-call_seq.c", 510, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      !(__cs_pc_cs[1]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[1] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 511, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      t1_0(__cs_threadargs[1]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==1, i#init==1, j#init==1}

      __cs_pc[1] = __cs_pc_cs[1];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[2]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 2;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc_cs[2] = __cs_pc[2]+__cs_tmp_t2_r6;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]>=__cs_pc[2])?(void) 0:__assert_fail("!(__cs_pc_cs[2] >= __cs_pc[2])", "./fib_bench_longer_false-unreach-call_seq.c", 519, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      !(__cs_pc_cs[2]<=8)?(void) 0:__assert_fail("!(__cs_pc_cs[2] <= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 520, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      t2_0(__cs_threadargs[2]);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==2, i#init==1, j#init==1}

      __cs_pc[2] = __cs_pc_cs[2];
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   if (__cs_active_thread[0]==1) {

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

      __cs_thread_index = 0;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      __cs_pc_cs[0] = __cs_pc[0]+__cs_tmp_t0_r7;

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]>=__cs_pc[0])?(void) 0:__assert_fail("!(__cs_pc_cs[0] >= __cs_pc[0])", "./fib_bench_longer_false-unreach-call_seq.c", 528, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      !(__cs_pc_cs[0]<=3)?(void) 0:__assert_fail("!(__cs_pc_cs[0] <= 3)", "./fib_bench_longer_false-unreach-call_seq.c", 529, __func__);

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k)
//    {__cs_thread_index==0, i#init==1, j#init==1}

      main_thread();
   }

//  P(__cs_thread_index,__cs_tmp_t0_r0,__cs_tmp_t0_r1,__cs_tmp_t0_r2,
//    __cs_tmp_t0_r3,__cs_tmp_t0_r4,__cs_tmp_t0_r5,__cs_tmp_t0_r6,
//    __cs_tmp_t0_r7,__cs_tmp_t1_r0,__cs_tmp_t1_r1,__cs_tmp_t1_r2,
//    __cs_tmp_t1_r3,__cs_tmp_t1_r4,__cs_tmp_t1_r5,__cs_tmp_t1_r6,
//    __cs_tmp_t2_r0,__cs_tmp_t2_r1,__cs_tmp_t2_r2,__cs_tmp_t2_r3,
//    __cs_tmp_t2_r4,__cs_tmp_t2_r5,__cs_tmp_t2_r6,i,j,
//    t1_0:0`__cs_local_t1_k,t2_0:0`__cs_local_t2_k) {i#init==1,
//    j#init==1}

   return 0;
}

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

//  P(__cs_param_main_argc) {}

   static __cs_t __cs_local_main_id2;

//  P(__cs_param_main_argc) {}

   __cs_init_scalar(&__cs_local_main_id2, sizeof(__cs_t));

//  P(__cs_param_main_argc) {}

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

      0?(void) 0:__assert_fail("(0)", "./fib_bench_longer_false-unreach-call_seq.c", 295, __func__);
   }

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

__exit_main:   !(__cs_pc_cs[0]>=3)?(void) 0:__assert_fail("!(__cs_pc_cs[0] >= 3)", "./fib_bench_longer_false-unreach-call_seq.c", 301, __func__);

//  P(__cs_local_main_id1,__cs_local_main_id2,__cs_param_main_argc,i,
//    j) {}

tmain_3:   return 0;
}

//  P() {}

void * t1_0(void *__cs_param_t1_arg)
{

//  P() {}

   static int __cs_local_t1_k;

//  P() {}

   if (__cs_pc[1]>0|0>=__cs_pc_cs[1]) goto tt1_0_1;

//  P() {}

   __cs_init_scalar(&__cs_local_t1_k, sizeof(int));

//  P() {}

   __cs_local_t1_k = 0;

//  P(__cs_local_t1_k) {__cs_local_t1_k==0}

   __cs_local_t1_k = 0;

//  P(__cs_local_t1_k) {}

tt1_0_1:   if (__cs_pc[1]>1|1>=__cs_pc_cs[1]) goto tt1_0_2;

//  P(__cs_local_t1_k) {}

   i += j;

//  P(__cs_local_t1_k,i) {i#init+j==i}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i) {}

tt1_0_2:   if (__cs_pc[1]>2|2>=__cs_pc_cs[1]) goto tt1_0_3;

//  P(__cs_local_t1_k,i) {}

   i += j;

//  P(__cs_local_t1_k,i) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i) {}

tt1_0_3:   if (__cs_pc[1]>3|3>=__cs_pc_cs[1]) goto tt1_0_4;

//  P(__cs_local_t1_k,i) {}

   i += j;

//  P(__cs_local_t1_k,i) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i) {}

tt1_0_4:   if (__cs_pc[1]>4|4>=__cs_pc_cs[1]) goto tt1_0_5;

//  P(__cs_local_t1_k,i) {}

   i += j;

//  P(__cs_local_t1_k,i) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i) {}

tt1_0_5:   if (__cs_pc[1]>5|5>=__cs_pc_cs[1]) goto tt1_0_6;

//  P(__cs_local_t1_k,i) {}

   i += j;

//  P(__cs_local_t1_k,i) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i) {}

tt1_0_6:   if (__cs_pc[1]>6|6>=__cs_pc_cs[1]) goto tt1_0_7;

//  P(__cs_local_t1_k,i) {}

   i += j;

//  P(__cs_local_t1_k,i) {}

   __cs_local_t1_k++;

//  P(__cs_local_t1_k,i) {}

tt1_0_7:   if (__cs_pc[1]>7|7>=__cs_pc_cs[1]) goto tt1_0_8;

//  P(__cs_local_t1_k,i) {}

   !!(__cs_local_t1_k<6)?(void) 0:__assert_fail("!(!(__cs_local_t1_k < 6))", "./fib_bench_longer_false-unreach-call_seq.c", 205, __func__);

//  P(__cs_local_t1_k,i) {__cs_local_t1_k<=5}

__exit_loop_1:   !(__cs_pc_cs[1]>=8)?(void) 0:__assert_fail("!(__cs_pc_cs[1] >= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 207, __func__);

//  P(__cs_local_t1_k,i) {__cs_local_t1_k<=5}

__exit_t1:   !(__cs_pc_cs[1]>=8)?(void) 0:__assert_fail("!(__cs_pc_cs[1] >= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 213, __func__);

//  P(__cs_local_t1_k,i) {}

tt1_0_8:   return 0;
}

//  P() {}

void * t2_0(void *__cs_param_t2_arg)
{

//  P() {}

   static int __cs_local_t2_k;

//  P() {}

   if (__cs_pc[2]>0|0>=__cs_pc_cs[2]) goto tt2_0_1;

//  P() {}

   __cs_init_scalar(&__cs_local_t2_k, sizeof(int));

//  P() {}

   __cs_local_t2_k = 0;

//  P(__cs_local_t2_k) {__cs_local_t2_k==0}

   __cs_local_t2_k = 0;

//  P(__cs_local_t2_k) {}

tt2_0_1:   if (__cs_pc[2]>1|1>=__cs_pc_cs[2]) goto tt2_0_2;

//  P(__cs_local_t2_k) {}

   j += i;

//  P(__cs_local_t2_k,j) {i+j#init==j}

   __cs_local_t2_k++;

//  P(__cs_local_t2_k,j) {}

tt2_0_2:   if (__cs_pc[2]>2|2>=__cs_pc_cs[2]) goto tt2_0_3;

//  P(__cs_local_t2_k,j) {}

   j += i;

//  P(__cs_local_t2_k,j) {}

   __cs_local_t2_k++;

//  P(__cs_local_t2_k,j) {}

tt2_0_3:   if (__cs_pc[2]>3|3>=__cs_pc_cs[2]) goto tt2_0_4;

//  P(__cs_local_t2_k,j) {}

   j += i;

//  P(__cs_local_t2_k,j) {}

   __cs_local_t2_k++;

//  P(__cs_local_t2_k,j) {}

tt2_0_4:   if (__cs_pc[2]>4|4>=__cs_pc_cs[2]) goto tt2_0_5;

//  P(__cs_local_t2_k,j) {}

   j += i;

//  P(__cs_local_t2_k,j) {}

   __cs_local_t2_k++;

//  P(__cs_local_t2_k,j) {}

tt2_0_5:   if (__cs_pc[2]>5|5>=__cs_pc_cs[2]) goto tt2_0_6;

//  P(__cs_local_t2_k,j) {}

   j += i;

//  P(__cs_local_t2_k,j) {}

   __cs_local_t2_k++;

//  P(__cs_local_t2_k,j) {}

tt2_0_6:   if (__cs_pc[2]>6|6>=__cs_pc_cs[2]) goto tt2_0_7;

//  P(__cs_local_t2_k,j) {}

   j += i;

//  P(__cs_local_t2_k,j) {}

   __cs_local_t2_k++;

//  P(__cs_local_t2_k,j) {}

tt2_0_7:   if (__cs_pc[2]>7|7>=__cs_pc_cs[2]) goto tt2_0_8;

//  P(__cs_local_t2_k,j) {}

   !!(__cs_local_t2_k<6)?(void) 0:__assert_fail("!(!(__cs_local_t2_k < 6))", "./fib_bench_longer_false-unreach-call_seq.c", 263, __func__);

//  P(__cs_local_t2_k,j) {__cs_local_t2_k<=5}

__exit_loop_2:   !(__cs_pc_cs[2]>=8)?(void) 0:__assert_fail("!(__cs_pc_cs[2] >= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 265, __func__);

//  P(__cs_local_t2_k,j) {__cs_local_t2_k<=5}

__exit_t2:   !(__cs_pc_cs[2]>=8)?(void) 0:__assert_fail("!(__cs_pc_cs[2] >= 8)", "./fib_bench_longer_false-unreach-call_seq.c", 271, __func__);

//  P(__cs_local_t2_k,j) {}

tt2_0_8:   return 0;
}
