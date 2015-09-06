
//  P() {0==-1}

int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock)
{

//  P() {0==-1}

   __VERIFIER_assert(*__cs_mutex_to_unlock!=0);

//  P() {0==-1}

   __VERIFIER_assert(*__cs_mutex_to_unlock!=-2);

//  P() {0==-1}

   __VERIFIER_assert(*__cs_mutex_to_unlock==__cs_thread_index+1);

//  P() {0==-1}

   *__cs_mutex_to_unlock = -1;

//  P() {0==-1}

   __CSEQ_message("lock released");

//  P() {0==-1}

   return 0;
}
