
//  P() {0==-1}

int __cs_cond_wait_1(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
{

//  P() {0==-1}

   __VERIFIER_assert(*__cs_cond_to_wait_for!=0);

//  P() {0==-1}

   __VERIFIER_assert(*__cs_cond_to_wait_for!=-2);

//  P() {0==-1}

   __cs_mutex_unlock(__cs_m);
}
