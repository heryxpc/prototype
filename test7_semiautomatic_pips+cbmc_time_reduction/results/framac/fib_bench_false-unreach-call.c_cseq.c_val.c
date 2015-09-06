[kernel] Parsing FRAMAC_SHARE/libc/__fc_builtin_for_normalization.i (no preprocessing)
[kernel] Parsing fib_bench_false-unreach-call.c_cseq.c (with preprocessing)
fib_bench_false-unreach-call.c_cseq.c:136:[kernel] warning: Body of function __cs_cond_wait_1 falls-through. Adding a return statement
[value] Analyzing a complete application starting at main
[value] Computing initial state
[value] Initial state computed
[value] Values of globals at initialization
  __FC_errno ∈ [--..--]
  __fc_stdin ∈ {{ NULL ; &S___fc_stdin[0] }}
  __fc_stdout ∈ {{ NULL ; &S___fc_stdout[0] }}
  __fc_fopen[0..511] ∈ {0}
  _p__fc_fopen ∈ {{ &__fc_fopen[0] }}
  __fc_random_counter ∈ {0}
  __fc_rand_max ∈ {32767}
  __fc_heap_status ∈ [--..--]
  __cs_active_thread[0] ∈ {1}
                    [1..2] ∈ {0}
  __cs_pc[0..2] ∈ {0}
  __cs_pc_cs[0..2] ∈ {0}
  __cs_thread_index ∈ {0}
  __cs_thread_lines[0] ∈ {3}
                   [1..2] ∈ {7}
  __cs_threadargs[0..2] ∈ {0}
  i ∈ {1}
  j ∈ {1}
  __cs_local_t1_k ∈ {0}
  __cs_local_t2_k ∈ {0}
  __cs_local_main_id1 ∈ {0}
  __cs_local_main_id2 ∈ {0}
  __cs_local_main___cs_tmp_if_cond_0 ∈ {0}
  S___fc_stdin[0].__fc_stdio_id ∈ [--..--]
              [0].[bits 32 to 63] ∈ UNINITIALIZED
              [0]{.__fc_position; .__fc_error; .__fc_eof} ∈ [--..--]
              [0].[bits 144 to 159] ∈ UNINITIALIZED
              [0].__fc_flags ∈ [--..--]
              [0].__fc_inode ∈ {{ NULL ; &S___fc_inode_0_S___fc_stdin[0] }}
              [0].__fc_real_data ∈
              {{ NULL ; &S___fc_real_data_0_S___fc_stdin[0] }}
              [0].__fc_real_data_max_size ∈ [--..--]
              [0].[bits 352 to 383] ∈ UNINITIALIZED
              [1].__fc_stdio_id ∈ [--..--]
              [1].[bits 32 to 63] ∈ UNINITIALIZED
              [1]{.__fc_position; .__fc_error; .__fc_eof} ∈ [--..--]
              [1].[bits 144 to 159] ∈ UNINITIALIZED
              [1].__fc_flags ∈ [--..--]
              [1].__fc_inode ∈ {{ NULL ; &S___fc_inode_1_S___fc_stdin[0] }}
              [1].__fc_real_data ∈
              {{ NULL ; &S___fc_real_data_1_S___fc_stdin[0] }}
              [1].__fc_real_data_max_size ∈ [--..--]
              [1].[bits 352 to 383] ∈ UNINITIALIZED
  S___fc_inode_0_S___fc_stdin[0]{.st_dev; .st_ino; .st_mode; .st_nlink; .st_uid; .st_gid; .st_rdev} ∈
                             [--..--]
                             [0].[bits 224 to 255] ∈ UNINITIALIZED
                             {[0]{.st_size; .st_atime; .st_mtime; .st_ctime; .st_blksize; .st_blocks}; [1]{.st_dev; .st_ino; .st_mode; .st_nlink; .st_uid; .st_gid; .st_rdev}} ∈
                             [--..--]
                             [1].[bits 224 to 255] ∈ UNINITIALIZED
                             [1]{.st_size; .st_atime; .st_mtime; .st_ctime; .st_blksize; .st_blocks} ∈
                             [--..--]
  S___fc_real_data_0_S___fc_stdin[0..1] ∈ [--..--]
  S___fc_inode_1_S___fc_stdin[0]{.st_dev; .st_ino; .st_mode; .st_nlink; .st_uid; .st_gid; .st_rdev} ∈
                             [--..--]
                             [0].[bits 224 to 255] ∈ UNINITIALIZED
                             {[0]{.st_size; .st_atime; .st_mtime; .st_ctime; .st_blksize; .st_blocks}; [1]{.st_dev; .st_ino; .st_mode; .st_nlink; .st_uid; .st_gid; .st_rdev}} ∈
                             [--..--]
                             [1].[bits 224 to 255] ∈ UNINITIALIZED
                             [1]{.st_size; .st_atime; .st_mtime; .st_ctime; .st_blksize; .st_blocks} ∈
                             [--..--]
  S___fc_real_data_1_S___fc_stdin[0..1] ∈ [--..--]
  S___fc_stdout[0].__fc_stdio_id ∈ [--..--]
               [0].[bits 32 to 63] ∈ UNINITIALIZED
               [0]{.__fc_position; .__fc_error; .__fc_eof} ∈ [--..--]
               [0].[bits 144 to 159] ∈ UNINITIALIZED
               [0].__fc_flags ∈ [--..--]
               [0].__fc_inode ∈
               {{ NULL ; &S___fc_inode_0_S___fc_stdout[0] }}
               [0].__fc_real_data ∈
               {{ NULL ; &S___fc_real_data_0_S___fc_stdout[0] }}
               [0].__fc_real_data_max_size ∈ [--..--]
               [0].[bits 352 to 383] ∈ UNINITIALIZED
               [1].__fc_stdio_id ∈ [--..--]
               [1].[bits 32 to 63] ∈ UNINITIALIZED
               [1]{.__fc_position; .__fc_error; .__fc_eof} ∈ [--..--]
               [1].[bits 144 to 159] ∈ UNINITIALIZED
               [1].__fc_flags ∈ [--..--]
               [1].__fc_inode ∈
               {{ NULL ; &S___fc_inode_1_S___fc_stdout[0] }}
               [1].__fc_real_data ∈
               {{ NULL ; &S___fc_real_data_1_S___fc_stdout[0] }}
               [1].__fc_real_data_max_size ∈ [--..--]
               [1].[bits 352 to 383] ∈ UNINITIALIZED
  S___fc_inode_0_S___fc_stdout[0]{.st_dev; .st_ino; .st_mode; .st_nlink; .st_uid; .st_gid; .st_rdev} ∈
                              [--..--]
                              [0].[bits 224 to 255] ∈ UNINITIALIZED
                              {[0]{.st_size; .st_atime; .st_mtime; .st_ctime; .st_blksize; .st_blocks}; [1]{.st_dev; .st_ino; .st_mode; .st_nlink; .st_uid; .st_gid; .st_rdev}} ∈
                              [--..--]
                              [1].[bits 224 to 255] ∈ UNINITIALIZED
                              [1]{.st_size; .st_atime; .st_mtime; .st_ctime; .st_blksize; .st_blocks} ∈
                              [--..--]
  S___fc_real_data_0_S___fc_stdout[0..1] ∈ [--..--]
  S___fc_inode_1_S___fc_stdout[0]{.st_dev; .st_ino; .st_mode; .st_nlink; .st_uid; .st_gid; .st_rdev} ∈
                              [--..--]
                              [0].[bits 224 to 255] ∈ UNINITIALIZED
                              {[0]{.st_size; .st_atime; .st_mtime; .st_ctime; .st_blksize; .st_blocks}; [1]{.st_dev; .st_ino; .st_mode; .st_nlink; .st_uid; .st_gid; .st_rdev}} ∈
                              [--..--]
                              [1].[bits 224 to 255] ∈ UNINITIALIZED
                              [1]{.st_size; .st_atime; .st_mtime; .st_ctime; .st_blksize; .st_blocks} ∈
                              [--..--]
  S___fc_real_data_1_S___fc_stdout[0..1] ∈ [--..--]
