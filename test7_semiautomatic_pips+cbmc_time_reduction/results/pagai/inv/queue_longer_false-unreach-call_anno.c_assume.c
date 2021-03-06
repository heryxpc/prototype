extern void __VERIFIER_error();
#include <pthread.h>
#include <stdio.h>
#include <assert.h>

extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    __VERIFIER_error();

  }

  return;
}

void __VERIFIER_atomic_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    __VERIFIER_error();

  }

  return;
}

int __VERIFIER_nondet_int();
typedef struct 
{
  int element[400];
  int head;
  int tail;
  int amount;
} QType;
pthread_mutex_t m;
int __VERIFIER_nondet_int();
int stored_elements[400];
_Bool enqueue_flag;
_Bool dequeue_flag;
QType queue;
int init(QType *q)
{
  q->head = 0;
  q->tail = 0;
  q->amount = 0;
}

int empty(QType *q)
{
  if (q->head == q->tail)
  {
    printf("queue is empty\n");
    return -1;
  }
  else
    return 0;

}

int full(QType *q)
{
  if (q->amount == 400)
  {
    printf("queue is full\n");
    return -2;
  }
  else
    return 0;

}

int enqueue(QType *q, int x)
{
  q->element[q->tail] = x;
  q->amount++;
  if (q->tail == 400)
  {
    q->tail = 1;
  }
  else
  {
    q->tail++;
  }

  return 0;
}

int dequeue(QType *q)
{
  int x;
  x = q->element[q->head];
  q->amount--;
  if (q->head == 400)
  {
    q->head = 1;
  }
  else
    q->head++;

  return x;
}

void *t1(void *arg)
{
  int value;
  int i;
  pthread_mutex_lock(&m);
  value = __VERIFIER_nondet_int();
  if (enqueue(&queue, value))
  {
    goto ERROR;
  }

  stored_elements[0] = value;
  if (empty(&queue))
  {
    goto ERROR;
  }

  pthread_mutex_unlock(&m);
  for (i = 0; i < (400 - 1); i++)
  {
    __CPROVER_assume(((399 - i) >= 0) && (i >= 0));
    {
      pthread_mutex_lock(&m);
      if (enqueue_flag)
      {
        value = __VERIFIER_nondet_int();
        enqueue(&queue, value);
        stored_elements[i + 1] = value;
        enqueue_flag = 0;
        dequeue_flag = 1;
      }

      pthread_mutex_unlock(&m);
    }
  }

  return 0;
  ERROR:
  __VERIFIER_error();

}

void *t2(void *arg)
{
  int i;
  for (i = 0; i < 400; i++)
  {
    __CPROVER_assume(((400 - i) >= 0) && (i >= 0));
    {
      pthread_mutex_lock(&m);
      if (dequeue_flag)
      {
        if ((!dequeue(&queue)) == stored_elements[i])
        {
          ERROR:
          __VERIFIER_error();

        }

        dequeue_flag = 0;
        enqueue_flag = 1;
      }

      pthread_mutex_unlock(&m);
    }
  }

  return 0;
}

int main(void)
{
  pthread_t id1;
  pthread_t id2;
  enqueue_flag = 1;
  dequeue_flag = 0;
  init(&queue);
  if ((!empty(&queue)) == (-1))
  {
    ERROR:
    __VERIFIER_error();

  }

  pthread_mutex_init(&m, 0);
  pthread_create(&id1, 0, t1, &queue);
  pthread_create(&id2, 0, t2, &queue);
  pthread_join(id1, 0);
  pthread_join(id2, 0);
  return 0;
}

