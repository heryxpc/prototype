extern void __VERIFIER_error();
typedef int _____STARTSTRIPPINGFROMHERE_____;
typedef int __cs_cond_t;
typedef int __cs_mutex_t;
typedef int __cs_t;
typedef int size_t;
typedef int __gnuc_va_list;
typedef int __int8_t;
typedef int __uint8_t;
typedef int __int16_t;
typedef int __uint16_t;
typedef int __int_least16_t;
typedef int __uint_least16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef int __int_least32_t;
typedef int __uint_least32_t;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef int _off_t;
typedef int __dev_t;
typedef int __uid_t;
typedef int __gid_t;
typedef int _off64_t;
typedef int _fpos_t;
typedef int _ssize_t;
typedef int wint_t;
typedef int _mbstate_t;
typedef int _flock_t;
typedef int _iconv_t;
typedef int __ULong;
typedef int __FILE;
typedef int ptrdiff_t;
typedef int wchar_t;
typedef int __off_t;
typedef int __pid_t;
typedef int __loff_t;
typedef int u_char;
typedef int u_short;
typedef int u_int;
typedef int u_long;
typedef int ushort;
typedef int uint;
typedef int clock_t;
typedef int time_t;
typedef int daddr_t;
typedef int caddr_t;
typedef int ino_t;
typedef int off_t;
typedef int dev_t;
typedef int uid_t;
typedef int gid_t;
typedef int pid_t;
typedef int key_t;
typedef int ssize_t;
typedef int mode_t;
typedef int nlink_t;
typedef int fd_mask;
typedef int _types_fd_set;
typedef int clockid_t;
typedef int timer_t;
typedef int useconds_t;
typedef int suseconds_t;
typedef int FILE;
typedef int fpos_t;
typedef int cookie_read_function_t;
typedef int cookie_write_function_t;
typedef int cookie_seek_function_t;
typedef int cookie_close_function_t;
typedef int cookie_io_functions_t;
typedef int div_t;
typedef int ldiv_t;
typedef int lldiv_t;
typedef int sigset_t;
typedef int _sig_func_ptr;
typedef int sig_atomic_t;
typedef int __tzrule_type;
typedef int __tzinfo_type;
typedef int mbstate_t;
typedef int sem_t;
typedef int pthread_t;
typedef int pthread_attr_t;
typedef int pthread_mutex_t;
typedef int pthread_mutexattr_t;
typedef int pthread_cond_t;
typedef int pthread_condattr_t;
typedef int pthread_key_t;
typedef int pthread_once_t;
typedef int pthread_rwlock_t;
typedef int pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
typedef int pthread_barrier_t;
typedef int pthread_barrierattr_t;
typedef int int8_t;
typedef int uint8_t;
typedef int int16_t;
typedef int uint16_t;
typedef int int32_t;
typedef int uint32_t;
typedef int int64_t;
typedef int uint64_t;
typedef _Bool bool;
typedef int va_list;
typedef int _____STOPSTRIPPINGFROMHERE_____;
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

