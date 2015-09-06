#include <stdlib.h>

unsigned int __VERIFIER_nondet_uint(void) {
  static unsigned int _ui = -1;
  _ui++;
  switch (_ui) {
    case 0:
      return 9;
    case 1:
      return 0;
    case 2:
      return 10;
    case 3:
      return 4;
    default:
      exit(EXIT_FAILURE);
  }
}
_Bool __VERIFIER_nondet_bool(void) {
 static unsigned int _ub = -1;
  _ub++;
  switch (_ub) {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 0;
    case 3:
      return 1;
    default:
      exit(EXIT_FAILURE);
  } 
}
char __VERIFIER_nondet_char(void) {
  static unsigned int _c = -1;
  _c++;
  switch (_c) {
    case 0:
      return 9;
    case 1:
      return 0;
    case 2:
      return 10;
    case 3:
      return 4;
    default:
      exit(EXIT_FAILURE);
  }
}
unsigned char __VERIFIER_nondet_uchar(void) {
  static unsigned int _uc = -1;
  _uc++;
  switch (_uc) {
    case 0:
      return 9;
    case 1:
      return 0;
    case 2:
      return 10;
    case 3:
      return 4;
    default:
      exit(EXIT_FAILURE);
  }
}

void __VERIFIER_error() { exit(-1); };

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}

void __VERIFIER_assume(int expression) { if (!expression) { LOOP: goto LOOP; }; return; }

int __VERIFIER_nondet_int() {
  static int i = -1;
  i++;
  switch (i) {
    case 0:
      return 9;
    case 1:
      return 0;
    case 2:
      return 10;
    case 3:
      return 4;
    default:
      exit(EXIT_FAILURE);
  }
}

