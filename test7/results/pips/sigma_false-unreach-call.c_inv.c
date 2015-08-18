
//  P() {}

void __VERIFIER_assert(int expression)
{

//  P() {}

   if (!expression) {

//  P() {expression<=0}

ERROR:      __VERIFIER_error();
   }

//  P() {1<=expression}

   return;
}

//  P() {}

int __VERIFIER_assume(pthread_t *f1)
{
}

//  P() {}

void __VERIFIER_error(void)
{

//  P() {}

   abort();
}

//  P() {}

int main()
{

//  P() {}

   int tid, sum;

//  P(sum,tid) {}

   pthread_t *t;

//  P(sum,tid) {}


   t = (pthread_t *) malloc(sizeof(pthread_t)*SIGMA);

//  P(sum,tid) {}

   array = (int *) malloc(sizeof(int)*SIGMA);

//  P(sum,tid) {}


   __VERIFIER_assume(t);

//  P(sum,tid) {}

   __VERIFIER_assume(array);

//  P(sum,tid) {}


   for(tid = 0; tid <= SIGMA-1; tid += 1) {

//  P(array_index,sum,tid) {array_index#init+tid==array_index,
//    tid+1<=SIGMA, 0<=tid}

      pthread_create(&t[tid], 0, thread, 0);

//  P(array_index,sum,tid) {array_index#init+tid==array_index,
//    tid+1<=SIGMA, 0<=tid}

      array_index++;
   }

//  P(array_index,sum,tid) {array_index#init+tid==array_index,
//    SIGMA<=tid, 0<=tid}


   for(tid = 0; tid <= SIGMA-1; tid += 1) {

//  P(array_index,sum,tid) {1<=SIGMA,
//    SIGMA+array_index#init<=array_index, tid+1<=SIGMA,
//    array_index#init<=array_index, 0<=tid}

      pthread_join(t[tid], 0);
   }

//  P(array_index,sum,tid) {SIGMA<=tid,
//    array_index#init+tid<=array_index, 0<=tid}


   for(tid = sum = 0; tid <= SIGMA-1; tid += 1) {

//  P(array_index,sum,tid) {1<=SIGMA,
//    SIGMA+array_index#init<=array_index, tid+1<=SIGMA,
//    array_index#init<=array_index, 0<=tid}

      sum += array[tid];
   }

//  P(array_index,sum,tid) {SIGMA+array_index#init<=array_index,
//    array_index#init+tid<=array_index, 0<=tid}


   __VERIFIER_assert(sum==SIGMA);

//  P(array_index,sum,tid) {SIGMA+array_index#init<=array_index,
//    array_index#init+tid<=array_index, 0<=tid}

   // <-- wrong, different threads might use the same array offset when writing
   
   return 0;
}

//  P() {}

int pthread_create(pthread_t *__newthread, const pthread_attr_t *__attr, void *(*__start_routine)(void *), void *__arg)
{
}

//  P() {}

int pthread_join(pthread_t __th, void **__thread_return)
{
}

//  P() {0==-1}

void * thread(void *arg)
{

//  P() {0==-1}

   array[array_index] = 1;

//  P() {0==-1}

   return 0;
}