[value] computing for function __VERIFIER_nondet_uint <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:289.
fib_bench_false-unreach-call.c_cseq.c:289:[kernel] warning: Neither code nor specification for function __VERIFIER_nondet_uint, generating default assigns from the prototype
[value] using specification for function __VERIFIER_nondet_uint
[value] Done for function __VERIFIER_nondet_uint
[value] computing for function __VERIFIER_nondet_uint <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:290.
[value] Done for function __VERIFIER_nondet_uint
[value] computing for function __VERIFIER_nondet_uint <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:291.
[value] Done for function __VERIFIER_nondet_uint
[value] computing for function __VERIFIER_nondet_uint <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:292.
[value] Done for function __VERIFIER_nondet_uint
[value] computing for function __VERIFIER_nondet_uint <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:293.
[value] Done for function __VERIFIER_nondet_uint
[value] computing for function __VERIFIER_nondet_uint <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:294.
[value] Done for function __VERIFIER_nondet_uint
[value] computing for function __VERIFIER_nondet_uint <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:295.
[value] Done for function __VERIFIER_nondet_uint
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:297.
fib_bench_false-unreach-call.c_cseq.c:297:[kernel] warning: Neither code nor specification for function __VERIFIER_assume, generating default assigns from the prototype
[value] using specification for function __VERIFIER_assume
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:300.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:301.
[value] Done for function __VERIFIER_assume
[value] computing for function main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:302.
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:263.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
fib_bench_false-unreach-call.c_cseq.c:61:[kernel] warning: Neither code nor specification for function __VERIFIER_nondet_int, generating default assigns from the prototype
[value] using specification for function __VERIFIER_nondet_int
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:265.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:266.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] Recording results for main_thread
[value] Done for function main_thread
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:308.
[value] Done for function __VERIFIER_assume
[value] computing for function t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:309.
[value] computing for function __cs_init_scalar <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:157.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- t1_0 <- 
                                main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] Recording results for t1_0
[value] Done for function t1_0
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:316.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:316.
[value] Done for function __VERIFIER_assume
[value] computing for function t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:317.
[value] computing for function __cs_init_scalar <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:209.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- t2_0 <- 
                                main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] Recording results for t2_0
[value] Done for function t2_0
[value] computing for function t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:317.
[value] computing for function __cs_init_scalar <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:209.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- t2_0 <- 
                                main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] Recording results for t2_0
[value] Done for function t2_0
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:325.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:325.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:325.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:325.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:326.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:326.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:326.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:326.
[value] Done for function __VERIFIER_assume
[value] computing for function main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:327.
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:263.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:265.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:266.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] Recording results for main_thread
[value] Done for function main_thread
[value] computing for function main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:327.
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:263.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:265.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:266.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] Recording results for main_thread
[value] Done for function main_thread
[value] computing for function main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:327.
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:263.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:265.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:266.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] Recording results for main_thread
[value] Done for function main_thread
[value] computing for function main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:327.
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:263.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:265.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:266.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] Recording results for main_thread
[value] Done for function main_thread
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:334.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:334.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:335.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:335.
[value] Done for function __VERIFIER_assume
[value] computing for function t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:336.
[value] computing for function __cs_init_scalar <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:157.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- t1_0 <- 
                                main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] Recording results for t1_0
[value] Done for function t1_0
[value] computing for function t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:336.
[value] computing for function __cs_init_scalar <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:157.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- t1_0 <- 
                                main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:191.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:193.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t1_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:199.
[value] Done for function __VERIFIER_assume
[value] Recording results for t1_0
[value] Done for function t1_0
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:343.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:343.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:344.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:344.
[value] Done for function __VERIFIER_assume
[value] computing for function t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:345.
[value] computing for function __cs_init_scalar <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:209.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- t2_0 <- 
                                main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] Recording results for t2_0
[value] Done for function t2_0
[value] computing for function t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:345.
[value] computing for function __cs_init_scalar <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:209.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- t2_0 <- 
                                main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:243.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:245.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- t2_0 <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:251.
