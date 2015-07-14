extern void __assert_fail();
extern void __assumption_declared();
extern void __assert_perror_fail();
extern void __assert();
int main()
{
  int x = 0;
  int y = 0;
  assume(102-x-y >= 0 && y >= 0 && x-y >= 0 );
  while (1)
  {
    if (x <= 50)
    {
      y++;
    }
    else
      y--;

    if (y < 0)
      break;

    x++;
  }

  (x + y) <= 101 ? (void) 0 : __assert_fail();
  x <= 102 ? (void) 0 : __assert_fail();
}

