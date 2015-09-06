# 32
int
main(int argc, char **argv)
{
  pthread_t id1, id2;

  pthread_create(&id1, ((void *)0), t1, ((void *)0));
  pthread_create(&id2, ((void *)0), t2, ((void *)0));

  if (i >= 144 || j >= 144) {
    ERROR: __VERIFIER_error();
  }

  return 0;
}
