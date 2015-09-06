// analysis: AIopt
[0;1;34m/* processing Function thread1 */
[0m[0;1;35m

RESULT FOR BASICBLOCK: -------------------
basicblock:
  %0 = call i8* bitcast (i32 ()* @nondet_1 to i8* ()*)()
  %i1 = call i8* @nondet_2()
  %1 = call i8* bitcast (i32 ()* @nondet_1 to i8* ()*)()
  call void @llvm.dbg.value(metadata !{i8* %1}, i64 0, metadata !24), !dbg !25
  %i3 = call i8* @nondet_2()
  call void @llvm.dbg.value(metadata !{i8* %i3}, i64 0, metadata !24), !dbg !25
  call void @llvm.dbg.value(metadata !{i8* %arg}, i64 0, metadata !24), !dbg !25
  %i4 = call noalias i8* @malloc(i64 8) #5, !dbg !26
  store i8* %i4, i8** @v, align 8, !dbg !26
  ret i8* %i1, !dbg !27
-----
[0mTOP
0.10935 seconds
ASC ITERATIONS 0
DESC ITERATIONS 0
[0;1;34m/* processing Function thread2 */
[0m[0;1;35m

RESULT FOR BASICBLOCK: -------------------
basicblock:
  %0 = call i8* bitcast (i32 ()* @nondet_1 to i8* ()*)()
  %i1 = call i8* @nondet_2()
  %1 = call i8* bitcast (i32 ()* @nondet_1 to i8* ()*)()
  call void @llvm.dbg.value(metadata !{i8* %1}, i64 0, metadata !24), !dbg !25
  %i3 = call i8* @nondet_2()
  call void @llvm.dbg.value(metadata !{i8* %i3}, i64 0, metadata !24), !dbg !25
  call void @llvm.dbg.value(metadata !{i8* %arg}, i64 0, metadata !24), !dbg !25
  %i4 = load i8** @v, align 8, !dbg !26
  %i5 = icmp ne i8* %i4, null, !dbg !26
  %i6 = icmp slt i8* %i4, null, !dbg !26
  %i7 = icmp sgt i8* %i4, null, !dbg !26
  br i1 %i7, label %basicblock8, label %basicblock9, !dbg !26
-----
[0mTOP
[0;1;35m

RESULT FOR BASICBLOCK: -------------------
basicblock15:                                     ; preds = %basicblock12, %basicblock11
  ret i8* %i1, !dbg !30
-----
[0mTOP
0.25159 seconds
ASC ITERATIONS 1
DESC ITERATIONS 2
[0;1;34m/* processing Function main */
[0m[0;1;35m

RESULT FOR BASICBLOCK: -------------------
basicblock:
  %0 = call i32 bitcast (i8* ()* @nondet_2 to i32 ()*)()
  call void @llvm.dbg.value(metadata !{i32 %0}, i64 0, metadata !24), !dbg !25
  %1 = call i32 bitcast (i8* ()* @nondet_2 to i32 ()*)()
  %i1 = call i32 @nondet_1()
  %t1 = alloca i64, align 8
  %2 = call i64 @nondet_3()
  store i64 %2, i64* %t1
  %i2 = call i64 @nondet_3()
  store i64 %i2, i64* %t1
  %t2 = alloca i64, align 8
  %3 = call i64 @nondet_3()
  store i64 %3, i64* %t2
  %i3 = call i64 @nondet_3()
  store i64 %i3, i64* %t2
  call void @llvm.dbg.declare(metadata !{i64* %t1}, metadata !29), !dbg !33
  call void @llvm.dbg.declare(metadata !{i64* %t2}, metadata !34), !dbg !35
  %i4 = call i32 @pthread_create(i64* %t1, %union.pthread_attr_t* null, i8* (i8*)* @thread1, i8* null) #5, !dbg !36
  %i5 = call i32 @pthread_create(i64* %t2, %union.pthread_attr_t* null, i8* (i8*)* @thread2, i8* null) #5, !dbg !37
  %i6 = load i64* %t1, align 8, !dbg !38
  %i7 = call i32 @pthread_join(i64 %i6, i8** null), !dbg !38
  %i8 = load i64* %t2, align 8, !dbg !39
  %i9 = call i32 @pthread_join(i64 %i8, i8** null), !dbg !39
  %i10 = load i8** @v, align 8, !dbg !40
  %i11 = icmp ne i8* %i10, null, !dbg !40
  %i12 = icmp slt i8* %i10, null, !dbg !40
  %i13 = icmp sgt i8* %i10, null, !dbg !40
  br i1 %i13, label %basicblock14, label %basicblock15, !dbg !40
-----
[0mTOP
[0;1;35m

RESULT FOR BASICBLOCK: -------------------
basicblock10.i:                                   ; preds = %basicblock9.i
  call void (...)* @__VERIFIER_error() #6, !dbg !45
  unreachable, !dbg !45
-----
[0mTOP
[0;1;31massert not proved
[0m[0;1;35m

RESULT FOR BASICBLOCK: -------------------
__VERIFIER_assert.exit:                           ; preds = %basicblock9.i
  ret i32 0, !dbg !48
-----
[0mTOP
0.23518 seconds
ASC ITERATIONS 2
DESC ITERATIONS 4
