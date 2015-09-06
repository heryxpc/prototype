
//  P() {0==-1}

void __VERIFIER_error()
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

//  P() {0==-1}

unsigned int __VERIFIER_nondet_uint()
{
}

//  P() {0==-1}

void dec_top(void)
{

//  P() {0==-1}

   top--;
}

//  P() {0==-1}

void error(void)
{

//  P() {0==-1}

ERROR:   __VERIFIER_error();

//  P() {0==-1}

   return;
}

//  P() {0==-1}

int get_top(void)
{

//  P() {0==-1}

   return top;
}

//  P() {0==-1}

void inc_top(void)
{

//  P() {0==-1}

   top++;
}

//  P() {}

int main(void)
{

//  P() {}

   pthread_t id1, id2;

//  P(id1,id2) {}


   pthread_mutex_init(&m, 0);

//  P(id1,id2) {}

   pthread_create(&id1, (void *) 0, t1, (void *) 0);

//  P(id1,id2) {}

   pthread_create(&id2, (void *) 0, t2, (void *) 0);

//  P(id1,id2) {}

   pthread_join(id1, (void *) 0);

//  P(id1,id2) {}

   pthread_join(id2, (void *) 0);

//  P(id1,id2) {}


   return 0;
}

//  P() {0==-1}

int pop(unsigned int *stack)
{

//  P() {0==-1}

   if (get_top()==0) {

//  P() {0==-1}

      printf("stack underflow\n");

//  P() {0==-1}

      return -2;
   }
   else {

//  P() {0==-1}

      dec_top();

//  P() {0==-1}

      return stack[get_top()];
   }

//  P() {0==-1}

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

int push(unsigned int *stack, int x)
{

//  P() {0==-1}

   if (top==400) {

//  P() {0==-1}

      printf("stack overflow\n");

//  P() {0==-1}

      return -1;
   }
   else {

//  P() {0==-1}

      stack[get_top()] = x;

//  P() {0==-1}

      inc_top();
   }

//  P() {0==-1}

   return 0;
}

//  P() {0==-1}

int stack_empty(void)
{

//  P() {0==-1}

   top==0?1:0;
}

//  P() {0==-1}

void * t1(void *arg)
{

//  P() {0==-1}

   int i;

//  P() {0==-1}

   unsigned int tmp;

//  P() {0==-1}


   for(i = 0; i <= 399; i += 1) {

//  P() {0==-1}

      pthread_mutex_lock(&m);

//  P() {0==-1}

      tmp = __VERIFIER_nondet_uint()%400;

//  P() {0==-1}

      if (push(arr, tmp)==-1) {

//  P() {0==-1}

         error();
      }

//  P() {0==-1}

      flag = 1;

//  P() {0==-1}

      pthread_mutex_unlock(&m);
   }
}

//  P() {0==-1}

void * t2(void *arg)
{

//  P() {0==-1}

   int i;

//  P() {0==-1}


   for(i = 0; i <= 399; i += 1) {

//  P() {0==-1}

      pthread_mutex_lock(&m);

//  P() {0==-1}

      if (flag) {

//  P() {0==-1}

         if (!(pop(arr)!=-2)) {

//  P() {0==-1}

            error();
         }
      }

//  P() {0==-1}

      pthread_mutex_unlock(&m);
   }
}
