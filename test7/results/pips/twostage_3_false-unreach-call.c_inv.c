
//  P() {0==-1}

void __VERIFIER_error()
{

//  P() {0==-1}

   abort();
}

//  P() {0==-1}

void * funcA(void *param)
{

//  P() {0==-1}

   pthread_mutex_lock(data1Lock);

//  P() {0==-1}

   data1Value = 1;

//  P() {0==-1}

   pthread_mutex_unlock(data1Lock);

//  P() {0==-1}


   pthread_mutex_lock(data2Lock);

//  P() {0==-1}

   data2Value = data1Value+1;

//  P() {0==-1}

   pthread_mutex_unlock(data2Lock);

//  P() {0==-1}

   return (void *) 0;
}

//  P() {0==-1}

void * funcB(void *param)
{

//  P() {0==-1}

   int t1 = -1;

//  P() {0==-1}

   int t2 = -1;

//  P() {0==-1}


   pthread_mutex_lock(data1Lock);

//  P() {0==-1}

   if (data1Value==0) {

//  P() {0==-1}

      pthread_mutex_unlock(data1Lock);

//  P() {0==-1}

      return (void *) 0;
   }

//  P() {0==-1}

   t1 = data1Value;

//  P() {0==-1}

   pthread_mutex_unlock(data1Lock);

//  P() {0==-1}


   pthread_mutex_lock(data2Lock);

//  P() {0==-1}

   t2 = data2Value;

//  P() {0==-1}

   pthread_mutex_unlock(data2Lock);

//  P() {0==-1}

   if (t2!=t1+1) {

//  P() {0==-1}

      fprintf(stderr, "Bug found!\n");

//  P() {0==-1}

ERROR:      __VERIFIER_error();
   }

//  P() {0==-1}

   return (void *) 0;
}

//  P() {0==-1}

void lock(pthread_mutex_t *lock)
{

//  P() {0==-1}

   int err;

//  P() {0==-1}

   if (0!=(err = pthread_mutex_lock(lock))) {

//  P() {0==-1}

      fprintf(stderr, "Got error %d from pthread_mutex_lock.\n", err);

//  P() {0==-1}

      exit(-1);
   }
}

//  P() {iRThreads==1, iTThreads==2}

int main(int argc, char *argv[])
{

//  P() {iRThreads==1, iTThreads==2}

   int i, err;

//  P(err,i) {iRThreads==1, iTThreads==2}


   if (argc!=1) {

//  P(err,i) {iRThreads==1, iTThreads==2}

      if (argc!=3) {

//  P(err,i) {iRThreads==1, iTThreads==2}

         fprintf(stderr, "./twostage <param1> <param2>\n");

//  P(err,i) {iRThreads==1, iTThreads==2}

         exit(-1);
      }
      else {

//  P(err,i) {argc==3, iRThreads==1, iTThreads==2}

         sscanf(argv[1], "%d", &iTThreads);

//  P(err,i,iTThreads) {argc==3, iRThreads==1,
//    twostage_3_false-unreach-call!:iTThreads#init==2}

         sscanf(argv[2], "%d", &iRThreads);
      }
   }

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3}


   data1Lock = (pthread_mutex_t *) malloc(sizeof(pthread_mutex_t));

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3}

   data2Lock = (pthread_mutex_t *) malloc(sizeof(pthread_mutex_t));

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3}

   if (0!=(err = pthread_mutex_init(data1Lock, (void *) 0))) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3}

      fprintf(stderr, "pthread_mutex_init error: %d\n", err);

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3}

      exit(-1);
   }

//  P(err,i,iRThreads,iTThreads) {err==0, 1<=argc, argc<=3}

   if (0!=(err = pthread_mutex_init(data2Lock, (void *) 0))) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3}

      fprintf(stderr, "pthread_mutex_init error: %d\n", err);

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3}

      exit(-1);
   }


//  P(err,i,iRThreads,iTThreads) {err==0, 1<=argc, argc<=3}

   pthread_t tPool[iTThreads];

//  P(err,i,iRThreads,iTThreads) {err==0, 1<=argc, argc<=3}

   pthread_t rPool[iRThreads];

//  P(err,i,iRThreads,iTThreads) {err==0, 1<=argc, argc<=3}


   for(i = 0; i <= iTThreads-1; i += 1) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iTThreads}

      if (0!=(err = pthread_create(&tPool[i], (void *) 0, &funcA, (void *) 0))) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iTThreads}

         fprintf(stderr, "Error [%d] found creating 2stage thread.\n", err);

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iTThreads}

         exit(-1);
      }
   }

//  P(err,i,iRThreads,iTThreads) {err==0, 1<=argc, argc<=3, 0<=i,
//    iTThreads<=i}


   for(i = 0; i <= iRThreads-1; i += 1) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iRThreads}

      if (0!=(err = pthread_create(&rPool[i], (void *) 0, &funcB, (void *) 0))) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iRThreads}

         fprintf(stderr, "Error [%d] found creating read thread.\n", err);

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iRThreads}

         exit(-1);
      }
   }

//  P(err,i,iRThreads,iTThreads) {err==0, 1<=argc, argc<=3, 0<=i,
//    iRThreads<=i}


   for(i = 0; i <= iTThreads-1; i += 1) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iTThreads}

      if (0!=(err = pthread_join(tPool[i], (void *) 0))) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iTThreads}

         fprintf(stderr, "pthread join error: %d\n", err);

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iTThreads}

         exit(-1);
      }
   }

//  P(err,i,iRThreads,iTThreads) {err==0, 1<=argc, argc<=3, 0<=i,
//    iTThreads<=i}


   for(i = 0; i <= iRThreads-1; i += 1) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iRThreads}

      if (0!=(err = pthread_join(rPool[i], (void *) 0))) {

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iRThreads}

         fprintf(stderr, "pthread join error: %d\n", err);

//  P(err,i,iRThreads,iTThreads) {1<=argc, argc<=3, 0<=i,
//    i+1<=iRThreads}

         exit(-1);
      }
   }

//  P(err,i,iRThreads,iTThreads) {err==0, 1<=argc, argc<=3, 0<=i,
//    iRThreads<=i}


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

//  P() {}

int pthread_mutex_init(pthread_mutex_t *__mutex, const pthread_mutexattr_t *__mutexattr)
{
}

//  P() {0==-1}

int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
}

//  P() {0==-1}

int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
}

//  P() {0==-1}

void unlock(pthread_mutex_t *lock)
{

//  P() {0==-1}

   int err;

//  P() {0==-1}

   if (0!=(err = pthread_mutex_unlock(lock))) {

//  P() {0==-1}

      fprintf(stderr, "Got error %d from pthread_mutex_unlock.\n", err);

//  P() {0==-1}

      exit(-1);
   }
}
