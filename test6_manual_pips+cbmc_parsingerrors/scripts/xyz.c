
//  P() {0==-1}

SSL_METHOD * SSLv3_client_method(void)
{

//  P() {0==-1}

   char *tmp;

//  P() {0==-1}

   SSL_METHOD *tmp___0;

//  P() {0==-1}

   if (init) {

//  P() {0==-1}

      init = 0;

//  P() {0==-1}

      tmp___0 = sslv3_base_method();

//  P() {0==-1}

      tmp = (char *) tmp___0;

//  P() {0==-1}

      memcpy((void *) (char *) &SSLv3_client_data, (void *) tmp, sizeof(SSL_METHOD));

//  P() {0==-1}

      SSLv3_client_data.ssl_connect = &ssl3_connect;

//  P() {0==-1}

      SSLv3_client_data.get_ssl_method = &ssl3_get_client_method;
   }

//  P() {0==-1}

   return &SSLv3_client_data;
}

//  P() {0==-1}

void __VERIFIER_assert(int cond)
{

//  P() {0==-1}

   if (!cond)

//  P() {0==-1}

ERROR:      __VERIFIER_error();

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

//  P() {}

void __VERIFIER_error()
{

//  P() {}

   exit(-1);
}

//  P() {0==-1}

_Bool __VERIFIER_nondet_bool(void)
{

//  P() {0==-1}

   static unsigned int _ub = -1;

//  P() {0==-1}

   _ub++;

//  P() {0==-1}

   if (_ub==0) goto _switch_1_case_0;

//  P() {0==-1}

   if (_ub==1) goto _switch_1_case_1;

//  P() {0==-1}

   if (_ub==2) goto _switch_1_case_2;

//  P() {0==-1}

   if (_ub==3) {
   }
   else {
      goto _switch_1_default;
   }

//  P() {0==-1}

_switch_1_case_3:   ;

//  P() {0==-1}

   return 1;

//  P() {0==-1}

_switch_1_case_2:   ;

//  P() {0==-1}

   return 0;

//  P() {0==-1}

_switch_1_case_1:   ;

//  P() {0==-1}

   return 1;

//  P() {0==-1}

_switch_1_case_0:   ;

//  P() {0==-1}

   return 0;

//  P() {0==-1}

_switch_1_default:   ;

//  P() {0==-1}

   exit(1);
}

//  P() {0==-1}

char __VERIFIER_nondet_char(void)
{

//  P() {0==-1}

   static unsigned int _c = -1;

//  P() {0==-1}

   _c++;

//  P() {0==-1}

   if (_c==0) goto _switch_1_case_0;

//  P() {0==-1}

   if (_c==1) goto _switch_1_case_1;

//  P() {0==-1}

   if (_c==2) goto _switch_1_case_2;

//  P() {0==-1}

   if (_c==3) {
   }
   else {
      goto _switch_1_default;
   }

//  P() {0==-1}

_switch_1_case_3:   ;

//  P() {0==-1}

   return 4;

//  P() {0==-1}

_switch_1_case_2:   ;

//  P() {0==-1}

   return 10;

//  P() {0==-1}

_switch_1_case_1:   ;

//  P() {0==-1}

   return 0;

//  P() {0==-1}

_switch_1_case_0:   ;

//  P() {0==-1}

   return 9;

//  P() {0==-1}

_switch_1_default:   ;

//  P() {0==-1}

   exit(1);
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

unsigned char __VERIFIER_nondet_uchar(void)
{

//  P() {0==-1}

   static unsigned int _uc = -1;

//  P() {0==-1}

   _uc++;

//  P() {0==-1}

   if (_uc==0) goto _switch_1_case_0;

//  P() {0==-1}

   if (_uc==1) goto _switch_1_case_1;

//  P() {0==-1}

   if (_uc==2) goto _switch_1_case_2;

//  P() {0==-1}

   if (_uc==3) {
   }
   else {
      goto _switch_1_default;
   }

//  P() {0==-1}

_switch_1_case_3:   ;

//  P() {0==-1}

   return 4;

//  P() {0==-1}

_switch_1_case_2:   ;

//  P() {0==-1}

   return 10;

//  P() {0==-1}

_switch_1_case_1:   ;

//  P() {0==-1}

   return 0;

//  P() {0==-1}

_switch_1_case_0:   ;

//  P() {0==-1}

   return 9;

//  P() {0==-1}

_switch_1_default:   ;

//  P() {0==-1}

   exit(1);
}

//  P() {0==-1}

unsigned int __VERIFIER_nondet_uint(void)
{

//  P() {0==-1}

   static unsigned int _ui = -1;

//  P() {0==-1}

   _ui++;

//  P() {0==-1}

   if (_ui==0) goto _switch_1_case_0;

//  P() {0==-1}

   if (_ui==1) goto _switch_1_case_1;

//  P() {0==-1}

   if (_ui==2) goto _switch_1_case_2;

//  P() {0==-1}

   if (_ui==3) {
   }
   else {
      goto _switch_1_default;
   }

//  P() {0==-1}

_switch_1_case_3:   ;

//  P() {0==-1}

   return 4;

//  P() {0==-1}

_switch_1_case_2:   ;

//  P() {0==-1}

   return 10;

//  P() {0==-1}

_switch_1_case_1:   ;

//  P() {0==-1}

   return 0;

//  P() {0==-1}

_switch_1_case_0:   ;

//  P() {0==-1}

   return 9;

//  P() {0==-1}

_switch_1_default:   ;

//  P() {0==-1}

   exit(1);
}

//  P() {}

int main(void)
{

//  P() {}

   SSL *s;

//  P() {}

   s = malloc(sizeof(SSL));

//  P() {}

   s->s3 = malloc(sizeof(struct ssl3_state_st ));

//  P() {}

   s->state = 12292;

//  P() {}

   ssl3_connect(s);

//  P() {0==-1}

   return 0;
}

//  P() {0==-1}

static SSL_METHOD * ssl3_get_client_method(int ver)
{

//  P() {0==-1}

   SSL_METHOD *tmp;

//  P() {0==-1}

   if (ver==768) {

//  P() {0==-1}

      tmp = SSLv3_client_method();

//  P() {0==-1}

      return tmp;
   }
   else

//  P() {0==-1}

      return (SSL_METHOD *) (void *) 0;
}

//  P() {}

int ssl3_connect(SSL *s)
{

//  P() {}

   BUF_MEM *buf;

//  P() {}

   unsigned long int tmp;

//  P(tmp) {}

   unsigned long int l;

//  P(l,tmp) {}

   long int num1;

//  P(l,num1,tmp) {}

   void (*cb)();

//  P(l,num1,tmp) {}

   int ret;

//  P(l,num1,ret,tmp) {}

   int new_state;

//  P(l,new_state,num1,ret,tmp) {}

   int state;

//  P(l,new_state,num1,ret,state,tmp) {}

   int skip;

//  P(l,new_state,num1,ret,skip,state,tmp) {}

   int *tmp___0;

//  P(l,new_state,num1,ret,skip,state,tmp) {}

   int tmp___1;

//  P(l,new_state,num1,ret,skip,state,tmp,tmp___1) {}

   int tmp___2;

//  P(l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2) {}

   int tmp___3;

//  P(l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,tmp___3) {}

   int tmp___4;

//  P(l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,tmp___3,
//    tmp___4) {}

   int tmp___5;

//  P(l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,tmp___3,
//    tmp___4,tmp___5) {}

   int tmp___6;

//  P(l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,tmp___3,
//    tmp___4,tmp___5,tmp___6) {}

   int tmp___7;

//  P(l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,tmp___3,
//    tmp___4,tmp___5,tmp___6,tmp___7) {}

   int tmp___8;

//  P(l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,tmp___3,
//    tmp___4,tmp___5,tmp___6,tmp___7,tmp___8) {}

   long int tmp___9;


//  P(l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,tmp___3,
//    tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   int blastFlag;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   blastFlag = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {blastFlag==0}

   s->state = 12292;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->hit = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}


   tmp = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   cb = (void (*)()) (void *) 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   ret = -1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {ret==-1}

   skip = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {ret==-1, skip==0}

   *tmp___0 = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if ((unsigned long int) s->info_callback!=(unsigned long int) (void *) 0)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      cb = s->info_callback;
   else if ((unsigned long int) s->ctx->info_callback!=(unsigned long int) (void *) 0)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      cb = s->ctx->info_callback;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->in_handshake += 1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (tmp___1&12288)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      if (tmp___2&16384)
         ;
l99997:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (!1) goto while_0_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

while_0_continue:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   state = s->state;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==12292) goto switch_1_12292;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==16384) goto switch_1_16384;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4096) goto switch_1_4096;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==20480) goto switch_1_20480;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4099) goto switch_1_4099;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4368) goto switch_1_4368;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4369) goto switch_1_4369;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4384) goto switch_1_4384;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4385) goto switch_1_4385;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4400) goto switch_1_4400;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4401) goto switch_1_4401;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4416) goto switch_1_4416;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4417) goto switch_1_4417;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4432) goto switch_1_4432;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4433) goto switch_1_4433;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4448) goto switch_1_4448;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4449) goto switch_1_4449;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4464) goto switch_1_4464;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4465) goto switch_1_4465;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4466) goto switch_1_4466;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4467) goto switch_1_4467;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4480) goto switch_1_4480;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4481) goto switch_1_4481;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4496) goto switch_1_4496;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4497) goto switch_1_4497;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4512) goto switch_1_4512;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4513) goto switch_1_4513;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4528) goto switch_1_4528;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4529) goto switch_1_4529;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4560) goto switch_1_4560;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4561) goto switch_1_4561;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==4352) goto switch_1_4352;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->state==3) {

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_3:      if ((unsigned long int) s->init_buf!=(unsigned long int) (void *) 0)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

         s->init_buf = (BUF_MEM *) (void *) 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      if (!(s->s3->flags&4L))
         ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      s->init_num = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      s->new_session = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      if (s->hit)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

         s->ctx->stats.sess_hit += 1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      ret = 1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {ret==1}

      s->handshake_func = (int (*)()) &ssl3_connect;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      s->ctx->stats.sess_connect_good += 1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      if ((unsigned long int) cb!=(unsigned long int) (void *) 0)
         ;
   }
   else

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_default:      ret = -1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

