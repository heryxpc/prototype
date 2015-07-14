extern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert OK */
           __VERIFIER_error();
  }
  return;
}

_Bool __VERIFIER_nondet_bool();

int main(){
   int a[5];
   int len=0;
   _Bool c=/* reachable */
           __VERIFIER_nondet_bool();
   int i;


   /* invariant:
   4-len >= 0
   len >= 0
   */
   while(c){
     
      if (len==4)
         len =0;
      
      a[len]=0;

      len++;
   }
   __VERIFIER_assert(len==5);
   /* reachable */
   return 1;

   
}