[value] Done for function __VERIFIER_assume
[value] Recording results for t2_0
[value] Done for function t2_0
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:352.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:352.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:352.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:352.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:353.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:353.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:353.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:353.
[value] Done for function __VERIFIER_assume
[value] computing for function main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:354.
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:263.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:265.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:266.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] Recording results for main_thread
[value] Done for function main_thread
[value] computing for function main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:354.
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:263.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:265.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:266.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] Recording results for main_thread
[value] Done for function main_thread
[value] computing for function main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:354.
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:263.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:265.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:266.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] Recording results for main_thread
[value] Done for function main_thread
[value] computing for function main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:354.
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:263.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:265.
[value] computing for function __VERIFIER_nondet_int <- __cs_init_scalar <- 
                                main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:61.
[value] Done for function __VERIFIER_nondet_int
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:266.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:268.
[value] computing for function __CSEQ_message <- __cs_create <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:81.
[value] Recording results for __CSEQ_message
[value] Done for function __CSEQ_message
[value] Recording results for __cs_create
[value] Done for function __cs_create
[value] computing for function __cs_init_scalar <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:270.
[value] Recording results for __cs_init_scalar
[value] Done for function __cs_init_scalar
[value] computing for function __VERIFIER_assert <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:275.
[value] Recording results for __VERIFIER_assert
[value] Done for function __VERIFIER_assert
[value] computing for function __VERIFIER_assert <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:275.
[value] Recording results for __VERIFIER_assert
[value] Done for function __VERIFIER_assert
[value] computing for function __VERIFIER_assume <- main_thread <- main.
        Called from fib_bench_false-unreach-call.c_cseq.c:281.
[value] Done for function __VERIFIER_assume
[value] Recording results for main_thread
[value] Done for function main_thread
[value] Recording results for main
[value] done for function main
[value] ====== VALUES COMPUTED ======
[value] Values at end of function __CSEQ_message:
  
[value] Values at end of function __VERIFIER_assert:
  NON TERMINATING FUNCTION
[value] Values at end of function __cs_create:
  __cs_active_thread[0] ∈ {1}
                    [1..2] ∈ {0; 1}
  __cs_threadargs[0..2] ∈ {0}
  __cs_local_main_id1 ∈ {0; 1}
  __cs_local_main_id2 ∈ [--..--]
  __retres ∈ {0}
[value] Values at end of function __cs_init_scalar:
  __cs_local_t1_k ∈ [--..--]
  __cs_local_t2_k ∈ [--..--]
  __cs_local_main_id1 ∈ [--..--]
  __cs_local_main_id2 ∈ [--..--]
[value] Values at end of function main_thread:
  __cs_active_thread[0] ∈ {1}
                    [1..2] ∈ {0; 1}
  __cs_threadargs[0..2] ∈ {0}
  __cs_local_t1_k ∈ [0..10]
  __cs_local_t2_k ∈ [0..10]
  __cs_local_main_id1 ∈ {0; 1}
  __cs_local_main_id2 ∈ [--..--]
  __cs_local_main___cs_tmp_if_cond_0 ∈ {0}
  __retres ∈ {0}
[value] Values at end of function t1_0:
  i ∈ [1..161]
  __cs_local_t1_k ∈ [0..10]
  __cs_local_t2_k ∈ {0; 1; 2; 3; 4; 5}
  __cs_local_main_id1 ∈ {0; 1}
  __cs_local_main_id2 ∈ [--..--]
  __retres ∈ {0}
[value] Values at end of function t2_0:
  j ∈ [1..836]
  __cs_local_t1_k ∈ [0..10]
  __cs_local_t2_k ∈ [0..10]
  __cs_local_main_id1 ∈ {0; 1}
  __cs_local_main_id2 ∈ [--..--]
  __retres ∈ {0}
[value] Values at end of function main:
  __cs_active_thread[0] ∈ {1}
                    [1..2] ∈ {0; 1}
  __cs_pc[0..2] ∈ [--..--]
  __cs_pc_cs[0..2] ∈ [--..--]
  __cs_thread_index ∈ {0}
  __cs_threadargs[0..2] ∈ {0}
  i ∈ [1..161]
  j ∈ [1..836]
  __cs_tmp_t0_r0 ∈ [--..--]
  __cs_tmp_t1_r0 ∈ [--..--]
  __cs_tmp_t2_r0 ∈ [--..--]
  __cs_tmp_t0_r1 ∈ [--..--]
  __cs_tmp_t1_r1 ∈ [--..--]
  __cs_tmp_t2_r1 ∈ [--..--]
  __cs_tmp_t0_r2 ∈ [--..--]
  __cs_local_t1_k ∈ [0..10]
  __cs_local_t2_k ∈ [0..10]
  __cs_local_main_id1 ∈ {0; 1}
  __cs_local_main_id2 ∈ [--..--]
  __cs_local_main___cs_tmp_if_cond_0 ∈ {0}
  __retres ∈ {0}
/* Generated by Frama-C */
typedef __builtin_va_list va_list;
typedef unsigned long size_t;
typedef int wchar_t;
typedef unsigned int ino_t;
typedef unsigned int gid_t;
typedef unsigned int uid_t;
typedef long time_t;
typedef unsigned int blkcnt_t;
typedef unsigned int blksize_t;
typedef unsigned int dev_t;
typedef unsigned int mode_t;
typedef unsigned int nlink_t;
typedef long off_t;
struct stat {
   dev_t st_dev ;
   ino_t st_ino ;
   mode_t st_mode ;
   nlink_t st_nlink ;
   uid_t st_uid ;
   gid_t st_gid ;
   dev_t st_rdev ;
   off_t st_size ;
   time_t st_atime ;
   time_t st_mtime ;
   time_t st_ctime ;
   blksize_t st_blksize ;
   blkcnt_t st_blocks ;
};
struct __fc_pos_t {
   unsigned long __fc_stdio_position ;
};
typedef struct __fc_pos_t fpos_t;
struct __fc_FILE {
   unsigned int __fc_stdio_id ;
   fpos_t __fc_position ;
   char __fc_error ;
   char __fc_eof ;
   int __fc_flags ;
   struct stat *__fc_inode ;
   unsigned char *__fc_real_data ;
   int __fc_real_data_max_size ;
};
typedef struct __fc_FILE FILE;
struct __fc_div_t {
   int quot ;
   int rem ;
};
typedef struct __fc_div_t div_t;
struct __fc_ldiv_t {
   long quot ;
   long rem ;
};
typedef struct __fc_ldiv_t ldiv_t;
struct __fc_lldiv_t {
   long long quot ;
   long long rem ;
};
typedef struct __fc_lldiv_t lldiv_t;
typedef int __cs_t;
typedef int __cs_mutex_t;
typedef int __cs_cond_t;
void __VERIFIER_assert(int x)
{
  if (! x) ERROR: goto ERROR;
  return;
}

