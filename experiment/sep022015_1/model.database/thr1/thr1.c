# 8
void* thr1(void* arg){
  unsigned int x, y, z;
  int i, j, k;
  for(i=0; i<x; i++) {
    for(j=i+1; j<y; j++) {
      for(k = j; k < z; k++) {
 { if(!(k > i)) { goto ERROR; } };
      }
    }
  }

  { if(!(i == x && (/* uncomment to make error go away: x == 0 ||*/ j == y || y <= x+1) && (x == 0 || y <= x+1 || k == z || z < y))) { ERROR: __VERIFIER_error();(void)0; } } ;

  return 0;
}
