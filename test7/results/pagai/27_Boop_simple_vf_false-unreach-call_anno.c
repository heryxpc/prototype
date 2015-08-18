[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0mextern void __VERIFIER_error() __attribute__ ((__noreturn__));

#include <pthread.h>

#define assert(e) { if(!(e)) { ERROR: __VERIFIER_error();(void)0; } }

int usecount;
int locked;
int flag1 = 0;
int flag2 = 0;
int release_thr1 = 0;

void* thr2 (void* arg) //dummy_open
{
  /* reachable */
  /* reachable */
  while(!release_thr1);

  usecount = usecount + 1;

  if (locked)
    return 0;
  locked = 1;
  flag1 = 1;
  return 0;
/* reachable */
}

inline void dummy_release ()
{
  usecount = usecount - 1;
  locked = 0;
  return;
}

inline void unregister_chrdev ()
{
  if (usecount != 0)
    {
    // this should fail
    assert (0);
    }
  else
    return;
}

void* thr1 (void* arg)
{
  void*            rval;
  int count;

  /* reachable */
  usecount = 0;
  locked = 0;
  
  release_thr1 = 1;
  while(1)
  {
    if(/* reachable */
       flag1)
      break;
  }

  do
    {
      rval = (void*)/* reachable */
                    __VERIFIER_nondet_int();
      if (rval == 0)
	{
	  count = 1;
	  dummy_release ();
	}
      else
	count = 0;
    }
  while	(count != 0);

  /* reachable */
  dummy_release ();

  unregister_chrdev ();

  return 0;
}

int main(){
  pthread_t t;

	/* reachable */
	pthread_create(&t, 0, thr1, 0);
	while(1) { /* reachable */
	           pthread_create(&t, 0, thr2, 0); }
/* UNREACHABLE */
}

