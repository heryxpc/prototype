extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }
  return;
}

#define MAX 5

extern char __VERIFIER_nondet_char();

int main()
{
  char string_A[MAX], string_B[MAX];
  int i, j, nc_A, nc_B, found=0;
  
  
  for(/* reachable */
      /* invariant:
      5-i >= 0
      i >= 0
      */
      i=0; i<MAX; // safe
                  i++)
    string_A[i]=// unsafe: possible undefined behavior
                __VERIFIER_nondet_char();    
  // safe
  // unsafe: possible undefined behavior
  __VERIFIER_assume(string_A[MAX-1]=='\0');

  for(/* invariant:
      5-i >= 0
      i >= 0
      */
      i=0; i<MAX; // safe
                  i++)
    string_B[i]=// unsafe: possible undefined behavior
                __VERIFIER_nondet_char();    
  // safe
  // unsafe: possible undefined behavior
  __VERIFIER_assume(string_B[MAX-1]=='\0');

  nc_A = 0;
  /* invariant:
  2147483647-nc_A >= 0
  nc_A >= 0
  */
  // unsafe: possible undefined behavior
  while(string_A[nc_A]!='\0')
    // unsafe: possible undefined behavior
    nc_A++;

  nc_B = 0;
  /* invariant:
  2147483647-nc_B >= 0
  2147483647-nc_A >= 0
  nc_A >= 0
  nc_B >= 0
  */
  // unsafe: possible undefined behavior
  while(string_B[nc_B]!='\0')
    // unsafe: possible undefined behavior
    nc_B++;

  __VERIFIER_assume(nc_B >= nc_A);
  
  
  i=j=0;
  /* invariant:
  2147483647-nc_B >= 0
  2147483647-nc_A >= 0
  -j+i >= 0
  j >= 0
  nc_A-i >= 0
  nc_B-j >= 0
  2147483647*nc_B-i >= 0
  */
  while((i<nc_A) && (j<nc_B))
  {
    // unsafe: possible undefined behavior
    // unsafe: possible undefined behavior
    if(string_A[i] == string_B[j]) 
    {
       // safe
       i++;
       // safe
       j++;
    }   
    else
    {
       // safe
       // safe
       i = i-j+1;
       j = 0;
    }   
  } 

  // safe
  found = (j>nc_B-1)<<i;
  
  __VERIFIER_assert(found == 0 || found == 1);

/* reachable */
}

