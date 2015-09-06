
//  P() {0==-1}

void __VERIFIER_error()
{

//  P() {0==-1}

   (void) 0;
}

//  P() {0==-1}

void * checkThread(void *param)
{

//  P() {0==-1}

   if (!(a==0&&b==0||a==1&&b==-1)) {

//  P() {0==-1}

      fprintf(stderr, "Bug found!\n");

//  P() {0==-1}

ERROR:      __VERIFIER_error();
      goto ERROR;
   }

//  P() {0==-1}

   return (void *) 0;
}

//  P() {iCheck==2, iSet==2}

int main(int argc, char *argv[])
{

//  P() {iCheck==2, iSet==2}

   int i, err;

//  P(err,i) {iCheck==2, iSet==2}


   if (argc!=1) {

//  P(err,i) {iCheck==2, iSet==2}

      if (argc!=3) {

//  P(err,i) {iCheck==2, iSet==2}

         fprintf(stderr, "./reorder <param1> <param2>\n");

//  P(err,i) {iCheck==2, iSet==2}

         exit(-1);
      }
      else {

//  P(err,i) {argc==3, iCheck==2, iSet==2}

         sscanf(argv[1], "%d", &iSet);

//  P(err,i,iSet) {argc==3, iCheck==2,
//    reorder_2_false-unreach-call!:iSet#init==2}

         sscanf(argv[2], "%d", &iCheck);
      }
   }
   
   //printf("iSet = %d\niCheck = %d\n", iSet, iCheck);
   

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3}

   pthread_t setPool[iSet];

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3}

   pthread_t checkPool[iCheck];

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3}


   for(i = 0; i <= iSet-1; i += 1) {

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iSet}

      if (0!=(err = pthread_create(&setPool[i], (void *) 0, &setThread, (void *) 0))) {

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iSet}

         fprintf(stderr, "Error [%d] found creating set thread.\n", err);

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iSet}

         exit(-1);
      }
   }

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, iSet<=i}


   for(i = 0; i <= iCheck-1; i += 1) {

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iCheck}

      if (0!=(err = pthread_create(&checkPool[i], (void *) 0, &checkThread, (void *) 0))) {

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iCheck}

         fprintf(stderr, "Error [%d] found creating check thread.\n", err);

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iCheck}

         exit(-1);
      }
   }

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, iCheck<=i}


   for(i = 0; i <= iSet-1; i += 1) {

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iSet}

      if (0!=(err = pthread_join(setPool[i], (void *) 0))) {

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iSet}

         fprintf(stderr, "pthread join error: %d\n", err);

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iSet}

         exit(-1);
      }
   }

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, iSet<=i}


   for(i = 0; i <= iCheck-1; i += 1) {

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iCheck}

      if (0!=(err = pthread_join(checkPool[i], (void *) 0))) {

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iCheck}

         fprintf(stderr, "pthread join error: %d\n", err);

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, i+1<=iCheck}

         exit(-1);
      }
   }

//  P(err,i,iCheck,iSet) {1<=argc, argc<=3, 0<=i, iCheck<=i}


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

void * setThread(void *param)
{

//  P() {0==-1}

   a = 1;

//  P() {0==-1}

   b = -1;

//  P() {0==-1}

   return (void *) 0;
}
