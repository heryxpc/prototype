
//  P() {}

int main(int argc, char **argv)
{

//  P() {}

   pthread_t id1, id2;

//  P(id1,id2) {}

   pthread_create(&id1, (void *) 0, t1, (void *) 0);

//  P(id1,id2) {}

   pthread_create(&id2, (void *) 0, t2, (void *) 0);

//  P(id1,id2) {}


   if (1>=144||1>=144) {

//  P() {0==-1}

ERROR:      __VERIFIER_error();
   }

//  P(id1,id2) {}


   return 0;
}
