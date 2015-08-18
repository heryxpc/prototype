
//  P() {0==-1}

void __VERIFIER_assert(int cond)
{

//  P() {0==-1}

   if (!cond) {

//  P() {0==-1}

ERROR:      __VERIFIER_error();
   }

//  P() {0==-1}

   return;
}

//  P() {0==-1}

void __VERIFIER_atomic_assert(int cond)
{

//  P() {0==-1}

   if (!cond) {

//  P() {0==-1}

ERROR:      __VERIFIER_error();
   }

//  P() {0==-1}

   return;
}

//  P() {0==-1}

void __VERIFIER_error(void)
{

//  P() {0==-1}

   abort();
}

//  P() {0==-1}

int __VERIFIER_nondet_int()
{

//  P() {0==-1}

   int n;

//  P() {0==-1}

   return n;
}

//  P() {}

void main(int argc, char *argv[])
{

//  P() {}

   pthread_t t1, t2;

//  P(t1,t2) {}

   int i;

//  P(i,t1,t2) {}

   x = 0;

//  P(i,t1,t2) {}

   pthread_create(&t1, 0, thr1, 0);

//  P(i,t1,t2) {}

   for(i = 0; i <= 49; i += 1) {

//  P(i,t1,t2) {0<=i, i<=49}

      pthread_create(&t2, 0, thr2, 0);
   }
}

//  P() {}

int pthread_create(pthread_t *__newthread, const pthread_attr_t *__attr, void *(*__start_routine)(void *), void *__arg)
{
}

//  P() {0==-1}

void * thr1(void *arg)
{

//  P() {0==-1}

   __VERIFIER_assert(x<50);
}

//  P() {0==-1}

void * thr2(void *arg)
{

//  P() {0==-1}

   int t;

//  P() {0==-1}

   t = x;

//  P() {0==-1}

   x = t+1;
}
