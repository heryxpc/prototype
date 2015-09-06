
//  P() {0==-1}

void __VERIFIER_assert(int expression)
{

//  P() {0==-1}

   if (!expression)

//  P() {0==-1}

ERROR:      ;

//  P() {0==-1}

   return;
}

//  P() {0==-1}

void __VERIFIER_assume(int expression)
{

//  P() {0==-1}

   if (!expression)

//  P() {0==-1}

LOOP:      ;

//  P() {0==-1}

   return;
}

//  P() {0==-1}

void __VERIFIER_error()
{

//  P() {0==-1}

   exit(-1);
}

//  P() {}

int __VERIFIER_nondet_int()
{

//  P() {}

   static int i = -1;

//  P() {}

   i++;

//  P(i) {}

   if (i==0) goto _switch_1_case_0;

//  P(i) {}

   if (i==1) goto _switch_1_case_1;

//  P(i) {}

   if (i==2) goto _switch_1_case_2;

//  P(i) {}

   if (i==3) {
   }
   else {
      goto _switch_1_default;
   }

//  P(__VERIFIER_nondet_int,i) {0<=i, i<=3}

_switch_1_case_3:   ;

//  P(__VERIFIER_nondet_int,i) {0<=i, i<=3}

   return 4;

//  P(__VERIFIER_nondet_int,i) {0<=i, i<=2}

_switch_1_case_2:   ;

//  P(__VERIFIER_nondet_int,i) {0<=i, i<=2}

   return 10;

//  P(__VERIFIER_nondet_int,i) {0<=i, i<=1}

_switch_1_case_1:   ;

//  P(__VERIFIER_nondet_int,i) {0<=i, i<=1}

   return 0;

//  P(i) {i==0}

_switch_1_case_0:   ;

//  P(i) {i==0}

   return 9;

//  P(__VERIFIER_nondet_int,i) {}

_switch_1_default:   ;

//  P(__VERIFIER_nondet_int,i) {}

   exit(1);
}

//  P() {0==-1}

int bar(char *x)
{

//  P() {0==-1}

   return __VERIFIER_nondet_int();
}

//  P() {0==-1}

int foo(int *x)
{

//  P() {0==-1}

   *x = __VERIFIER_nondet_int();

//  P() {0==-1}

   return *x;
}

//  P() {}

int main()
{

//  P() {}

   int i, j, ret, offset, tmp_cnt, tel_data, klen;
   /* source snippet*/

//  P(i,j,klen,offset,ret,tel_data,tmp_cnt) {}

   char x[1000];

//  P(i,j,klen,offset,ret,tel_data,tmp_cnt) {}


   for(i = 0; i <= 999; i += 1)

//  P(i,j,klen,offset,ret,tel_data,tmp_cnt) {i==0}

      x[i] = __VERIFIER_nondet_int();

//  P() {0==-1}


   for(i = 0; i <= 999; i += 1) {

//  P() {0==-1}


      ret = __VERIFIER_nondet_int();

//  P() {0==-1}

      if (ret!=0)

//  P() {0==-1}

         return -1;

//  P() {0==-1}

      tmp_cnt = __VERIFIER_nondet_int();

//  P() {0==-1}

      if (tmp_cnt<0)

//  P() {0==-1}

         return -1;

//  P() {0==-1}

      
      
      for(offset = 0; offset <= tmp_cnt-1; offset += 1) {

//  P() {0==-1}

         ret = foo(&tel_data);

//  P() {0==-1}

         if (ret==0||ret==1) goto l99999;

//  P() {0==-1}

         if (ret==-1) goto l99998;

//  P() {0==-1}

         
         
         j = 0;

//  P() {0==-1}

         while (x[j]!=0) {

//  P() {0==-1}


            if (x[i]==1)

//  P() {0==-1}

               memmove(&x[i], &x[i+1], 1001-(i+1));

//  P() {0==-1}

            j++;
         }

//  P() {0==-1}

         
         
         ret = bar(x);

//  P() {0==-1}


         if (ret!=-1)

//  P() {0==-1}


            ;
         else {

//  P() {0==-1}

            
            
            klen = strlen(x);

//  P() {0==-1}


            if (klen>20)

//  P() {0==-1}


               x[i] = 0;
            else if (klen>0)

//  P() {0==-1}

               x[i] = -1;
         }
         goto _loop_end_3;
l99998:         ;

//  P() {0==-1}



         goto _loop_end_3;
l99999:         ;

//  P() {0==-1}


         return 1;

//  P() {0==-1}

_loop_end_3:         ;
      }
   }

//  P() {0==-1}

   __VERIFIER_assert(offset>=0&&offset<=1000);

//  P() {0==-1}

   return 1;
}
