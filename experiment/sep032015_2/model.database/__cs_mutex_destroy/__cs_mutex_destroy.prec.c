
//  P() {0==-1}

int __cs_mutex_destroy(__cs_mutex_t *__cs_mutex_to_destroy)
{

//  P() {0==-1}

   __VERIFIER_assert(*__cs_mutex_to_destroy!=0);

//  P() {0==-1}

   __VERIFIER_assert(*__cs_mutex_to_destroy!=-2);

//  P() {0==-1}

   __VERIFIER_assert(*__cs_mutex_to_destroy==-1);

//  P() {0==-1}

   *__cs_mutex_to_destroy = -2;

//  P() {0==-1}

   __CSEQ_message("lock destroyed");

//  P() {0==-1}

   return 0;
}
