
//  P() {0==-1}

void __VERIFIER_error()
{

//  P() {0==-1}

   (void) 0;
}

//  P() {}

int main()
{

//  P() {}

   pthread_t t;

//  P(t) {}


   while (1) {

//  P(t) {}

      pthread_create(&t, 0, thr1, 0);
   }
}

//  P() {}

int pthread_create(pthread_t *__newthread, const pthread_attr_t *__attr, void *(*__start_routine)(void *), void *__arg)
{
}

//  P() {0==-1}

void * thr1(void *arg)
{

//  P() {0==-1}

   unsigned int x, y, z;

//  P() {0==-1}

   int i, j, k;

//  P() {0==-1}

   i = 0;
l99993:   ;

//  P() {0==-1}

   if (!(i<x)) goto l99999;

//  P() {0==-1}

   j = i+1;
l99994:   ;

//  P() {0==-1}

   if (!(j<y)) goto l99998;

//  P() {0==-1}

   k = j;
l99996:   ;

//  P() {0==-1}

   if (!(k<z)) goto l99997;

//  P() {0==-1}

   if (!(k>i)) goto ERROR;

//  P() {0==-1}

   k++;
   goto l99996;

//  P() {0==-1}

ERROR:   __VERIFIER_error();

//  P() {0==-1}

   (void) 0;
   goto l99995;
l99997:   ;

//  P() {0==-1}

   j++;
   goto l99994;
l99998:   ;

//  P() {0==-1}

   i++;
   goto l99993;
l99999:   ;

//  P() {0==-1}

/* uncomment to make error go away: x == 0 ||*/   if (!(i==x&&(j==y||y<=x+1)&&(x==0||y<=x+1||k==z||z<y))) goto ERROR;
l99995:   ;

//  P() {0==-1}


   return 0;
}