end:   s->in_handshake -= 1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if ((unsigned long int) cb!=(unsigned long int) (void *) 0)
      ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   return ret;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4352:   num1 = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (num1>0L) goto l99999;
l99992:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->state = s->s3->tmp.next_state;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_break:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (!s->s3->tmp.reuse_message) goto l99998;
l99996:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   skip = 0;
   goto l99997;
l99998:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (!skip) {
   }
   else {
      goto l99996;
   }

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {skip<=0}

   if (s->debug) goto l99995;
l99994:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if ((unsigned long int) cb!=(unsigned long int) (void *) 0)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      if (s->state!=state) {

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

         new_state = s->state;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

         s->state = state;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

         s->state = new_state;
      }
   goto l99996;
l99995:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   ret = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) {
      goto end;
   }
   else {
      goto l99994;
   }
l99999:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=num1}

   s->rwstate = 2;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   tmp___9 = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   num1 = (long int) (int) tmp___9;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (num1<=0L) goto l99993;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=num1}

   s->rwstate = 1;
   goto l99992;
l99993:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {num1<=0}

   ret = -1;
   goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4561:   ret = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   if (s->hit)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

      s->state = 4512;
   else

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

      s->state = 3;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;
   goto switch_1_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4560:   ;
   goto switch_1_4561;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4529:   ret = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   s->state = 4352;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->s3->flags &= -5L;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->hit) {

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      s->s3->tmp.next_state = 3;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      if (s->s3->flags&2L) {

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

         s->state = 3;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

         s->s3->flags |= 4L;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

         s->s3->delay_buf_pop_ret = 0;
      }
   }
   else

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      s->s3->tmp.next_state = 4560;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;
   goto switch_1_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4528:   ;
   goto switch_1_4529;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4513:   ret = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   s->state = 4528;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->session->cipher = s->s3->tmp.new_cipher;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if ((unsigned long int) s->s3->tmp.new_compression==(unsigned long int) (void *) 0)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      s->session->compress_meth = 0;
   else

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      s->session->compress_meth = s->s3->tmp.new_compression->id;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   tmp___7 = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (!tmp___7) goto l99991;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=tmp___7}

   tmp___8 = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (!tmp___8) {
   }
   else {
      goto switch_1_break;
   }

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {tmp___8<=0}

   ret = -1;
   goto end;
