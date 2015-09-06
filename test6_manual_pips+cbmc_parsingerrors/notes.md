# Tools
1. Pagai
 + path: /home/heryxpc/Documents/soton/dissertation/tools/pagai
2. pips
 + path: /home/heryxpc/Documents/soton/dissertation/tools/pips/MYPIPS/prod/pips/bin
3. cbmc
 + path: /home/heryxpc/Documents/soton/dissertation/tools/cbmc/cbmc-4-9-linux-64
4. cseq
 + path: /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg

# Benchmarks
## Sequential loops
* insertion_sort_false-unreach-call.c
* s3_false-unreach-call.i
* n.c24_false-unreach-call.i
* SpamAssassin-loop_true-unreach-call.i
* apache-escape-absolute_true-unreach-call.i
* heapsort_true-unreach-call.i
* nested6_true-unreach-call.i
* nested9_true-unreach-call.i

# Tests executed
 + insertion_sort_false-unreach-call.c
  1.  time tpips -s insertion_sort_false-unreach-call.tpips > ../results/pips_anno/insertion_sort_false-unreach-call.c
   * Result:  
   	Checking C syntax of file "../benchmarks/insertion_sort_false-unreach-call.c"
../benchmarks/insertion_sort_false-unreach-call.c: In function ‘__VERIFIER_assert’:
../benchmarks/insertion_sort_false-unreach-call.c:7:5: warning: label ‘ERROR’ defined but not used [-Wunused-label]
     ERROR: __VERIFIER_error();
     ^
Preprocessing file ../benchmarks/insertion_sort_false-unreach-call.c
Splitting file    ./model.database/Tmp/insertion_sort_false-unreach-call.cpp_processed.c
user warning in csplit_parser_error: Corrupted or non-supported C constructs.
Make sure your code is compiled by gcc -stc=c99 first, and/or set proper PIPS option, CHECK_FORTRAN_SYNTAX_BEFORE_RUNNING_PIPS or CHECK_C_SYNTAX_BEFORE_RUNNING_PIPS.
user error in csplit_parser_error: Attribute lists are not supported yet.
   * Actions:  
  Translated:  
  extern void __VERIFIER_error() __attribute__ ((__noreturn__));  
  To:  
  #include <stdlib.h>
  void __VERIFIER_error() { exit(-1) };  
  2. time tpips -s insertion_sort_false-unreach-call.tpips > ../results/pips_anno/insertion_sort_false-unreach-call.c
   * Result:  
   results/pips_anno/insertion_sort_false-unreach-call.c  
   + Time:  
   	real	0m0.485s
	user	0m0.390s
	sys	0m0.093s
  3. sublime ../results/pips_anno/insertion_sort_false-unreach-call.c 
   * Actions:  
     Added __CPROVER_assume for loop postconditions
  4. time cbmc --unwind 2 --no-unwinding-assertions --32 ../results/pips_anno/insertion_sort_false-unreach-call.c > ../results/cbmc/insertion_sort_false-unreach-call.log

    * Results:  
      file ../results/pips_anno/insertion_sort_false-unreach-call.c line 13 function __VERIFIER_assert: function `c::__VERIFIER_error' is not declared
      file ../results/pips_anno/insertion_sort_false-unreach-call.c line 27 function __VERIFIER_error: function `c::exit' is not declared
    + Action:  
      Added #include <stdlib.h> that PIPS removed  
   5. time cbmc --unwind 2 --no-unwinding-assertions --32 ../results/pips_anno/insertion_sort_false-unreach-call.c > ../results/cbmc/insertion_sort_false-unreach-call.log  
     * Results:  
       file ../results/pips_anno/insertion_sort_false-unreach-call.c line 13 function __VERIFIER_assert: function `c::__VERIFIER_error' is not declared
     * Action  
       Relocated function __VERIFIER_error
   6. time cbmc --unwind 4 --no-unwinding-assertions --32 ../results/pips_anno/insertion_sort_false-unreach-call.c > ../results/cbmc/insertion_sort_false-unreach-call.log 
     * Results:  
    Runtime decision procedure: 16.505s
	VERIFICATION SUCCESSFUL 
	 * Actions:  
	Removed invariant "__CPROVER_assume(i==j-1 && i+2<=SIZE && 0<=i);" since it does not find the error with it. This was a loop precondition, not a postcondition
   7. time cbmc --unwind 4 --no-unwinding-assertions --32 ../results/pips_anno/insertion_sort_false-unreach-call.c > ../results/cbmc/insertion_sort_false-unreach-call.log  
	 * Results:  
	  VERIFICATION FAILED  
	 * Time:  
	real	0m1.938s  
	user	0m1.820s  
	sys	0m0.096s  
	 * Conclusion:  
	Time is 100 millis slower, however PIPS produced more preconditions that can affect behaviour of the analysis. Using those preconditions may translate into possible increased performance or in code slicing.
	+ Think notes:
	Despite the fact that PIPS produced the opposite effect (affected analysis result, increased time execution) output precondition and postconditions obtained demonstrate a bigger effect on cbmc verification. Additionally, those preconditions can be used to slice the code and reduce bmc analysis, for example:
		__CPROVER_assume(SIZE<=j && k+1<=SIZE && 1<=j && 1<=k);  

	//  P(SIZE,i,j,k,key) {SIZE<=j, k+1<=SIZE, 1<=j, 1<=k}  

        __VERIFIER_assert(v[k-1]<=v[k]);  

    Represent an invariant that could reduce asserts related to j and k, possibly affecting v[k].

 + s3_false-unreach-call
   1. time tpips -s s3_false-unreach-call.tpips > ../results/pips_anno/s3_false-unreach-call.c
     * Results:  
     Compilation errors avoided pips to produce a valid transformation.
     Even after adding code:
     //extern void __VERIFIER_error() __attribute__ ((__noreturn__));
	 #include <stdlib.h>
	 void __VERIFIER_error() { exit(-1); };  
	   * Action: 
	 Removed then:  
	 // typedef unsigned int size_t;  
	 since was already part of stdlib.h

	 Added implementation to VERIFIER_nondet_int()
	 int __VERIFIER_nondet_int(void) {return 0;};

	 But major problem was on sslv3_base_method which only compiled after adding the implementation:  
	 SSL_METHOD *sslv3_base_method(void) {return NULL;};
	   * Think notes:  
	 This changes affect completely behaviour of code, making them analysis dependant. Another implementation is required to obtain an equivalent program from original one, like the case of __VERIFIER_error().
   * Action:
   Created a new library "verifier.h" that may solve the errors during compilation preprocessing.
  2. tpips s3_false-unreach-call.tpips > ../results/pips_anno/s3_false-unreach-call.c  

    * Results:  
    Generated file equivalent with precoditions.  
    *  Think notes:  
    Code transformation added an error condition as part of the original program on a place other tools (Pagai) found. This means transformation adds deducted that really are invariants.
    Also, all code added in "verifier.h" was included into transformed program were could be executed.
    * Actions:  
    Looked for preconditions after loops that can be added as invariants.
  3. time cbmc --unwind 12 --no-unwinding-assertions --32 ../results/pips_anno/s3_false-unreach-call.c  
  * Results:  
  Parsing errors. PIPS removed declaration of complex struct.
  * Action:  
  Added missing structs.
  4. time cbmc --unwind 12 --no-unwinding-assertions --32 ../results/pips_anno/s3_false-unreach-call.c