/*@ assigns \nothing; */
extern void __VERIFIER_assume(int);

/*@ assigns \result;
    assigns \result \from \nothing; */
extern int __VERIFIER_nondet_int(void);

/*@ assigns \result;
    assigns \result \from \nothing; */
extern unsigned int __VERIFIER_nondet_uint(void);

extern int __FC_errno;

extern FILE *__fc_stdin;

extern FILE *__fc_stdout;

/*@ assigns \nothing; */
extern int remove(char const *filename);

/*@ assigns \nothing; */
extern int rename(char const *old, char const *new);

/*@ ensures
      \result ≡ \null ∨
      (\valid(\result) ∧ \fresh{Old, Here}(\result,sizeof(FILE)));
    assigns \nothing;
 */
extern FILE *tmpfile(void);

/*@ assigns \result, *(s+(..));
    assigns \result \from *(s+(..));
    assigns *(s+(..)) \from \nothing;
 */
extern char *tmpnam(char *s);

/*@ ensures \result ≡ 0 ∨ \result ≡ -1;
    assigns *stream;
    assigns *stream \from \nothing;
 */
extern int fclose(FILE *stream);

/*@ ensures \result ≡ 0 ∨ \result ≡ -1;
    assigns *stream;
    assigns *stream \from \nothing;
 */
extern int fflush(FILE *stream);

FILE __fc_fopen[512];
FILE const *_p__fc_fopen = (FILE const *)(__fc_fopen);
/*@ ensures
      \result ≡ \null ∨
      (\valid(\result) ∧ \subset(\result, &__fc_fopen[0 ..]));
    assigns \result;
    assigns \result \from *(filename+(..)), *(mode+(..)), _p__fc_fopen;
 */
extern FILE *fopen(char const *filename, char const *mode);

/*@ ensures
      \result ≡ \null ∨
      (\valid(\result) ∧ \fresh{Old, Here}(\result,sizeof(FILE)));
    assigns \result;
    assigns \result \from fildes, *(mode+(..));
 */
extern FILE *fdopen(int fildes, char const *mode);

/*@ ensures \result ≡ \null ∨ \result ≡ \old(stream);
    assigns *stream;
 */
extern FILE *freopen(char const *filename, char const *mode, FILE *stream);

/*@ assigns *stream;
    assigns *stream \from buf; */
extern void setbuf(FILE *stream, char *buf);

/*@ assigns *stream;
    assigns *stream \from buf, mode, size; */
extern int setvbuf(FILE *stream, char *buf, int mode, size_t size);

/*@ assigns *stream; */
extern int fprintf(FILE *stream, char const *format , ...);

/*@ assigns *stream; */
extern int fscanf(FILE *stream, char const *format , ...);

/*@ assigns *__fc_stdout;
    assigns *__fc_stdout \from *(format+(..)); */
extern int printf(char const *format , ...);

/*@ assigns *__fc_stdin; */
extern int scanf(char const *format , ...);

/*@ assigns *(s+(0 .. n-1)); */
extern int snprintf(char *s, size_t n, char const *format , ...);

/*@ assigns *(s+(0 ..)); */
extern int sprintf(char *s, char const *format , ...);

/*@ assigns *stream;
    assigns *stream \from *(format+(..)), arg; */
extern int vfprintf(FILE *stream, char const *format, va_list arg);

/*@ assigns *stream;
    assigns *stream \from *(format+(..)), *stream; */
extern int vfscanf(FILE *stream, char const *format, va_list arg);

/*@ assigns *__fc_stdout;
    assigns *__fc_stdout \from arg; */
extern int vprintf(char const *format, va_list arg);

/*@ assigns *__fc_stdin;
    assigns *__fc_stdin \from *(format+(..)); */
extern int vscanf(char const *format, va_list arg);

/*@ assigns *(s+(0 .. n-1));
    assigns *(s+(0 .. n-1)) \from *(format+(..)), arg;
 */
extern int vsnprintf(char *s, size_t n, char const *format, va_list arg);

/*@ assigns *(s+(0 ..));
    assigns *(s+(0 ..)) \from *(format+(..)), arg; */
extern int vsprintf(char *s, char const *format, va_list arg);

/*@ assigns *stream; */
extern int fgetc(FILE *stream);

/*@ ensures \result ≡ \null ∨ \result ≡ \old(s);
    assigns *(s+(0 .. n-1)), *stream, \result;
    assigns *(s+(0 .. n-1)) \from *stream;
    assigns *stream \from *stream;
    assigns \result \from s, n, *stream;
 */
extern char *fgets(char *s, int n, FILE *stream);

/*@ assigns *stream; */
extern int fputc(int c, FILE *stream);

/*@ assigns *stream;
    assigns *stream \from *(s+(..)); */
extern int fputs(char const *s, FILE *stream);

/*@ assigns \result, *stream;
    assigns \result \from *stream;
    assigns *stream \from *stream;
 */
extern int getc(FILE *stream);

/*@ assigns \result;
    assigns \result \from *__fc_stdin; */
extern int getchar(void);

/*@ ensures \result ≡ \old(s) ∨ \result ≡ \null;
    assigns *(s+(..)), \result;
    assigns *(s+(..)) \from *__fc_stdin;
    assigns \result \from s, __fc_stdin;
 */
extern char *gets(char *s);

/*@ assigns *stream;
    assigns *stream \from c; */
extern int putc(int c, FILE *stream);

/*@ assigns *__fc_stdout;
    assigns *__fc_stdout \from c; */
extern int putchar(int c);

/*@ assigns *__fc_stdout;
    assigns *__fc_stdout \from *(s+(..)); */
extern int puts(char const *s);

/*@ assigns *stream;
    assigns *stream \from c; */
extern int ungetc(int c, FILE *stream);

/*@ assigns *((char *)ptr+(0 .. nmemb*size-1));
    assigns *((char *)ptr+(0 .. nmemb*size-1)) \from *stream;
 */
extern size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);

