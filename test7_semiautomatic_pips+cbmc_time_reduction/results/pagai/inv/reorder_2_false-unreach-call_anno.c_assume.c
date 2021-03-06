extern void __VERIFIER_error();
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define USAGE "./reorder <param1> <param2>\n"

static int iSet = 2;
static int iCheck = 2;
static int a = 0;
static int b = 0;
void *setThread(void *param);
void *checkThread(void *param);
void set();
int check();
int main(int argc, char *argv[])
{
  int i;
  int err;
  if (argc != 1)
  {
    if (argc != 3)
    {
      fprintf(stderr, "./reorder <param1> <param2>\n");
      exit(-1);
    }
    else
    {
      sscanf(argv[1], "%d", &iSet);
      sscanf(argv[2], "%d", &iCheck);
    }

  }

  pthread_t setPool[iSet];
  pthread_t checkPool[iCheck];
  for (i = 0; i < iSet; i++)
  {
    __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
    {
      if (0 != (err = pthread_create(&setPool[i], 0, &setThread, 0)))
      {
        fprintf(stderr, "Error [%d] found creating set thread.\n", err);
        exit(-1);
      }

    }
  }

  for (i = 0; i < iCheck; i++)
  {
    __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
    {
      if (0 != (err = pthread_create(&checkPool[i], 0, &checkThread, 0)))
      {
        fprintf(stderr, "Error [%d] found creating check thread.\n", err);
        exit(-1);
      }

    }
  }

  for (i = 0; i < iSet; i++)
  {
    __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
    {
      if (0 != (err = pthread_join(setPool[i], 0)))
      {
        fprintf(stderr, "pthread join error: %d\n", err);
        exit(-1);
      }

    }
  }

  for (i = 0; i < iCheck; i++)
  {
    __CPROVER_assume((((3 - argc) >= 0) && (i >= 0)) && (((-1) + argc) >= 0));
    {
      if (0 != (err = pthread_join(checkPool[i], 0)))
      {
        fprintf(stderr, "pthread join error: %d\n", err);
        exit(-1);
      }

    }
  }

  return 0;
}

void *setThread(void *param)
{
  a = 1;
  b = -1;
  return 0;
}

void *checkThread(void *param)
{
  if (!(((a == 0) && (b == 0)) || ((a == 1) && (b == (-1)))))
  {
    fprintf(stderr, "Bug found!\n");
    ERROR:
    __VERIFIER_error();

    goto ERROR;
  }

  return 0;
}

