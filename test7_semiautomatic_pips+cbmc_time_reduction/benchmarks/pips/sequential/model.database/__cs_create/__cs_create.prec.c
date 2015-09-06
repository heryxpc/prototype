
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