/*@ assigns *stream;
    assigns *stream \from *((char *)ptr+(0 .. nmemb*size-1));
 */
extern size_t fwrite(void const *ptr, size_t size, size_t nmemb, FILE *stream);

/*@ assigns *pos;
    assigns *pos \from *stream; */
extern int fgetpos(FILE *stream, fpos_t *pos);

/*@ assigns *stream, __FC_errno;
    assigns *stream \from offset, whence; */
extern int fseek(FILE *stream, long offset, int whence);

/*@ assigns *stream;
    assigns *stream \from *pos; */
extern int fsetpos(FILE *stream, fpos_t const *pos);

/*@ assigns \result, __FC_errno;
    assigns \result \from *stream;
    assigns __FC_errno \from *stream;
 */
extern long ftell(FILE *stream);

/*@ assigns *stream;
    assigns *stream \from \nothing; */
extern void rewind(FILE *stream);

/*@ assigns *stream;
    assigns *stream \from \nothing; */
extern void clearerr(FILE *stream);

/*@ assigns \result;
    assigns \result \from *stream; */
extern int feof(FILE *stream);

/*@ assigns \result;
    assigns \result \from *stream; */
extern int fileno(FILE *stream);

/*@ assigns *stream;
    assigns *stream \from \nothing; */
extern void flockfile(FILE *stream);

/*@ assigns *stream;
    assigns *stream \from \nothing; */
extern void funlockfile(FILE *stream);

/*@ assigns \result, *stream;
    assigns \result \from \nothing;
    assigns *stream \from \nothing;
 */
extern int ftrylockfile(FILE *stream);

/*@ assigns \result;
    assigns \result \from *stream; */
extern int ferror(FILE *stream);

/*@ assigns __fc_stdout;
    assigns __fc_stdout \from __FC_errno, *(s+(..)); */
extern void perror(char const *s);

/*@ assigns \result, *stream;
    assigns \result \from *stream;
    assigns *stream \from *stream;
 */
extern int getc_unlocked(FILE *stream);

/*@ assigns \result;
    assigns \result \from *__fc_stdin; */
extern int getchar_unlocked(void);

/*@ assigns *stream;
    assigns *stream \from c; */
extern int putc_unlocked(int c, FILE *stream);

/*@ assigns *__fc_stdout;
    assigns *__fc_stdout \from c; */
extern int putchar_unlocked(int c);

/*@ assigns *stream;
    assigns *stream \from \nothing; */
extern void clearerr_unlocked(FILE *stream);

/*@ assigns \result;
    assigns \result \from *stream; */
extern int feof_unlocked(FILE *stream);

/*@ assigns \result;
    assigns \result \from *stream; */
extern int ferror_unlocked(FILE *stream);

/*@ assigns \result;
    assigns \result \from *stream; */
extern int fileno_unlocked(FILE *stream);

/*@ assigns \result;
    assigns \result \from *(nptr+(..)); */
extern double atof(char const *nptr);

/*@ assigns \result;
    assigns \result \from *(nptr+(..)); */
extern int atoi(char const *nptr);

/*@ assigns \result;
    assigns \result \from *(nptr+(..)); */
extern long atol(char const *nptr);

/*@ assigns \result;
    assigns \result \from *(nptr+(..)); */
extern long long atoll(char const *nptr);

/*@ assigns \result, *endptr;
    assigns \result \from *(nptr+(0 ..));
    assigns *endptr \from nptr, *(nptr+(0 ..));
 */
extern double strtod(char const *nptr, char **endptr);

/*@ assigns \result, *endptr;
    assigns \result \from *(nptr+(0 ..));
    assigns *endptr \from nptr, *(nptr+(0 ..));
 */
extern float strtof(char const *nptr, char **endptr);

/*@ assigns \result, *endptr;
    assigns \result \from *(nptr+(0 ..));
    assigns *endptr \from nptr, *(nptr+(0 ..));
 */
extern long double strtold(char const *nptr, char **endptr);

/*@ assigns \result, *endptr;
    assigns \result \from *(nptr+(0 ..)), base;
    assigns *endptr \from nptr, *(nptr+(0 ..)), base;
 */
extern long strtol(char const *nptr, char **endptr, int base);

/*@ assigns \result, *endptr;
    assigns \result \from *(nptr+(0 ..)), base;
    assigns *endptr \from nptr, *(nptr+(0 ..)), base;
 */
extern long long strtoll(char const *nptr, char **endptr, int base);

/*@ assigns \result, *endptr;
    assigns \result \from *(nptr+(0 ..)), base;
    assigns *endptr \from nptr, *(nptr+(0 ..)), base;
 */
extern unsigned long strtoul(char const *nptr, char **endptr, int base);

/*@ assigns \result, *endptr;
    assigns \result \from *(nptr+(0 ..)), base;
    assigns *endptr \from nptr, *(nptr+(0 ..)), base;
 */
extern unsigned long long strtoull(char const *nptr, char **endptr, int base);

int __fc_random_counter __attribute__((__unused__, __FRAMA_C_MODEL__));
unsigned long const __fc_rand_max = (unsigned long)32767;
/*@ ensures 0 ≤ \result ≤ __fc_rand_max;
    assigns \result, __fc_random_counter;
    assigns \result \from __fc_random_counter;
    assigns __fc_random_counter \from __fc_random_counter;
 */
extern int rand(void);

/*@ assigns __fc_random_counter;
    assigns __fc_random_counter \from seed; */
extern void srand(unsigned int seed);

/*@ ghost extern int __fc_heap_status __attribute__((__FRAMA_C_MODEL__)); */

/*@
axiomatic dynamic_allocation {
  predicate is_allocable{L}(size_t n) 
    reads __fc_heap_status;
  
  }

*/
/*@ assigns __fc_heap_status, \result;
    assigns __fc_heap_status \from size, __fc_heap_status;
    assigns \result \from size, __fc_heap_status;
    allocates \result;
    
    behavior allocation:
      assumes is_allocable(size);
      ensures \fresh{Old, Here}(\result,\old(size));
      assigns __fc_heap_status, \result;
      assigns __fc_heap_status \from size, __fc_heap_status;
      assigns \result \from size, __fc_heap_status;
    
    behavior no_allocation:
      assumes ¬is_allocable(size);
      ensures \result ≡ \null;
      assigns \result;
      assigns \result \from \nothing;
      allocates \nothing;
    
    complete behaviors no_allocation, allocation;
    disjoint behaviors no_allocation, allocation;
 */
