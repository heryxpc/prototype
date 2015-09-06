extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <stdlib.h>
#include <pthread.h>

int table[128];
pthread_mutex_t cas_mutex[128];
pthread_t tids[13];
int cas(int *tab, int h, int val, int new_val)
{
  int ret_val = 0;
  pthread_mutex_lock(&cas_mutex[h]);
  if (tab[h] == val)
  {
    tab[h] = new_val;
    ret_val = 1;
  }

  pthread_mutex_unlock(&cas_mutex[h]);
  return ret_val;
}

void *thread_routine(void *arg)
{
  int tid;
  int m = 0;
  int w;
  int h;
  tid = *((int *) arg);
  while (1)
  {
    __CPROVER_assume(((4 - m) >= 0) && (m >= 0));
    {
      __CPROVER_assume(((4 - m) >= 0) && (m >= 0));
      {
        __CPROVER_assume(((4 - m) >= 0) && (m >= 0));
        {
          __CPROVER_assume(((4 - m) >= 0) && (m >= 0));
          {
            __CPROVER_assume(((4 - m) >= 0) && (m >= 0));
            {
              if (m < 4)
              {
                w = ((++m) * 11) + tid;
              }
              else
              {
                pthread_exit(0);
              }

              h = (w * 7) % 128;
              if (h < 0)
              {
                ERROR:
                __VERIFIER_error();

                ;
              }

              while (cas(table, h, 0, w) == 0)
              {
                h = (h + 1) % 128;
              }

            }
          }
        }
      }
    }
  }

}

int main()
{
  int i;
  int arg;
  for (i = 0; i < 128; i++)
  {
    __CPROVER_assume(((128 - i) >= 0) && (i >= 0));
    {
      __CPROVER_assume(((128 - i) >= 0) && (i >= 0));
      {
        __CPROVER_assume(((128 - i) >= 0) && (i >= 0));
        {
          __CPROVER_assume(((128 - i) >= 0) && (i >= 0));
          pthread_mutex_init(&cas_mutex[i], 0);
        }
      }
    }
  }

  for (i = 0; i < 13; i++)
  {
    __CPROVER_assume(((13 - i) >= 0) && (i >= 0));
    {
      __CPROVER_assume(((13 - i) >= 0) && (i >= 0));
      {
        __CPROVER_assume(((13 - i) >= 0) && (i >= 0));
        {
          __CPROVER_assume(((128 - i) >= 0) && (i >= 0));
          {
            arg = i;
            pthread_create(&tids[i], 0, thread_routine, &arg);
          }
        }
      }
    }
  }

  for (i = 0; i < 13; i++)
  {
    __CPROVER_assume(((13 - i) >= 0) && (i >= 0));
    {
      __CPROVER_assume(((13 - i) >= 0) && (i >= 0));
      {
        __CPROVER_assume(((13 - i) >= 0) && (i >= 0));
        {
          pthread_join(tids[i], 0);
        }
      }
    }
  }

  for (i = 0; i < 128; i++)
  {
    __CPROVER_assume(((128 - i) >= 0) && (i >= 0));
    {
      __CPROVER_assume(((13 - i) >= 0) && (i >= 0));
      {
        pthread_mutex_destroy(&cas_mutex[i]);
      }
    }
  }

}


