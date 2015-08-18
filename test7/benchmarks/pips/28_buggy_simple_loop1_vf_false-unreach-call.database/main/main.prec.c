
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