extern void *malloc(size_t size);

/*@ assigns __fc_heap_status;
    assigns __fc_heap_status \from __fc_heap_status;
    frees p;
    
    behavior deallocation:
      assumes p ≢ \null;
      requires freeable: \freeable(p);
      ensures \allocable(\old(p));
      assigns __fc_heap_status;
      assigns __fc_heap_status \from __fc_heap_status;
    
    behavior no_deallocation:
      assumes p ≡ \null;
      assigns \nothing;
      allocates \nothing;
    
    complete behaviors no_deallocation, deallocation;
    disjoint behaviors no_deallocation, deallocation;
 */
extern void free(void *p);

/*@ ensures \false;
    assigns \nothing; */
extern void abort(void);

/*@ assigns \result;
    assigns \result \from \nothing; */
extern int atexit(void (*func)(void));

/*@ assigns \result;
    assigns \result \from \nothing; */
extern int at_quick_exit(void (*func)(void));

/*@ ensures \false;
    assigns \nothing; */
extern void exit(int status);

/*@ ensures \false;
    assigns \nothing; */
extern void _Exit(int status);

/*@ ensures \result ≡ \null ∨ \valid(\result);
    assigns \result;
    assigns \result \from name;
 */
extern char *getenv(char const *name);

/*@ ensures \false;
    assigns \nothing; */
extern void quick_exit(int status);

/*@ assigns \result;
    assigns \result \from *(string+(..)); */
extern int system(char const *string);

/*@ assigns *((char *)\result+(..));
    assigns *((char *)\result+(..))
      \from *((char *)key+(..)), *((char *)base+(..)), nmemb, size, *compar;
 */
extern void *bsearch(void const *key, void const *base, size_t nmemb,
                     size_t size, int (*compar)(void const *, void const *));

/*@ assigns *((char *)base+(..));
    assigns *((char *)base+(..))
      \from *((char *)base+(..)), nmemb, size, *compar;
 */
extern void qsort(void *base, size_t nmemb, size_t size,
                  int (*compar)(void const *, void const *));

/*@ requires abs_representable: (int)(-j) ≡ -j;
    assigns \result;
    assigns \result \from j;
 */
extern int abs(int j);

/*@ requires abs_representable: (long)(-j) ≡ -j;
    assigns \result;
    assigns \result \from j;
 */
extern long labs(long j);

/*@ requires abs_representable: (long long)(-j) ≡ -j;
    assigns \result;
    assigns \result \from j;
 */
extern long long llabs(long long j);

/*@ assigns \result;
    assigns \result \from numer, denom; */
extern div_t div(int numer, int denom);

/*@ assigns \result;
    assigns \result \from numer, denom; */
extern ldiv_t ldiv(long numer, long denom);

/*@ assigns \result;
    assigns \result \from numer, denom; */
extern lldiv_t lldiv(long long numer, long long denom);

/*@ assigns \result;
    assigns \result \from *(s+(0 ..)), n; */
extern int mblen(char const *s, size_t n);

/*@ assigns \result, *(pwc+(0 .. n-1));
    assigns \result \from *(s+(0 .. n-1)), n;
    assigns *(pwc+(0 .. n-1)) \from *(s+(0 .. n-1)), n;
 */
extern int mbtowc(wchar_t *pwc, char const *s, size_t n);

/*@ assigns \result, *(s+(0 ..));
    assigns \result \from wc;
    assigns *(s+(0 ..)) \from wc;
 */
extern int wctomb(char *s, wchar_t wc);

/*@ assigns \result, *(pwcs+(0 .. n-1));
    assigns \result \from *(s+(0 .. n-1)), n;
    assigns *(pwcs+(0 .. n-1)) \from *(s+(0 .. n-1)), n;
 */
extern size_t mbstowcs(wchar_t *pwcs, char const *s, size_t n);

/*@ assigns \result, *(s+(0 .. n-1));
    assigns \result \from *(pwcs+(0 .. n-1)), n;
    assigns *(s+(0 .. n-1)) \from *(pwcs+(0 .. n-1)), n;
 */
extern size_t wcstombs(char *s, wchar_t const *pwcs, size_t n);

unsigned int __cs_active_thread[2 + 1] = {(unsigned int)1};
unsigned int __cs_pc[2 + 1];
unsigned int __cs_pc_cs[2 + 1];
unsigned int __cs_thread_index;
unsigned int __cs_thread_lines[3] = {(unsigned int)3, (unsigned int)7,
                                     (unsigned int)7};
void *__cs_safe_malloc(int __cs_size)
{
  void *__cs_ptr;
  __cs_ptr = malloc((unsigned long)__cs_size);
  __VERIFIER_assume((int)__cs_ptr);
  return __cs_ptr;
}

void __cs_init_scalar(void *__cs_var, int __cs_size)
{
  if ((unsigned long)__cs_size == sizeof(int)) *((int *)__cs_var) = __VERIFIER_nondet_int();
  else {
    char *__cs_ptr;
    __cs_ptr = (char *)__cs_var;
  }
  return;
}

void __CSEQ_message(char *__cs_message)
{
  return;
}

void *__cs_threadargs[2 + 1];
int __cs_create(__cs_t *__cs_new_thread_id, void *__cs_attr,
                void *(*__cs_t_0)(void *), void *__cs_arg, int __cs_threadID)
{
  int __retres;
  if (__cs_threadID > 2) {
    __retres = 0;
    goto return_label;
  }
  *__cs_new_thread_id = __cs_threadID;
  __cs_active_thread[__cs_threadID] = (unsigned int)1;
  __cs_threadargs[__cs_threadID] = __cs_arg;
  __CSEQ_message((char *)"thread spawned");
  __retres = 0;
  return_label: return __retres;
}

int __cs_join(__cs_t __cs_id, void **__cs_value_ptr)
{
  int __retres;
  __VERIFIER_assume(__cs_pc[__cs_id] == __cs_thread_lines[__cs_id]);
  __retres = 0;
  return __retres;
}

int __cs_exit(void *__cs_value_ptr)
{
  int __retres;
  __retres = 0;
  return __retres;
}

