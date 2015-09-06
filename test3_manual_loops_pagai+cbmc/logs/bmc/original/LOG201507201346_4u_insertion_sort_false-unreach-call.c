CBMC version 4.9 64-bit linux
file benchmarks/original/loops/insertion_sort_false-unreach-call.c: Parsing
Converting
Type-checking insertion_sort_false-unreach-call
Generating GOTO Program
Adding CPROVER library
Function Pointer Removal
Partial Inlining
Generic Property Instrumentation
Starting Bounded Model Checking
Unwinding loop c::main.0 iteration 1 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Unwinding loop c::main.1 iteration 1 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 17 function main thread 0
Unwinding loop c::main.0 iteration 1 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Unwinding loop c::main.0 iteration 2 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Unwinding loop c::main.1 iteration 2 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 17 function main thread 0
Unwinding loop c::main.0 iteration 1 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Unwinding loop c::main.0 iteration 2 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Unwinding loop c::main.0 iteration 3 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Unwinding loop c::main.1 iteration 3 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 17 function main thread 0
Unwinding loop c::main.0 iteration 1 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Unwinding loop c::main.0 iteration 2 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Unwinding loop c::main.0 iteration 3 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Not unwinding loop c::main.0 iteration 4 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 20 function main thread 0
Not unwinding loop c::main.1 iteration 4 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 17 function main thread 0
Unwinding loop c::main.2 iteration 1 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 27 function main thread 0
Unwinding loop c::main.2 iteration 2 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 27 function main thread 0
Unwinding loop c::main.2 iteration 3 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 27 function main thread 0
Not unwinding loop c::main.2 iteration 4 (4 max) file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 27 function main thread 0
size of program expression: 218 steps
simple slicing removed 19 assignments
Generated 4 VCC(s), 4 remaining after simplification
Passing problem to propositional reduction
Running propositional reduction
Post-processing
Solving with MiniSAT 2.2.0 with simplifier
124607 variables, 535624 clauses
SAT checker: negated claim is SATISFIABLE, i.e., does not hold
Runtime decision procedure: 1.512s
Building error trace

Counterexample:

State 3 file <built-in-additions> line 22 thread 0
----------------------------------------------------
  __CPROVER_thread_id=0 (00000000000000000000000000000000)

State 4 file <built-in-additions> line 23 thread 0
----------------------------------------------------
  __CPROVER_threads_exited=__CPROVER_threads_exited#1 (?)

State 5 file <built-in-additions> line 24 thread 0
----------------------------------------------------
  __CPROVER_next_thread_id=0 (00000000000000000000000000000000)

State 6 file <built-in-additions> line 58 thread 0
----------------------------------------------------
  __CPROVER_rounding_mode=0 (00000000000000000000000000000000)

State 7 file <built-in-additions> line 31 thread 0
----------------------------------------------------
  __CPROVER_deallocated=NULL (00000000000000000000000000000000)

State 8 file <built-in-additions> line 32 thread 0
----------------------------------------------------
  __CPROVER_dead_object=NULL (00000000000000000000000000000000)

State 9 file <built-in-additions> line 33 thread 0
----------------------------------------------------
  __CPROVER_malloc_object=NULL (00000000000000000000000000000000)

State 10 file <built-in-additions> line 34 thread 0
----------------------------------------------------
  __CPROVER_malloc_size=0 (00000000000000000000000000000000)

State 11 file <built-in-additions> line 35 thread 0
----------------------------------------------------
  __CPROVER_malloc_is_new_array=FALSE (0)

State 12 file <built-in-additions> line 36 thread 0
----------------------------------------------------
  __CPROVER_memory_leak=NULL (00000000000000000000000000000000)

State 13 file <built-in-additions> line 79 thread 0
----------------------------------------------------
  __CPROVER_pipe_count=0 (00000000000000000000000000000000)

State 17 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 14 function main thread 0
----------------------------------------------------
  SIZE=0 (00000000000000000000000000000000)

State 18 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 14 function main thread 0
----------------------------------------------------
  SIZE=4 (00000000000000000000000000000100)

State 19 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 15 function main thread 0
----------------------------------------------------
  i=0 (00000000000000000000000000000000)

State 20 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 15 function main thread 0
----------------------------------------------------
  j=0 (00000000000000000000000000000000)

State 21 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 15 function main thread 0
----------------------------------------------------
  k=0 (00000000000000000000000000000000)

State 22 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 15 function main thread 0
----------------------------------------------------
  key=0 (00000000000000000000000000000000)

State 23 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 16 function main thread 0
----------------------------------------------------
  key$array_size0=0 (00000000000000000000000000000000)

State 24 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 16 function main thread 0
----------------------------------------------------
  key$array_size0=4 (00000000000000000000000000000100)

State 25 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 16 function main thread 0
----------------------------------------------------
  v={ -2147483647, 32, 32, 0 } ({ 10000000000000000000000000000001, 00000000000000000000000000100000, 00000000000000000000000000100000, 00000000000000000000000000000000 })

State 26 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 17 function main thread 0
----------------------------------------------------
  j=1 (00000000000000000000000000000001)

State 28 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 18 function main thread 0
----------------------------------------------------
  key=32 (00000000000000000000000000100000)

State 29 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 19 function main thread 0
----------------------------------------------------
  i=0 (00000000000000000000000000000000)

State 31 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 25 function main thread 0
----------------------------------------------------
  v[1]=32 (00000000000000000000000000100000)

State 32 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 17 function main thread 0
----------------------------------------------------
  j=2 (00000000000000000000000000000010)

State 35 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 18 function main thread 0
----------------------------------------------------
  key=32 (00000000000000000000000000100000)

State 36 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 19 function main thread 0
----------------------------------------------------
  i=1 (00000000000000000000000000000001)

State 38 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 25 function main thread 0
----------------------------------------------------
  v[2]=32 (00000000000000000000000000100000)

State 39 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 17 function main thread 0
----------------------------------------------------
  j=3 (00000000000000000000000000000011)

State 42 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 18 function main thread 0
----------------------------------------------------
  key=0 (00000000000000000000000000000000)

State 43 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 19 function main thread 0
----------------------------------------------------
  i=2 (00000000000000000000000000000010)

State 46 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 23 function main thread 0
----------------------------------------------------
  i=1 (00000000000000000000000000000001)

State 49 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 22 function main thread 0
----------------------------------------------------
  v[2]=32 (00000000000000000000000000100000)

State 50 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 23 function main thread 0
----------------------------------------------------
  i=0 (00000000000000000000000000000000)

State 53 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 25 function main thread 0
----------------------------------------------------
  v[1]=0 (00000000000000000000000000000000)

State 54 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 17 function main thread 0
----------------------------------------------------
  j=4 (00000000000000000000000000000100)

State 57 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 27 function main thread 0
----------------------------------------------------
  k=1 (00000000000000000000000000000001)

State 61 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 28 function main thread 0
----------------------------------------------------
  cond=1 (00000000000000000000000000000001)

State 65 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 27 function main thread 0
----------------------------------------------------
  k=2 (00000000000000000000000000000010)

State 70 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 28 function main thread 0
----------------------------------------------------
  cond=1 (00000000000000000000000000000001)

State 74 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 27 function main thread 0
----------------------------------------------------
  k=3 (00000000000000000000000000000011)

State 79 file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 28 function main thread 0
----------------------------------------------------
  cond=0 (00000000000000000000000000000000)

Violated property:
  file benchmarks/original/loops/insertion_sort_false-unreach-call.c line 7 function __VERIFIER_assert
  assertion
  FALSE

VERIFICATION FAILED
