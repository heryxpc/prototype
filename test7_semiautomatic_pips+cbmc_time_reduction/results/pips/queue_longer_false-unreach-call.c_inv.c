
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

int dequeue(QType *q)
{

//  P() {0==-1}

   int x;

//  P() {0==-1}


   x = (q->element)[q->head];

//  P() {0==-1}

   q->amount--;

//  P() {0==-1}

   if (q->head==400) {

//  P() {0==-1}

      q->head = 1;
   }
   else {

//  P() {0==-1}

      q->head++;
   }

//  P() {0==-1}


   return x;
}

//  P() {}

int empty(QType *q)
{

//  P() {}

   if (q->head==q->tail) {

//  P() {}

      printf("queue is empty\n");

//  P() {}

      return -1;
   }
   else {

//  P() {}

      return 0;
   }
}

//  P() {0==-1}

int enqueue(QType *q, int x)
{

//  P() {0==-1}

   (q->element)[q->tail] = x;

//  P() {0==-1}

   q->amount++;

//  P() {0==-1}

   if (q->tail==400) {

//  P() {0==-1}

      q->tail = 1;
   }
   else {

//  P() {0==-1}

      q->tail++;
   }

//  P() {0==-1}


   return 0;
}

//  P() {0==-1}

int full(QType *q)
{

//  P() {0==-1}

   if (q->amount==400) {

//  P() {0==-1}

      printf("queue is full\n");

//  P() {0==-1}

      return -2;
   }
   else {

//  P() {0==-1}

      return 0;
   }
}

//  P() {}

int init(QType *q)
{

//  P() {}

   q->head = 0;

//  P() {}

   q->tail = 0;

//  P() {}

   q->amount = 0;
}

//  P() {}

int main(void)
{

//  P() {}

   pthread_t id1, id2;

//  P(id1,id2) {}

   enqueue_flag = 1;

//  P(id1,id2) {}

   dequeue_flag = 0;

//  P(id1,id2) {}


   init(&queue);

//  P(id1,id2) {}

   if (!empty(&queue)==-1) {

//  P() {0==-1}

ERROR:      __VERIFIER_error();
   }

//  P(id1,id2) {}

   
   
   pthread_mutex_init(&m, 0);

//  P(id1,id2) {}

   pthread_create(&id1, (void *) 0, t1, &queue);

//  P(id1,id2) {}

   pthread_create(&id2, (void *) 0, t2, &queue);

//  P(id1,id2) {}

   pthread_join(id1, (void *) 0);

//  P(id1,id2) {}

   pthread_join(id2, (void *) 0);

//  P(id1,id2) {}


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

void * t1(void *arg)
{

//  P() {0==-1}

   int value, i;

//  P() {0==-1}


   pthread_mutex_lock(&m);

//  P() {0==-1}

   value = __VERIFIER_nondet_int();

//  P() {0==-1}

   if (enqueue(&queue, value)) goto ERROR;

//  P() {0==-1}


   stored_elements[0] = value;

//  P() {0==-1}

   if (empty(&queue)) goto ERROR;

//  P() {0==-1}


   pthread_mutex_unlock(&m);

//  P() {0==-1}


   for(i = 0; i <= 398; i += 1) {

//  P() {0==-1}

      pthread_mutex_lock(&m);

//  P() {0==-1}

      if (enqueue_flag) {

//  P() {0==-1}

         value = __VERIFIER_nondet_int();

//  P() {0==-1}

         enqueue(&queue, value);

//  P() {0==-1}

         stored_elements[i+1] = value;

//  P() {0==-1}

         enqueue_flag = 0;

//  P() {0==-1}

         dequeue_flag = 1;
      }

//  P() {0==-1}

      pthread_mutex_unlock(&m);
   }

//  P() {0==-1}

   return (void *) 0;

//  P() {0==-1}


ERROR:   ;

//  P() {0==-1}

   __VERIFIER_error();
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

      if (dequeue_flag) {

//  P() {0==-1}

         if (!dequeue(&queue)==stored_elements[i]) {

//  P() {0==-1}

ERROR:            __VERIFIER_error();
         }

//  P() {0==-1}

         dequeue_flag = 0;

//  P() {0==-1}

         enqueue_flag = 1;
      }

//  P() {0==-1}

      pthread_mutex_unlock(&m);
   }

//  P() {0==-1}

   return (void *) 0;
}
