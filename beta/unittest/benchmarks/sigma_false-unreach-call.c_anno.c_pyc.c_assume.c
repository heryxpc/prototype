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
void __VERIFIER_assert(int expression)
{
  if (!expression)
  {
    ERROR:
    __VERIFIER_error();

  }

  ;
  return;
}

const int SIGMA = 16;
int *array;
int array_index;
void *thread(void *arg)
{
  array[array_index] = 1;
  return 0;
}

int main()
{
  int tid;
  int sum;
  pthread_t *t;
  t = (pthread_t *) malloc((sizeof(pthread_t)) * SIGMA);
  array = (int *) malloc((sizeof(int)) * SIGMA);
  __VERIFIER_assume(t);
  __VERIFIER_assume(array);
  for (tid = 0; tid < SIGMA; tid++)
  {
    __CPROVER_assume(((16 - tid) >= 0) && (tid >= 0));
    {
      pthread_create(&t[tid], 0, thread, 0);
      array_index++;
    }
  }

  for (tid = 0; tid < SIGMA; tid++)
  {
    __CPROVER_assume(((16 - tid) >= 0) && (tid >= 0));
    {
      pthread_join(t[tid], 0);
    }
  }

  for (tid = (sum = 0); tid < SIGMA; tid++)
  {
    __CPROVER_assume(((16 - tid) >= 0) && (tid >= 0));
    {
      sum += array[tid];
    }
  }

  __VERIFIER_assert(sum == SIGMA);
  return 0;
}