int __cs_mutex_init(__cs_mutex_t *__cs_m, int __cs_val)
{
  int __retres;
  *__cs_m = -1;
  __retres = 0;
  return __retres;
}

int __cs_mutex_destroy(__cs_mutex_t *__cs_mutex_to_destroy)
{
  int __retres;
  __VERIFIER_assert(*__cs_mutex_to_destroy != 0);
  __VERIFIER_assert(*__cs_mutex_to_destroy != -2);
  __VERIFIER_assert(*__cs_mutex_to_destroy == -1);
  *__cs_mutex_to_destroy = -2;
  __CSEQ_message((char *)"lock destroyed");
  __retres = 0;
  return __retres;
}

int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock)
{
  int __retres;
  __VERIFIER_assert(*__cs_mutex_to_lock != 0);
  __VERIFIER_assert(*__cs_mutex_to_lock != -2);
  __VERIFIER_assume(*__cs_mutex_to_lock == -1);
  *__cs_mutex_to_lock = (int)(__cs_thread_index + (unsigned int)1);
  __CSEQ_message((char *)"lock acquired");
  __retres = 0;
  return __retres;
}

int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock)
{
  int __retres;
  __VERIFIER_assert(*__cs_mutex_to_unlock != 0);
  __VERIFIER_assert(*__cs_mutex_to_unlock != -2);
  __VERIFIER_assert((unsigned int)*__cs_mutex_to_unlock == __cs_thread_index + (unsigned int)1);
  *__cs_mutex_to_unlock = -1;
  __CSEQ_message((char *)"lock released");
  __retres = 0;
  return __retres;
}

int __cs_cond_init(__cs_cond_t *__cs_cond_to_init, void *__cs_attr)
{
  int __retres;
  *__cs_cond_to_init = -1;
  __retres = 0;
  return __retres;
}