l99991:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {tmp___7<=0}

   ret = -1;
   goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4512:   ;
   goto switch_1_4513;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4497:   ret = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   s->state = 4512;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->s3->change_cipher_spec = 0;
   goto switch_1_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4496:   ;
   goto switch_1_4497;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4481:   ret = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   l = s->s3->tmp.new_cipher->algorithms;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   if (s->s3->tmp.cert_req==1)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

      s->state = 4496;
   else {

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

      s->state = 4512;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

      s->s3->change_cipher_spec = 0;
   }

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;
   goto switch_1_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4480:   ;
   goto switch_1_4481;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4467:   ret = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   s->state = 4480;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;
   goto switch_1_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4466:   ;
   goto switch_1_4467;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4465:   ;
   goto switch_1_4466;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4464:   ;
   goto switch_1_4465;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4449:   ret = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (blastFlag==4) goto ERROR;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   if (s->s3->tmp.cert_req)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

      s->state = 4464;
   else

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

      s->state = 4480;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;
   goto switch_1_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4448:   ;
   goto switch_1_4449;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4433:   ret = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (blastFlag==5) goto ERROR;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   s->state = 4448;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;
   goto switch_1_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4432:   ;
   goto switch_1_4433;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4417:   ret = __VERIFIER_nondet_int();

