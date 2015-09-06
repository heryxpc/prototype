# 25
int main()
{
  pthread_t t;

  while(1)
  {
   pthread_create(&t, 0, thr1, 0);
  }
}
