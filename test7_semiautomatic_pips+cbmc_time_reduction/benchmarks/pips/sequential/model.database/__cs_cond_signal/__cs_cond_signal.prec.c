
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