int __cs_cond_wait_1(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
{
  int __retres;
  __VERIFIER_assert(*__cs_cond_to_wait_for != 0);
  __VERIFIER_assert(*__cs_cond_to_wait_for != -2);
  __cs_mutex_unlock(__cs_m);
  /*@ assert missing_return: \false; */ ;
  __retres = 0;
  return __retres;
}

int __cs_cond_wait_2(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m)
{
  int __retres;
  __VERIFIER_assume(*__cs_cond_to_wait_for == 1);
  __cs_mutex_lock(__cs_m);
  __retres = 0;
  return __retres;
}

int __cs_cond_signal(__cs_cond_t *__cs_cond_to_signal)
{
  int __retres;
  *__cs_cond_to_signal = 1;
  __CSEQ_message((char *)"conditional variable signal");
  __retres = 0;
  return __retres;
}

int i = 1;
int j = 1;
static int __cs_local_t1_k;
void *t1_0(void *__cs_param_t1_arg)
{
  void *__retres;
  if ((__cs_pc[1] > (unsigned int)0) | ((unsigned int)0 >= __cs_pc_cs[1])) 
    goto tt1_0_1;
  __cs_init_scalar((void *)(& __cs_local_t1_k),(int)sizeof(int));
  __cs_local_t1_k = 0;
  __cs_local_t1_k = 0;
  tt1_0_1: ;
  if ((__cs_pc[1] > (unsigned int)1) | ((unsigned int)1 >= __cs_pc_cs[1])) 
    goto tt1_0_2;
  i += j;
  __cs_local_t1_k ++;
  tt1_0_2: ;
  if ((__cs_pc[1] > (unsigned int)2) | ((unsigned int)2 >= __cs_pc_cs[1])) 
    goto tt1_0_3;
  i += j;
  __cs_local_t1_k ++;
  tt1_0_3: ;
  if ((__cs_pc[1] > (unsigned int)3) | ((unsigned int)3 >= __cs_pc_cs[1])) 
    goto tt1_0_4;
  i += j;
  __cs_local_t1_k ++;
  tt1_0_4: ;
  if ((__cs_pc[1] > (unsigned int)4) | ((unsigned int)4 >= __cs_pc_cs[1])) 
    goto tt1_0_5;
  i += j;
  __cs_local_t1_k ++;
  tt1_0_5: ;
  if ((__cs_pc[1] > (unsigned int)5) | ((unsigned int)5 >= __cs_pc_cs[1])) 
    goto tt1_0_6;
  i += j;
  __cs_local_t1_k ++;
  tt1_0_6: ;
  if ((__cs_pc[1] > (unsigned int)6) | ((unsigned int)6 >= __cs_pc_cs[1])) 
    goto tt1_0_7;
  __VERIFIER_assume(! (__cs_local_t1_k < 5));
  __exit_loop_1: __VERIFIER_assume(__cs_pc_cs[1] >= (unsigned int)7);
  goto __exit_t1;
  __exit_t1: __VERIFIER_assume(__cs_pc_cs[1] >= (unsigned int)7);
  tt1_0_7: __retres = (void *)0;
  goto return_label;
  return_label: return __retres;
}

static int __cs_local_t2_k;
void *t2_0(void *__cs_param_t2_arg)
{
  void *__retres;
  if ((__cs_pc[2] > (unsigned int)0) | ((unsigned int)0 >= __cs_pc_cs[2])) 
    goto tt2_0_1;
  __cs_init_scalar((void *)(& __cs_local_t2_k),(int)sizeof(int));
  __cs_local_t2_k = 0;
  __cs_local_t2_k = 0;
  tt2_0_1: ;
  if ((__cs_pc[2] > (unsigned int)1) | ((unsigned int)1 >= __cs_pc_cs[2])) 
    goto tt2_0_2;
  j += i;
  __cs_local_t2_k ++;
  tt2_0_2: ;
  if ((__cs_pc[2] > (unsigned int)2) | ((unsigned int)2 >= __cs_pc_cs[2])) 
    goto tt2_0_3;
  j += i;
  __cs_local_t2_k ++;
  tt2_0_3: ;
  if ((__cs_pc[2] > (unsigned int)3) | ((unsigned int)3 >= __cs_pc_cs[2])) 
    goto tt2_0_4;
  j += i;
  __cs_local_t2_k ++;
  tt2_0_4: ;
  if ((__cs_pc[2] > (unsigned int)4) | ((unsigned int)4 >= __cs_pc_cs[2])) 
    goto tt2_0_5;
  j += i;
  __cs_local_t2_k ++;
  tt2_0_5: ;
  if ((__cs_pc[2] > (unsigned int)5) | ((unsigned int)5 >= __cs_pc_cs[2])) 
    goto tt2_0_6;
  j += i;
  __cs_local_t2_k ++;
  tt2_0_6: ;
  if ((__cs_pc[2] > (unsigned int)6) | ((unsigned int)6 >= __cs_pc_cs[2])) 
    goto tt2_0_7;
  __VERIFIER_assume(! (__cs_local_t2_k < 5));
  __exit_loop_2: __VERIFIER_assume(__cs_pc_cs[2] >= (unsigned int)7);
  goto __exit_t2;
  __exit_t2: __VERIFIER_assume(__cs_pc_cs[2] >= (unsigned int)7);
  tt2_0_7: __retres = (void *)0;
  goto return_label;
  return_label: return __retres;
}

static __cs_t __cs_local_main_id1;
static __cs_t __cs_local_main_id2;
static _Bool __cs_local_main___cs_tmp_if_cond_0;
int main_thread(void)
{
  int __retres;
  int tmp;
  if ((__cs_pc[0] > (unsigned int)0) | ((unsigned int)0 >= __cs_pc_cs[0])) 
    goto tmain_1;
  __cs_init_scalar((void *)(& __cs_local_main_id1),(int)sizeof(__cs_t));
  __cs_init_scalar((void *)(& __cs_local_main_id2),(int)sizeof(__cs_t));
  __cs_create(& __cs_local_main_id1,(void *)0,& t1_0,(void *)0,1);
  tmain_1: ;
  if ((__cs_pc[0] > (unsigned int)1) | ((unsigned int)1 >= __cs_pc_cs[0])) 
    goto tmain_2;
  __cs_create(& __cs_local_main_id2,(void *)0,& t2_0,(void *)0,2);
  __cs_init_scalar((void *)(& __cs_local_main___cs_tmp_if_cond_0),
                   (int)sizeof(_Bool));
  tmain_2: ;
  if ((__cs_pc[0] > (unsigned int)2) | ((unsigned int)2 >= __cs_pc_cs[0])) 
    goto tmain_3;
  {
    /*sequence*/
    if (i >= 144) tmp = 1;
    else 
      if (j >= 144) tmp = 1; else tmp = 0;
    __cs_local_main___cs_tmp_if_cond_0 = (_Bool)(tmp != 0);
  }
  if (__cs_local_main___cs_tmp_if_cond_0) __VERIFIER_assert(0);
  goto __exit_main;
  __exit_main: __VERIFIER_assume(__cs_pc_cs[0] >= (unsigned int)3);
  tmain_3: __retres = 0;
  goto return_label;
  return_label: return __retres;
}

int main(void)
{
  int __retres;
  unsigned int __cs_tmp_t0_r0;
  unsigned int __cs_tmp_t1_r0;
  unsigned int __cs_tmp_t2_r0;
  unsigned int __cs_tmp_t0_r1;
  unsigned int __cs_tmp_t1_r1;
  unsigned int __cs_tmp_t2_r1;
  unsigned int __cs_tmp_t0_r2;
  __cs_tmp_t0_r0 = __VERIFIER_nondet_uint();
  __cs_tmp_t1_r0 = __VERIFIER_nondet_uint();
  __cs_tmp_t2_r0 = __VERIFIER_nondet_uint();
  __cs_tmp_t0_r1 = __VERIFIER_nondet_uint();
  __cs_tmp_t1_r1 = __VERIFIER_nondet_uint();
  __cs_tmp_t2_r1 = __VERIFIER_nondet_uint();
  __cs_tmp_t0_r2 = __VERIFIER_nondet_uint();
  __VERIFIER_assume(__cs_tmp_t0_r0 > (unsigned int)0);
  __cs_thread_index = (unsigned int)0;
  __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r0;
  __VERIFIER_assume(__cs_pc_cs[0] > (unsigned int)0);
  __VERIFIER_assume(__cs_pc_cs[0] <= (unsigned int)3);
  main_thread();
  __cs_pc[0] = __cs_pc_cs[0];
  if (__cs_active_thread[1] == (unsigned int)1) {
    __cs_thread_index = (unsigned int)1;
    __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r0;
    __VERIFIER_assume(__cs_pc_cs[1] <= (unsigned int)7);
    t1_0(__cs_threadargs[1]);
    __cs_pc[1] = __cs_pc_cs[1];
  }
  if (__cs_active_thread[2] == (unsigned int)1) {
    __cs_thread_index = (unsigned int)2;
    __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r0;
    __VERIFIER_assume(__cs_pc_cs[2] <= (unsigned int)7);
    t2_0(__cs_threadargs[2]);
    __cs_pc[2] = __cs_pc_cs[2];
  }
  if (__cs_active_thread[0] == (unsigned int)1) {
    __cs_thread_index = (unsigned int)0;
    __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
    __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
    __VERIFIER_assume(__cs_pc_cs[0] <= (unsigned int)3);
    main_thread();
    __cs_pc[0] = __cs_pc_cs[0];
  }
  if (__cs_active_thread[1] == (unsigned int)1) {
    __cs_thread_index = (unsigned int)1;
    __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r1;
    __VERIFIER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
    __VERIFIER_assume(__cs_pc_cs[1] <= (unsigned int)7);
    t1_0(__cs_threadargs[__cs_thread_index]);
    __cs_pc[1] = __cs_pc_cs[1];
  }
  if (__cs_active_thread[2] == (unsigned int)1) {
    __cs_thread_index = (unsigned int)2;
    __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r1;
    __VERIFIER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
    __VERIFIER_assume(__cs_pc_cs[2] <= (unsigned int)7);
    t2_0(__cs_threadargs[__cs_thread_index]);
    __cs_pc[2] = __cs_pc_cs[2];
  }
  if (__cs_active_thread[0] == (unsigned int)1) {
    __cs_thread_index = (unsigned int)0;
    __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
    __VERIFIER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
    __VERIFIER_assume(__cs_pc_cs[0] <= (unsigned int)3);
    main_thread();
  }
  __retres = 0;
  return __retres;
}


