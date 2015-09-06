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
unsigned int __VERIFIER_nondet_uint();
static int top = 0;
static unsigned int arr[400];
pthread_mutex_t m;
_Bool flag = 0;
void error(void)
{
  ERROR:
  __VERIFIER_error();

  return;
}

void inc_top(void)
{
  top++;
}

void dec_top(void)
{
  top--;
}

int get_top(void)
{
  return top;
}

int stack_empty(void)
{
  top == 0 ? 1 : 0;
}

int push(unsigned int *stack, int x)
{
  if (top == 400)
  {
    printf("stack overflow\n");
    return -1;
  }
  else
  {
    stack[get_top()] = x;
    inc_top();
  }

  return 0;
}

int pop(unsigned int *stack)
{
  if (get_top() == 0)
  {
    printf("stack underflow\n");
    return -2;
  }
  else
  {
    dec_top();
    return stack[get_top()];
  }

  return 0;
}

void *t1(void *arg)
{
  int i;
  unsigned int tmp;
  for (i = 0; i < 400; i++)
  {
    __CPROVER_assume(((400 - i) >= 0) && (i >= 0));
    {
      __CPROVER_assume(((400 - i) >= 0) && (i >= 0));
      {
        __CPROVER_assume(((400 - i) >= 0) && (i >= 0));
        {
          __CPROVER_assume(((400 - i) >= 0) && (i >= 0));
          {
            pthread_mutex_lock(&m);
            tmp = __VERIFIER_nondet_uint() % 400;
            if (push(arr, tmp) == (-1))
              error();

            flag = 1;
            pthread_mutex_unlock(&m);
          }
        }
      }
    }
  }

}

void *t2(void *arg)
{
  int i;
  for (i = 0; i < 400; i++)
  {
    __CPROVER_assume(((400 - i) >= 0) && (i >= 0));
    {
      __CPROVER_assume(((400 - i) >= 0) && (i >= 0));
      {
        pthread_mutex_lock(&m);
        if (flag)
        {
          if (!(pop(arr) != (-2)))
            error();

        }

        pthread_mutex_unlock(&m);
      }
    }
  }

}

int main(void)
{
  pthread_t id1;
  pthread_t id2;
  pthread_mutex_init(&m, 0);
  pthread_create(&id1, 0, t1, 0);
  pthread_create(&id2, 0, t2, 0);
  pthread_join(id1, 0);
  pthread_join(id2, 0);
  return 0;
}

