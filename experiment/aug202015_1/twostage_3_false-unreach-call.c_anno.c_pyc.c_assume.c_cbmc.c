extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

static int iTThreads = 2;
static int iRThreads = 1;
static int data1Value = 0;
static int data2Value = 0;
pthread_mutex_t *data1Lock;
pthread_mutex_t *data2Lock;
void lock(pthread_mutex_t *);
void unlock(pthread_mutex_t *);
void *funcA(void *param)
{
  pthread_mutex_lock(data1Lock);
  data1Value = 1;
  pthread_mutex_unlock(data1Lock);
  pthread_mutex_lock(data2Lock);
  data2Value = data1Value + 1;
  pthread_mutex_unlock(data2Lock);
  return 0;
}

void *funcB(void *param)
{
  int t1 = -1;
  int t2 = -1;
  pthread_mutex_lock(data1Lock);
  if (data1Value == 0)
  {
    pthread_mutex_unlock(data1Lock);
    return 0;
  }

  t1 = data1Value;
  pthread_mutex_unlock(data1Lock);
  pthread_mutex_lock(data2Lock);
  t2 = data2Value;
  pthread_mutex_unlock(data2Lock);
  if (t2 != (t1 + 1))
  {
    fprintf(stderr, "Bug found!\n");
    ERROR:
    __VERIFIER_error();

    ;
  }

  return 0;
}

int main(int argc, char *argv[])
{
  int i;
  int err;
  if (argc != 1)
  {
    if (argc != 3)
    {
      fprintf(stderr, "./twostage <param1> <param2>\n");
      exit(-1);
    }
    else
    {
      sscanf(argv[1], "%d", &iTThreads);
      sscanf(argv[2], "%d", &iRThreads);
    }

  }

  data1Lock = (pthread_mutex_t *) malloc(sizeof(pthread_mutex_t));
  data2Lock = (pthread_mutex_t *) malloc(sizeof(pthread_mutex_t));
  if (0 != (err = pthread_mutex_init(data1Lock, 0)))
  {
    fprintf(stderr, "pthread_mutex_init error: %d\n", err);
    exit(-1);
  }

  if (0 != (err = pthread_mutex_init(data2Lock, 0)))
  {
    fprintf(stderr, "pthread_mutex_init error: %d\n", err);
    exit(-1);
  }

  pthread_t tPool[iTThreads];
  pthread_t rPool[iRThreads];
  for (i = 0; i < iTThreads; i++)
  {
    __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
    {
      __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
      {
        __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
        {
          __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
          {
            __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
            {
              __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
              {
                __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
                {
                  __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
                  {
                    __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
                    {
                      if (0 != (err = pthread_create(&tPool[i], 0, &funcA, 0)))
                      {
                        fprintf(stderr, "Error [%d] found creating 2stage thread.\n", err);
                        exit(-1);
                      }

                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  for (i = 0; i < iRThreads; i++)
  {
    __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
    {
      __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
      {
        __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
        {
          __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
          {
            __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
            {
              __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
              {
                __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
                {
                  __CPROVER_assume(((3 - argc) >= 0) && (((-1) + argc) >= 0));
                  {
                    if (0 != (err = pthread_create(&rPool[i], 0, &funcB, 0)))
                    {
                      fprintf(stderr, "Error [%d] found creating read thread.\n", err);
                      exit(-1);
                    }

                  }
                }
              }
            }
          }
        }
      }
    }
  }

  for (i = 0; i < iTThreads; i++)
  {
    __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
    {
      __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
      {
        __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
        {
          __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
          {
            __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
            {
              __CPROVER_assume(((3 - argc) >= 0) && (((-1) + argc) >= 0));
              {
                if (0 != (err = pthread_join(tPool[i], 0)))
                {
                  fprintf(stderr, "pthread join error: %d\n", err);
                  exit(-1);
                }

              }
            }
          }
        }
      }
    }
  }

  for (i = 0; i < iRThreads; i++)
  {
    __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
    {
      __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
      {
        __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
        {
          __CPROVER_assume(((3 - argc) >= 0) && (((-1) + argc) >= 0));
          {
            if (0 != (err = pthread_join(rPool[i], 0)))
            {
              fprintf(stderr, "pthread join error: %d\n", err);
              exit(-1);
            }

          }
        }
      }
    }
  }

  return 0;
}

void lock(pthread_mutex_t *lock)
{
  int err;
  if (0 != (err = pthread_mutex_lock(lock)))
  {
    fprintf(stderr, "Got error %d from pthread_mutex_lock.\n", err);
    exit(-1);
  }

}

void unlock(pthread_mutex_t *lock)
{
  int err;
  if (0 != (err = pthread_mutex_unlock(lock)))
  {
    fprintf(stderr, "Got error %d from pthread_mutex_unlock.\n", err);
    exit(-1);
  }

}


