
//  P() {}

void foo(int flag, float x)
{

//  P() {}

   int i, j = 1, a = 0, b = 0;

//  P(a,b,i,j) {a==0, b==0, j==1}

   if (flag)

//  P(a,b,i,j) {a==0, b==0, j==1}

      i = 0;
   else

//  P(a,b,i,j) {a==0, b==0, flag==0, j==1}

      i = 1;

//  P(a,b,i,j) {a==0, b==0, j==1, 0<=i, i<=1}

   while (x>0.) {

//  P(a,b,i,j) {b<=a, b+i<=a+j, b+2i<=a+2j+1, b+3i<=a+3j+3, 2a<=i,
//    i<=2a+1, j<=2a+1, a+1<=j}

      a++;

//  P(a,b,i,j) {b+1<=a, b+2i<=a+2j, b+i+1<=a+j, b+3i<=a+3j+2, i+1<=2a,
//    2a<=i+2, a<=j, j+1<=2a}

      b += j-i;

//  P(a,b,i,j) {b+3i<=a+3j, b+i+1<=a+j, b+2i+1<=a+2j, b+4i<=a+4j+2,
//    i+1<=2a, 2a<=i+2, a<=j, j+1<=2a}

      i += 2;

//  P(a,b,i,j) {b+i<=a+j+1, b+2i<=a+2j+3, b+3i<=a+3j+6, b+4i<=a+4j+10,
//    2a<=i, i<=2a+1, a<=j, j+1<=2a}

      if (i%2==0)

//  P(a,b,i,j) {b+i<=a+j+1, b+2i<=a+2j+3, b+3i<=a+3j+6, b+4i<=a+4j+10,
//    2a<=i, i<=2a+1, a<=j, j+1<=2a}

         j += 2;
      else

//  P(a,b,i,j) {b+i<=a+j+1, b+2i<=a+2j+3, b+3i<=a+3j+6, b+4i<=a+4j+10,
//    2a<=i, i<=2a+1, a<=j, j+1<=2a}

         j++;
   }

//  P(a,b,i,j) {b<=a, b+i<=a+j, b+2i<=a+2j+1, b+3i<=a+3j+3,
//    b+4i<=a+4j+6, 2a<=i, i<=2a+1, j<=2a+1, a+1<=j}

   if (flag)

//  P(a,b,i,j) {b<=a, b+i<=a+j, b+2i<=a+2j+1, b+3i<=a+3j+3,
//    b+4i<=a+4j+6, 2a<=i, i<=2a+1, j<=2a+1, a+1<=j}

      a==b?(void) 0:__assert_fail("a==b", "../benchmarks/foo.c", 18, __func__);
}
