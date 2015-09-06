#include <stdlib.h>
//  P() {}

void __VERIFIER_error()
{

//  P() {}

   exit(-1);
}

void __VERIFIER_assert(int cond)
{

//  P() {}

   if (!cond)

//  P() {cond<=0}

ERROR:      __VERIFIER_error();

//  P() {1<=cond}

   return;
}

//  P() {}

//  P() {}

unsigned int __VERIFIER_nondet_uint()
{
}

//  P() {}

int main()
{

//  P() {}

   unsigned int SIZE = __VERIFIER_nondet_uint();

//  P(SIZE) {}

   int i, j, k, key;

//  P(SIZE,i,j,k,key) {}

   int v[SIZE];

//  P(SIZE,i,j,k,key) {}

   for(j = 1; j < SIZE; j += 1) {
      __CPROVER_assume(j+1<=SIZE && 1<=j);

//  P(SIZE,i,j,k,key) {j+1<=SIZE, 1<=j}

      key = v[j];

//  P(SIZE,i,j,k,key) {j+1<=SIZE, 1<=j}

      i = j-1;

//  P(SIZE,i,j,k,key) {i==j-1, i+2<=SIZE, 0<=i}


      while (i>=0&&v[i]>key) {
         
         __CPROVER_assume(j+1<=SIZE && 0<=i && i+1<=j);
//  P(SIZE,i,j,k,key) {j+1<=SIZE, 0<=i, i+1<=j}

         if (i<2)

//  P(SIZE,i,j,k,key) {j+1<=SIZE, 0<=i, i<=1, i+1<=j}

            v[i+1] = v[i];

//  P(SIZE,i,j,k,key) {j+1<=SIZE, 0<=i, i+1<=j}

         i = i-1;
      }

//  P(SIZE,i,j,k,key) {j+1<=SIZE, 0<=i+1, i+1<=j, 1<=j}

      v[i+1] = key;
   }

//  P(SIZE,i,j,k,key) {SIZE<=j, 1<=j}

   for(k = 1; k < SIZE; k += 1) 
   {
      __CPROVER_assume(SIZE<=j && k+1<=SIZE && 1<=j && 1<=k);
//  P(SIZE,i,j,k,key) {SIZE<=j, k+1<=SIZE, 1<=j, 1<=k}

      __VERIFIER_assert(v[k-1]<=v[k]);
   }

//  P(SIZE,i,j,k,key) {SIZE<=k, k<=j, 1<=k}

   return 0;
}