//  P() {0==-1}

   if (blastFlag==3)

//  P() {0==-1}

      blastFlag = 4;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   s->state = 4432;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   tmp___6 = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (!tmp___6) {
   }
   else {
      goto switch_1_break;
   }

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {tmp___6<=0}

   ret = -1;
   goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4416:   ;
   goto switch_1_4417;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4401:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (s->s3->tmp.new_cipher->algorithms&256UL) goto l99990;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   ret = __VERIFIER_nondet_int();

//  P() {0==-1}

   if (blastFlag==2)

//  P() {0==-1}

      blastFlag = 3;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;
l99989:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->state = 4416;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;
   goto switch_1_break;
l99990:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   skip = 1;
   goto l99989;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4400:   ;
   goto switch_1_4401;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4385:   ret = __VERIFIER_nondet_int();

//  P() {0==-1}

   if (blastFlag==1)

//  P() {0==-1}

      blastFlag = 2;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   if (s->hit)

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

      s->state = 4560;
   else

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

      s->state = 4400;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;
   goto switch_1_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4384:   ;
   goto switch_1_4385;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4369:   s->shutdown = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   ret = __VERIFIER_nondet_int();

//  P() {0==-1}

   if (blastFlag==0)

//  P() {0==-1}

      blastFlag = 1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (ret<=0) goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=ret}

   s->state = 4384;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if ((unsigned long int) s->bbio!=(unsigned long int) s->wbio)
      ;
   goto switch_1_break;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4368:   ;
   goto switch_1_4369;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4099:   s->server = 0;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if ((unsigned long int) cb!=(unsigned long int) (void *) 0)
      ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if ((s->version&65280)!=768) goto l99988;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->type = 4096;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if ((unsigned long int) s->init_buf==(unsigned long int) (void *) 0) goto l99987;
l99983:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   tmp___4 = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (!tmp___4) goto l99986;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=tmp___4}

   tmp___5 = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (!tmp___5) goto l99985;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=tmp___5}

   s->state = 4368;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->ctx->stats.sess_connect += 1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->init_num = 0;
   goto switch_1_break;
l99985:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {tmp___5<=0}

   ret = -1;
   goto end;
l99986:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {tmp___4<=0}

   ret = -1;
   goto end;
l99987:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   tmp___3 = __VERIFIER_nondet_int();

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   if (!tmp___3) goto l99984;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {1<=tmp___3}

   s->init_buf = buf;
   goto l99983;
l99984:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9)
//    {tmp___3<=0}

   ret = -1;
   goto end;
l99988:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   ret = -1;
   goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_20480:   ;
   goto switch_1_4099;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_4096:   ;
   goto switch_1_20480;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_16384:   ;
   goto switch_1_4096;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

switch_1_12292:   s->new_session = 1;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->state = 4096;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   s->ctx->stats.sess_connect_renegotiate += 1;
   goto switch_1_16384;

//  P() {0==-1}

while_0_break:   ;
   goto end;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

ERROR:   ;

//  P(blastFlag,l,new_state,num1,ret,skip,state,tmp,tmp___1,tmp___2,
//    tmp___3,tmp___4,tmp___5,tmp___6,tmp___7,tmp___8,tmp___9) {}

   __VERIFIER_error();
}

//  P() {0==-1}

SSL_METHOD * sslv3_base_method(void)
{

//  P() {0==-1}

   return (void *) 0;
}
