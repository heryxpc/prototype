
//  P() {0==-1}

void * __cs_safe_malloc(int __cs_size)
{

//  P() {0==-1}

   void *__cs_ptr = malloc(__cs_size);

//  P() {0==-1}

   __VERIFIER_assume(__cs_ptr);

//  P() {0==-1}

   return __cs_ptr;
}
