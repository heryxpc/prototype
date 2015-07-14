//#include "../verifier.h"
#include <assert.h>

int __VERIFIER_nondet_uint(void) { unsigned int val; return val; }

int main(void) {
  unsigned int x = 0;
  // odd numbers satisfy the assertion, even numbers don't
  // since is non deterministic, can't be determined if will or will not pass
  unsigned int y = 5;// __VERIFIER_nondet_uint();

  while (x < 99) {
    if (y % 2 == 0) x++;
    else x += 2;

    if (y % 2 == 0) x += 2;
    else x -= 2;

    if (y % 2 == 0) x += 2;
    else x += 2;

    if (y % 2 == 0) x += 2;
    else x -= 2;

    if (y % 2 == 0) x += 2;
    else x += 2;

    if (y % 2 == 0) x += 2;
    else x -= 4;

    if (y % 2 == 0) x += 2;
    else x += 4;

    if (y % 2 == 0) x += 2;
    else x += 2;

    if (y % 2 == 0) x += 2;
    else x -= 4;

    if (y % 2 == 0) x += 2;
    else x -= 4;
  }

  //__VERIFIER_assert((x % 2) == (y % 2));
  assert((x % 2) == (y % 2));
}
