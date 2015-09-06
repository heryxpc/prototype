
//  P() {0==-1}

int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock)
{

//  P() {0==-1}

   __VERIFIER_assert(*__cs_mutex_to_lock!=0);

//  P() {0==-1}

   __VERIFIER_assert(*__cs_mutex_to_lock!=-2);

//  P() {0==-1}

   __VERIFIER_assume(*__cs_mutex_to_lock==-1);

//  P() {0==-1}

   *__cs_mutex_to_lock = __cs_thread_index+1;

//  P() {0==-1}

   __CSEQ_message("lock acquired");

//  P() {0==-1}

   return 0;
}
