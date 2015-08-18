
//  P() {0==-1}

void __VERIFIER_error()
{

//  P() {0==-1}

   abort();
}

//  P() {}

int main(int argc, char **argv)
{

//  P() {}

   pthread_t id1, id2;

//  P(id1,id2) {}

   pthread_create(&id1, (void *) 0, t1, (void *) 0);

//  P(id1,id2) {}

   pthread_create(&id2, (void *) 0, t2, (void *) 0);

//  P(id1,id2) {}


   if (1>=377||1>=377) {

//  P() {0==-1}

ERROR:      __VERIFIER_error();
   }

//  P(id1,id2) {}


   return 0;
}

//  P() {}

int pthread_create(pthread_t *__newthread, const pthread_attr_t *__attr, void *(*__start_routine)(void *), void *__arg)
{
}

//  P() {0==-1}

void pthread_exit(void *__retval)
{
}

//  P() {0==-1}

void * t1(void *arg)
{

//  P() {0==-1}

   int k = 0;

//  P() {0==-1}


   for(k = 0; k <= 5; k += 1) {

//  P() {0==-1}

      i += j;
   }

//  P() {0==-1}

   pthread_exit((void *) 0);
}

//  P() {0==-1}

void * t2(void *arg)
{

//  P() {0==-1}

   int k = 0;

//  P() {0==-1}


   for(k = 0; k <= 5; k += 1) {

//  P() {0==-1}

      j += i;
   }

//  P() {0==-1}

   pthread_exit((void *) 0);
}
