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

