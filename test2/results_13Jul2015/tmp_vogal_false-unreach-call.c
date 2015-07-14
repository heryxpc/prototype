[0;1;31m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0m[0;1;35m[0mextern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: /* assert not proved */
           __VERIFIER_error();
  }
  return;
}
#define MAX 10

extern char __VERIFIER_nondet_char();

main(void)
{
  /* reachable */
  char string_entrada[MAX], vetor_vogais[]={'a','A','e','E','i','I','o','O','u','U','\0'};; 
  unsigned int  i,j,cont, tam_string, n_caracter;

  for(/* invariant:
      10-i >= 0
      i >= 0
      */
      i=0;i<MAX;i++)
    string_entrada[i] = __VERIFIER_nondet_char();

  string_entrada[MAX-1]='\0';
  
  n_caracter = 0;
  /* invariant:
  n_caracter >= 0
  */
  while(string_entrada[n_caracter]!='\0')
    n_caracter++;

  cont = 0;
  for(/* invariant:
      -cont+8*i >= 0
      -i+n_caracter >= 0
      cont >= 0
      */
      i=0;i<n_caracter;i++)
     for(/* invariant:
         -cont+j+8*i >= 0
         8-j >= 0
         -1-i+n_caracter >= 0
         i >= 0
         j >= 0
         cont >= 0
         */
         j=0;j<8;j++)
        if(string_entrada[i] == vetor_vogais[j])
           cont++;
           
  i=0;
  int cont_aux = 0;
  /* invariant:
  -cont_aux+10*i >= 0
  cont >= 0
  cont_aux >= 0
  */
  while(string_entrada[i]!='\0')
  {
    for(/* invariant:
        -cont_aux+j+10*i >= 0
        10-j >= 0
        i >= 0
        cont >= 0
        j >= 0
        cont_aux >= 0
        */
        j=0;j<10;j++)
    {
        if(string_entrada[i] == vetor_vogais[j])
           cont_aux++;
    }       
    i++;       
  }    
  __VERIFIER_assert(cont_aux==cont);                          
/* reachable */
}
