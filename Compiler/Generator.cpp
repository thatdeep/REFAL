// Automatically generated file. Don't edit!
#include "refalrts.h"


refalrts::FnResult GN_Local(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GN_Entry(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult FuncArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'd' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult NakedArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult TextFromMemoryClass(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & GN_Local
    if( ! refalrts::function_left( & GN_Local, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & GN_Entry
    if( ! refalrts::function_left( & GN_Entry, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SwGenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMemoryClass_1;
    refalrts::use( sMemoryClass_1 );
    static refalrts::Iter sFnArguments_1;
    refalrts::use( sFnArguments_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // s.MemoryClass s.FnArguments e.Name
    if( ! refalrts::svar_left( sMemoryClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sFnArguments_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromMemoryClass, (void*) "TextFromMemoryClass"},
      {refalrts::icSpliceSTVar, & sMemoryClass_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icSpliceSTVar, & sFnArguments_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & TextFromMemoryClass, "TextFromMemoryClass" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_close_bracket( n72 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n30, n72 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n0, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_stvar( res, sFnArguments_1 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sMemoryClass_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMemoryClass_1;
    refalrts::use( sMemoryClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // s.MemoryClass e.Name
    if( ! refalrts::svar_left( sMemoryClass_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwGenFnStart, (void*) "SwGenFnStart"},
      {refalrts::icSpliceSTVar, & sMemoryClass_1},
      {refalrts::icFunc, (void*) & FuncArguments, (void*) "FuncArguments"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & FuncArguments, "FuncArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sMemoryClass_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenFnEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_open_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_open_bracket( n47 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_close_bracket( n48 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n47, n48 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::link_brackets( n44, n46 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    refalrts::link_brackets( n0, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenEEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwGenFnStart, (void*) "SwGenFnStart"},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icFunc, (void*) & NakedArguments, (void*) "NakedArguments"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenFnEnd, (void*) "GenFnEnd"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Entry, "GN_Entry" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & NakedArguments, "NakedArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & GenFnEnd, "GenFnEnd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwGenFnStart, (void*) "SwGenFnStart"},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icFunc, (void*) & NakedArguments, (void*) "NakedArguments"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenFnEnd, (void*) "GenFnEnd"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Local, "GN_Local" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & NakedArguments, "NakedArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & GenFnEnd, "GenFnEnd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FuncArguments, (void*) "FuncArguments"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & FuncArguments, "FuncArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n34, n35 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n0, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FuncArguments, (void*) "FuncArguments"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & FuncArguments, "FuncArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n34, n35 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n0, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenSwap_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult GenESwap(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '$'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'W'},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenSwap_Aux, (void*) "GenSwap_Aux"},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '$' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'W' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenSwap_Aux, "GenSwap_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GN_Entry, "GN_Entry" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenSwap(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '$'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'W'},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenSwap_Aux, (void*) "GenSwap_Aux"},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '$' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'W' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & GenSwap_Aux, "GenSwap_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GN_Local, "GN_Local" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n0, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenSwap_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMemoryClass_1;
    refalrts::use( sMemoryClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // s.MemoryClass e.Name
    if( ! refalrts::svar_left( sMemoryClass_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenFnStart, (void*) "GenFnStart"},
      {refalrts::icSpliceSTVar, & sMemoryClass_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'z'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenFnStart, "GenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_open_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_close_bracket( n91 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_open_bracket( n92 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_close_bracket( n93 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_open_bracket( n94 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_char( n105, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_char( n106, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_char( n107, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_char( n108, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_char( n109, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_char( n110, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_char( n111, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_char( n112, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_char( n113, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_char( n114, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_char( n115, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_char( n116, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_char( n117, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_char( n118, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_char( n119, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_char( n120, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_char( n121, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_char( n122, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_char( n123, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_char( n124, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_char( n125, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_char( n126, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_char( n127, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_char( n128, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_char( n129, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_char( n130, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_close_bracket( n131 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_open_bracket( n132 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_char( n133, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_char( n134, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_char( n135, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n136 = 0;
    if( ! refalrts::alloc_char( n136, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n137 = 0;
    if( ! refalrts::alloc_char( n137, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n138 = 0;
    if( ! refalrts::alloc_char( n138, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n139 = 0;
    if( ! refalrts::alloc_char( n139, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n140 = 0;
    if( ! refalrts::alloc_char( n140, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n141 = 0;
    if( ! refalrts::alloc_char( n141, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n142 = 0;
    if( ! refalrts::alloc_char( n142, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n143 = 0;
    if( ! refalrts::alloc_char( n143, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n144 = 0;
    if( ! refalrts::alloc_char( n144, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n145 = 0;
    if( ! refalrts::alloc_char( n145, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n146 = 0;
    if( ! refalrts::alloc_char( n146, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n147 = 0;
    if( ! refalrts::alloc_char( n147, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n148 = 0;
    if( ! refalrts::alloc_char( n148, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n149 = 0;
    if( ! refalrts::alloc_char( n149, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n150 = 0;
    if( ! refalrts::alloc_char( n150, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n151 = 0;
    if( ! refalrts::alloc_char( n151, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n152 = 0;
    if( ! refalrts::alloc_char( n152, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n153 = 0;
    if( ! refalrts::alloc_char( n153, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n154 = 0;
    if( ! refalrts::alloc_char( n154, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n155 = 0;
    if( ! refalrts::alloc_char( n155, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n156 = 0;
    if( ! refalrts::alloc_char( n156, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n157 = 0;
    if( ! refalrts::alloc_char( n157, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n158 = 0;
    if( ! refalrts::alloc_char( n158, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n159 = 0;
    if( ! refalrts::alloc_char( n159, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n160 = 0;
    if( ! refalrts::alloc_char( n160, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n161 = 0;
    if( ! refalrts::alloc_char( n161, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n162 = 0;
    if( ! refalrts::alloc_char( n162, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n163 = 0;
    if( ! refalrts::alloc_char( n163, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n164 = 0;
    if( ! refalrts::alloc_char( n164, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n165 = 0;
    if( ! refalrts::alloc_char( n165, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n166 = 0;
    if( ! refalrts::alloc_char( n166, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n167 = 0;
    if( ! refalrts::alloc_close_bracket( n167 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n168 = 0;
    if( ! refalrts::alloc_open_bracket( n168 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n169 = 0;
    if( ! refalrts::alloc_close_bracket( n169 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n170 = 0;
    if( ! refalrts::alloc_open_bracket( n170 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n171 = 0;
    if( ! refalrts::alloc_char( n171, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n172 = 0;
    if( ! refalrts::alloc_char( n172, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n173 = 0;
    if( ! refalrts::alloc_char( n173, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n174 = 0;
    if( ! refalrts::alloc_char( n174, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n175 = 0;
    if( ! refalrts::alloc_char( n175, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n176 = 0;
    if( ! refalrts::alloc_char( n176, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n177 = 0;
    if( ! refalrts::alloc_char( n177, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n178 = 0;
    if( ! refalrts::alloc_char( n178, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n179 = 0;
    if( ! refalrts::alloc_char( n179, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n180 = 0;
    if( ! refalrts::alloc_char( n180, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n181 = 0;
    if( ! refalrts::alloc_char( n181, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n182 = 0;
    if( ! refalrts::alloc_char( n182, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n183 = 0;
    if( ! refalrts::alloc_char( n183, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n184 = 0;
    if( ! refalrts::alloc_char( n184, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n185 = 0;
    if( ! refalrts::alloc_char( n185, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n186 = 0;
    if( ! refalrts::alloc_char( n186, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n187 = 0;
    if( ! refalrts::alloc_char( n187, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n188 = 0;
    if( ! refalrts::alloc_char( n188, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n189 = 0;
    if( ! refalrts::alloc_char( n189, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n190 = 0;
    if( ! refalrts::alloc_char( n190, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n191 = 0;
    if( ! refalrts::alloc_char( n191, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n192 = 0;
    if( ! refalrts::alloc_char( n192, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n193 = 0;
    if( ! refalrts::alloc_char( n193, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n194 = 0;
    if( ! refalrts::alloc_char( n194, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n195 = 0;
    if( ! refalrts::alloc_char( n195, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n196 = 0;
    if( ! refalrts::alloc_char( n196, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n197 = 0;
    if( ! refalrts::alloc_char( n197, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n198 = 0;
    if( ! refalrts::alloc_char( n198, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n199 = 0;
    if( ! refalrts::alloc_char( n199, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n200 = 0;
    if( ! refalrts::alloc_char( n200, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n201 = 0;
    if( ! refalrts::alloc_char( n201, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n202 = 0;
    if( ! refalrts::alloc_char( n202, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n203 = 0;
    if( ! refalrts::alloc_char( n203, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n204 = 0;
    if( ! refalrts::alloc_char( n204, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n205 = 0;
    if( ! refalrts::alloc_char( n205, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n206 = 0;
    if( ! refalrts::alloc_char( n206, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n207 = 0;
    if( ! refalrts::alloc_char( n207, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n208 = 0;
    if( ! refalrts::alloc_char( n208, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n209 = 0;
    if( ! refalrts::alloc_char( n209, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n210 = 0;
    if( ! refalrts::alloc_char( n210, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n211 = 0;
    if( ! refalrts::alloc_close_bracket( n211 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n212 = 0;
    if( ! refalrts::alloc_open_bracket( n212 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n213 = 0;
    if( ! refalrts::alloc_char( n213, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n214 = 0;
    if( ! refalrts::alloc_char( n214, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n215 = 0;
    if( ! refalrts::alloc_char( n215, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n216 = 0;
    if( ! refalrts::alloc_char( n216, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n217 = 0;
    if( ! refalrts::alloc_char( n217, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n218 = 0;
    if( ! refalrts::alloc_char( n218, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n219 = 0;
    if( ! refalrts::alloc_char( n219, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n220 = 0;
    if( ! refalrts::alloc_char( n220, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n221 = 0;
    if( ! refalrts::alloc_char( n221, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n222 = 0;
    if( ! refalrts::alloc_char( n222, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n223 = 0;
    if( ! refalrts::alloc_char( n223, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n224 = 0;
    if( ! refalrts::alloc_char( n224, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n225 = 0;
    if( ! refalrts::alloc_char( n225, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n226 = 0;
    if( ! refalrts::alloc_char( n226, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n227 = 0;
    if( ! refalrts::alloc_char( n227, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n228 = 0;
    if( ! refalrts::alloc_char( n228, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n229 = 0;
    if( ! refalrts::alloc_char( n229, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n230 = 0;
    if( ! refalrts::alloc_char( n230, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n231 = 0;
    if( ! refalrts::alloc_char( n231, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n232 = 0;
    if( ! refalrts::alloc_char( n232, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n233 = 0;
    if( ! refalrts::alloc_char( n233, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n234 = 0;
    if( ! refalrts::alloc_char( n234, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n235 = 0;
    if( ! refalrts::alloc_char( n235, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n236 = 0;
    if( ! refalrts::alloc_char( n236, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n237 = 0;
    if( ! refalrts::alloc_char( n237, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n238 = 0;
    if( ! refalrts::alloc_char( n238, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n239 = 0;
    if( ! refalrts::alloc_char( n239, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n240 = 0;
    if( ! refalrts::alloc_char( n240, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n241 = 0;
    if( ! refalrts::alloc_char( n241, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n242 = 0;
    if( ! refalrts::alloc_char( n242, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n243 = 0;
    if( ! refalrts::alloc_char( n243, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n244 = 0;
    if( ! refalrts::alloc_char( n244, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n245 = 0;
    if( ! refalrts::alloc_char( n245, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n246 = 0;
    if( ! refalrts::alloc_char( n246, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n247 = 0;
    if( ! refalrts::alloc_char( n247, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n248 = 0;
    if( ! refalrts::alloc_char( n248, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n249 = 0;
    if( ! refalrts::alloc_char( n249, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n250 = 0;
    if( ! refalrts::alloc_char( n250, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n251 = 0;
    if( ! refalrts::alloc_char( n251, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n252 = 0;
    if( ! refalrts::alloc_char( n252, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n253 = 0;
    if( ! refalrts::alloc_char( n253, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n254 = 0;
    if( ! refalrts::alloc_close_bracket( n254 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n255 = 0;
    if( ! refalrts::alloc_open_bracket( n255 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n256 = 0;
    if( ! refalrts::alloc_close_bracket( n256 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n257 = 0;
    if( ! refalrts::alloc_open_bracket( n257 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n258 = 0;
    if( ! refalrts::alloc_char( n258, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n259 = 0;
    if( ! refalrts::alloc_char( n259, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n260 = 0;
    if( ! refalrts::alloc_char( n260, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n261 = 0;
    if( ! refalrts::alloc_char( n261, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n262 = 0;
    if( ! refalrts::alloc_char( n262, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n263 = 0;
    if( ! refalrts::alloc_char( n263, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n264 = 0;
    if( ! refalrts::alloc_char( n264, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n265 = 0;
    if( ! refalrts::alloc_char( n265, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n266 = 0;
    if( ! refalrts::alloc_char( n266, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n267 = 0;
    if( ! refalrts::alloc_char( n267, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n268 = 0;
    if( ! refalrts::alloc_char( n268, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n269 = 0;
    if( ! refalrts::alloc_char( n269, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n270 = 0;
    if( ! refalrts::alloc_char( n270, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n271 = 0;
    if( ! refalrts::alloc_char( n271, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n272 = 0;
    if( ! refalrts::alloc_char( n272, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n273 = 0;
    if( ! refalrts::alloc_char( n273, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n274 = 0;
    if( ! refalrts::alloc_char( n274, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n275 = 0;
    if( ! refalrts::alloc_char( n275, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n276 = 0;
    if( ! refalrts::alloc_char( n276, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n277 = 0;
    if( ! refalrts::alloc_char( n277, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n278 = 0;
    if( ! refalrts::alloc_char( n278, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n279 = 0;
    if( ! refalrts::alloc_char( n279, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n280 = 0;
    if( ! refalrts::alloc_char( n280, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n281 = 0;
    if( ! refalrts::alloc_char( n281, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n282 = 0;
    if( ! refalrts::alloc_char( n282, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n283 = 0;
    if( ! refalrts::alloc_char( n283, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n284 = 0;
    if( ! refalrts::alloc_char( n284, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n285 = 0;
    if( ! refalrts::alloc_char( n285, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n286 = 0;
    if( ! refalrts::alloc_char( n286, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n287 = 0;
    if( ! refalrts::alloc_char( n287, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n288 = 0;
    if( ! refalrts::alloc_char( n288, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n289 = 0;
    if( ! refalrts::alloc_char( n289, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n290 = 0;
    if( ! refalrts::alloc_char( n290, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n291 = 0;
    if( ! refalrts::alloc_char( n291, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n292 = 0;
    if( ! refalrts::alloc_char( n292, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n293 = 0;
    if( ! refalrts::alloc_char( n293, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n294 = 0;
    if( ! refalrts::alloc_char( n294, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n295 = 0;
    if( ! refalrts::alloc_char( n295, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n296 = 0;
    if( ! refalrts::alloc_char( n296, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n297 = 0;
    if( ! refalrts::alloc_char( n297, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n298 = 0;
    if( ! refalrts::alloc_char( n298, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n299 = 0;
    if( ! refalrts::alloc_char( n299, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n300 = 0;
    if( ! refalrts::alloc_char( n300, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n301 = 0;
    if( ! refalrts::alloc_char( n301, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n302 = 0;
    if( ! refalrts::alloc_char( n302, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n303 = 0;
    if( ! refalrts::alloc_char( n303, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n304 = 0;
    if( ! refalrts::alloc_char( n304, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n305 = 0;
    if( ! refalrts::alloc_char( n305, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n306 = 0;
    if( ! refalrts::alloc_char( n306, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n307 = 0;
    if( ! refalrts::alloc_char( n307, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n308 = 0;
    if( ! refalrts::alloc_char( n308, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n309 = 0;
    if( ! refalrts::alloc_char( n309, 'z' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n310 = 0;
    if( ! refalrts::alloc_char( n310, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n311 = 0;
    if( ! refalrts::alloc_char( n311, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n312 = 0;
    if( ! refalrts::alloc_char( n312, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n313 = 0;
    if( ! refalrts::alloc_char( n313, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n314 = 0;
    if( ! refalrts::alloc_char( n314, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n315 = 0;
    if( ! refalrts::alloc_char( n315, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n316 = 0;
    if( ! refalrts::alloc_char( n316, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n317 = 0;
    if( ! refalrts::alloc_char( n317, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n318 = 0;
    if( ! refalrts::alloc_char( n318, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n319 = 0;
    if( ! refalrts::alloc_char( n319, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n320 = 0;
    if( ! refalrts::alloc_char( n320, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n321 = 0;
    if( ! refalrts::alloc_char( n321, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n322 = 0;
    if( ! refalrts::alloc_char( n322, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n323 = 0;
    if( ! refalrts::alloc_char( n323, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n324 = 0;
    if( ! refalrts::alloc_char( n324, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n325 = 0;
    if( ! refalrts::alloc_char( n325, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n326 = 0;
    if( ! refalrts::alloc_char( n326, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n327 = 0;
    if( ! refalrts::alloc_char( n327, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n328 = 0;
    if( ! refalrts::alloc_char( n328, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n329 = 0;
    if( ! refalrts::alloc_char( n329, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n330 = 0;
    if( ! refalrts::alloc_char( n330, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n331 = 0;
    if( ! refalrts::alloc_char( n331, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n332 = 0;
    if( ! refalrts::alloc_char( n332, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n333 = 0;
    if( ! refalrts::alloc_char( n333, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n334 = 0;
    if( ! refalrts::alloc_char( n334, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n335 = 0;
    if( ! refalrts::alloc_close_bracket( n335 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n336 = 0;
    if( ! refalrts::alloc_open_bracket( n336 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n337 = 0;
    if( ! refalrts::alloc_close_bracket( n337 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n338 = 0;
    if( ! refalrts::alloc_open_bracket( n338 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n339 = 0;
    if( ! refalrts::alloc_char( n339, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n340 = 0;
    if( ! refalrts::alloc_char( n340, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n341 = 0;
    if( ! refalrts::alloc_char( n341, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n342 = 0;
    if( ! refalrts::alloc_char( n342, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n343 = 0;
    if( ! refalrts::alloc_char( n343, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n344 = 0;
    if( ! refalrts::alloc_char( n344, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n345 = 0;
    if( ! refalrts::alloc_char( n345, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n346 = 0;
    if( ! refalrts::alloc_char( n346, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n347 = 0;
    if( ! refalrts::alloc_char( n347, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n348 = 0;
    if( ! refalrts::alloc_char( n348, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n349 = 0;
    if( ! refalrts::alloc_char( n349, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n350 = 0;
    if( ! refalrts::alloc_char( n350, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n351 = 0;
    if( ! refalrts::alloc_char( n351, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n352 = 0;
    if( ! refalrts::alloc_char( n352, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n353 = 0;
    if( ! refalrts::alloc_char( n353, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n354 = 0;
    if( ! refalrts::alloc_char( n354, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n355 = 0;
    if( ! refalrts::alloc_char( n355, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n356 = 0;
    if( ! refalrts::alloc_char( n356, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n357 = 0;
    if( ! refalrts::alloc_char( n357, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n358 = 0;
    if( ! refalrts::alloc_char( n358, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n359 = 0;
    if( ! refalrts::alloc_char( n359, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n360 = 0;
    if( ! refalrts::alloc_char( n360, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n361 = 0;
    if( ! refalrts::alloc_char( n361, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n362 = 0;
    if( ! refalrts::alloc_char( n362, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n363 = 0;
    if( ! refalrts::alloc_char( n363, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n364 = 0;
    if( ! refalrts::alloc_close_bracket( n364 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n365 = 0;
    if( ! refalrts::alloc_open_bracket( n365 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n366 = 0;
    if( ! refalrts::alloc_char( n366, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n367 = 0;
    if( ! refalrts::alloc_char( n367, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n368 = 0;
    if( ! refalrts::alloc_char( n368, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n369 = 0;
    if( ! refalrts::alloc_char( n369, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n370 = 0;
    if( ! refalrts::alloc_char( n370, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n371 = 0;
    if( ! refalrts::alloc_char( n371, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n372 = 0;
    if( ! refalrts::alloc_char( n372, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n373 = 0;
    if( ! refalrts::alloc_char( n373, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n374 = 0;
    if( ! refalrts::alloc_char( n374, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n375 = 0;
    if( ! refalrts::alloc_char( n375, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n376 = 0;
    if( ! refalrts::alloc_char( n376, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n377 = 0;
    if( ! refalrts::alloc_char( n377, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n378 = 0;
    if( ! refalrts::alloc_char( n378, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n379 = 0;
    if( ! refalrts::alloc_char( n379, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n380 = 0;
    if( ! refalrts::alloc_char( n380, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n381 = 0;
    if( ! refalrts::alloc_char( n381, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n382 = 0;
    if( ! refalrts::alloc_char( n382, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n383 = 0;
    if( ! refalrts::alloc_char( n383, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n384 = 0;
    if( ! refalrts::alloc_char( n384, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n385 = 0;
    if( ! refalrts::alloc_char( n385, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n386 = 0;
    if( ! refalrts::alloc_char( n386, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n387 = 0;
    if( ! refalrts::alloc_char( n387, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n388 = 0;
    if( ! refalrts::alloc_char( n388, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n389 = 0;
    if( ! refalrts::alloc_char( n389, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n390 = 0;
    if( ! refalrts::alloc_char( n390, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n391 = 0;
    if( ! refalrts::alloc_close_bracket( n391 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n392 = 0;
    if( ! refalrts::alloc_open_bracket( n392 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n393 = 0;
    if( ! refalrts::alloc_close_bracket( n393 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n394 = 0;
    if( ! refalrts::alloc_open_bracket( n394 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n395 = 0;
    if( ! refalrts::alloc_char( n395, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n396 = 0;
    if( ! refalrts::alloc_char( n396, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n397 = 0;
    if( ! refalrts::alloc_char( n397, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n398 = 0;
    if( ! refalrts::alloc_char( n398, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n399 = 0;
    if( ! refalrts::alloc_char( n399, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n400 = 0;
    if( ! refalrts::alloc_char( n400, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n401 = 0;
    if( ! refalrts::alloc_char( n401, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n402 = 0;
    if( ! refalrts::alloc_char( n402, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n403 = 0;
    if( ! refalrts::alloc_char( n403, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n404 = 0;
    if( ! refalrts::alloc_char( n404, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n405 = 0;
    if( ! refalrts::alloc_char( n405, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n406 = 0;
    if( ! refalrts::alloc_char( n406, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n407 = 0;
    if( ! refalrts::alloc_char( n407, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n408 = 0;
    if( ! refalrts::alloc_char( n408, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n409 = 0;
    if( ! refalrts::alloc_char( n409, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n410 = 0;
    if( ! refalrts::alloc_char( n410, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n411 = 0;
    if( ! refalrts::alloc_char( n411, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n412 = 0;
    if( ! refalrts::alloc_char( n412, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n413 = 0;
    if( ! refalrts::alloc_char( n413, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n414 = 0;
    if( ! refalrts::alloc_char( n414, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n415 = 0;
    if( ! refalrts::alloc_char( n415, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n416 = 0;
    if( ! refalrts::alloc_char( n416, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n417 = 0;
    if( ! refalrts::alloc_char( n417, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n418 = 0;
    if( ! refalrts::alloc_char( n418, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n419 = 0;
    if( ! refalrts::alloc_char( n419, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n420 = 0;
    if( ! refalrts::alloc_char( n420, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n421 = 0;
    if( ! refalrts::alloc_char( n421, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n422 = 0;
    if( ! refalrts::alloc_char( n422, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n423 = 0;
    if( ! refalrts::alloc_char( n423, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n424 = 0;
    if( ! refalrts::alloc_char( n424, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n425 = 0;
    if( ! refalrts::alloc_char( n425, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n426 = 0;
    if( ! refalrts::alloc_char( n426, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n427 = 0;
    if( ! refalrts::alloc_char( n427, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n428 = 0;
    if( ! refalrts::alloc_char( n428, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n429 = 0;
    if( ! refalrts::alloc_char( n429, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n430 = 0;
    if( ! refalrts::alloc_char( n430, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n431 = 0;
    if( ! refalrts::alloc_char( n431, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n432 = 0;
    if( ! refalrts::alloc_char( n432, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n433 = 0;
    if( ! refalrts::alloc_char( n433, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n434 = 0;
    if( ! refalrts::alloc_char( n434, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n435 = 0;
    if( ! refalrts::alloc_char( n435, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n436 = 0;
    if( ! refalrts::alloc_char( n436, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n437 = 0;
    if( ! refalrts::alloc_char( n437, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n438 = 0;
    if( ! refalrts::alloc_char( n438, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n439 = 0;
    if( ! refalrts::alloc_char( n439, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n440 = 0;
    if( ! refalrts::alloc_char( n440, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n441 = 0;
    if( ! refalrts::alloc_char( n441, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n442 = 0;
    if( ! refalrts::alloc_char( n442, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n443 = 0;
    if( ! refalrts::alloc_char( n443, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n444 = 0;
    if( ! refalrts::alloc_char( n444, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n445 = 0;
    if( ! refalrts::alloc_char( n445, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n446 = 0;
    if( ! refalrts::alloc_char( n446, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n447 = 0;
    if( ! refalrts::alloc_char( n447, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n448 = 0;
    if( ! refalrts::alloc_char( n448, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n449 = 0;
    if( ! refalrts::alloc_char( n449, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n450 = 0;
    if( ! refalrts::alloc_char( n450, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n451 = 0;
    if( ! refalrts::alloc_char( n451, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n452 = 0;
    if( ! refalrts::alloc_close_bracket( n452 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n453 = 0;
    if( ! refalrts::alloc_open_bracket( n453 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n454 = 0;
    if( ! refalrts::alloc_char( n454, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n455 = 0;
    if( ! refalrts::alloc_char( n455, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n456 = 0;
    if( ! refalrts::alloc_char( n456, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n457 = 0;
    if( ! refalrts::alloc_char( n457, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n458 = 0;
    if( ! refalrts::alloc_char( n458, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n459 = 0;
    if( ! refalrts::alloc_char( n459, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n460 = 0;
    if( ! refalrts::alloc_char( n460, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n461 = 0;
    if( ! refalrts::alloc_char( n461, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n462 = 0;
    if( ! refalrts::alloc_char( n462, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n463 = 0;
    if( ! refalrts::alloc_char( n463, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n464 = 0;
    if( ! refalrts::alloc_char( n464, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n465 = 0;
    if( ! refalrts::alloc_char( n465, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n466 = 0;
    if( ! refalrts::alloc_char( n466, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n467 = 0;
    if( ! refalrts::alloc_char( n467, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n468 = 0;
    if( ! refalrts::alloc_char( n468, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n469 = 0;
    if( ! refalrts::alloc_char( n469, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n470 = 0;
    if( ! refalrts::alloc_char( n470, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n471 = 0;
    if( ! refalrts::alloc_char( n471, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n472 = 0;
    if( ! refalrts::alloc_char( n472, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n473 = 0;
    if( ! refalrts::alloc_char( n473, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n474 = 0;
    if( ! refalrts::alloc_char( n474, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n475 = 0;
    if( ! refalrts::alloc_char( n475, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n476 = 0;
    if( ! refalrts::alloc_char( n476, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n477 = 0;
    if( ! refalrts::alloc_char( n477, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n478 = 0;
    if( ! refalrts::alloc_char( n478, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n479 = 0;
    if( ! refalrts::alloc_char( n479, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n480 = 0;
    if( ! refalrts::alloc_char( n480, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n481 = 0;
    if( ! refalrts::alloc_char( n481, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n482 = 0;
    if( ! refalrts::alloc_char( n482, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n483 = 0;
    if( ! refalrts::alloc_char( n483, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n484 = 0;
    if( ! refalrts::alloc_char( n484, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n485 = 0;
    if( ! refalrts::alloc_char( n485, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n486 = 0;
    if( ! refalrts::alloc_char( n486, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n487 = 0;
    if( ! refalrts::alloc_char( n487, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n488 = 0;
    if( ! refalrts::alloc_char( n488, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n489 = 0;
    if( ! refalrts::alloc_char( n489, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n490 = 0;
    if( ! refalrts::alloc_char( n490, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n491 = 0;
    if( ! refalrts::alloc_char( n491, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n492 = 0;
    if( ! refalrts::alloc_char( n492, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n493 = 0;
    if( ! refalrts::alloc_char( n493, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n494 = 0;
    if( ! refalrts::alloc_char( n494, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n495 = 0;
    if( ! refalrts::alloc_char( n495, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n496 = 0;
    if( ! refalrts::alloc_char( n496, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n497 = 0;
    if( ! refalrts::alloc_char( n497, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n498 = 0;
    if( ! refalrts::alloc_char( n498, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n499 = 0;
    if( ! refalrts::alloc_char( n499, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n500 = 0;
    if( ! refalrts::alloc_char( n500, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n501 = 0;
    if( ! refalrts::alloc_char( n501, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n502 = 0;
    if( ! refalrts::alloc_char( n502, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n503 = 0;
    if( ! refalrts::alloc_char( n503, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n504 = 0;
    if( ! refalrts::alloc_char( n504, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n505 = 0;
    if( ! refalrts::alloc_char( n505, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n506 = 0;
    if( ! refalrts::alloc_char( n506, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n507 = 0;
    if( ! refalrts::alloc_char( n507, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n508 = 0;
    if( ! refalrts::alloc_char( n508, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n509 = 0;
    if( ! refalrts::alloc_close_bracket( n509 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n510 = 0;
    if( ! refalrts::alloc_open_bracket( n510 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n511 = 0;
    if( ! refalrts::alloc_char( n511, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n512 = 0;
    if( ! refalrts::alloc_char( n512, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n513 = 0;
    if( ! refalrts::alloc_char( n513, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n514 = 0;
    if( ! refalrts::alloc_char( n514, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n515 = 0;
    if( ! refalrts::alloc_char( n515, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n516 = 0;
    if( ! refalrts::alloc_char( n516, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n517 = 0;
    if( ! refalrts::alloc_char( n517, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n518 = 0;
    if( ! refalrts::alloc_char( n518, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n519 = 0;
    if( ! refalrts::alloc_char( n519, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n520 = 0;
    if( ! refalrts::alloc_char( n520, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n521 = 0;
    if( ! refalrts::alloc_char( n521, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n522 = 0;
    if( ! refalrts::alloc_char( n522, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n523 = 0;
    if( ! refalrts::alloc_char( n523, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n524 = 0;
    if( ! refalrts::alloc_char( n524, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n525 = 0;
    if( ! refalrts::alloc_char( n525, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n526 = 0;
    if( ! refalrts::alloc_char( n526, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n527 = 0;
    if( ! refalrts::alloc_char( n527, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n528 = 0;
    if( ! refalrts::alloc_char( n528, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n529 = 0;
    if( ! refalrts::alloc_char( n529, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n530 = 0;
    if( ! refalrts::alloc_char( n530, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n531 = 0;
    if( ! refalrts::alloc_char( n531, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n532 = 0;
    if( ! refalrts::alloc_char( n532, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n533 = 0;
    if( ! refalrts::alloc_char( n533, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n534 = 0;
    if( ! refalrts::alloc_char( n534, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n535 = 0;
    if( ! refalrts::alloc_char( n535, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n536 = 0;
    if( ! refalrts::alloc_char( n536, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n537 = 0;
    if( ! refalrts::alloc_char( n537, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n538 = 0;
    if( ! refalrts::alloc_char( n538, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n539 = 0;
    if( ! refalrts::alloc_char( n539, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n540 = 0;
    if( ! refalrts::alloc_char( n540, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n541 = 0;
    if( ! refalrts::alloc_char( n541, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n542 = 0;
    if( ! refalrts::alloc_char( n542, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n543 = 0;
    if( ! refalrts::alloc_char( n543, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n544 = 0;
    if( ! refalrts::alloc_char( n544, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n545 = 0;
    if( ! refalrts::alloc_char( n545, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n546 = 0;
    if( ! refalrts::alloc_char( n546, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n547 = 0;
    if( ! refalrts::alloc_char( n547, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n548 = 0;
    if( ! refalrts::alloc_char( n548, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n549 = 0;
    if( ! refalrts::alloc_char( n549, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n550 = 0;
    if( ! refalrts::alloc_char( n550, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n551 = 0;
    if( ! refalrts::alloc_char( n551, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n552 = 0;
    if( ! refalrts::alloc_char( n552, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n553 = 0;
    if( ! refalrts::alloc_char( n553, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n554 = 0;
    if( ! refalrts::alloc_char( n554, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n555 = 0;
    if( ! refalrts::alloc_char( n555, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n556 = 0;
    if( ! refalrts::alloc_char( n556, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n557 = 0;
    if( ! refalrts::alloc_char( n557, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n558 = 0;
    if( ! refalrts::alloc_char( n558, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n559 = 0;
    if( ! refalrts::alloc_close_bracket( n559 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n560 = 0;
    if( ! refalrts::alloc_open_bracket( n560 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n561 = 0;
    if( ! refalrts::alloc_char( n561, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n562 = 0;
    if( ! refalrts::alloc_char( n562, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n563 = 0;
    if( ! refalrts::alloc_char( n563, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n564 = 0;
    if( ! refalrts::alloc_char( n564, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n565 = 0;
    if( ! refalrts::alloc_char( n565, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n566 = 0;
    if( ! refalrts::alloc_char( n566, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n567 = 0;
    if( ! refalrts::alloc_char( n567, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n568 = 0;
    if( ! refalrts::alloc_char( n568, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n569 = 0;
    if( ! refalrts::alloc_char( n569, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n570 = 0;
    if( ! refalrts::alloc_char( n570, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n571 = 0;
    if( ! refalrts::alloc_char( n571, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n572 = 0;
    if( ! refalrts::alloc_char( n572, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n573 = 0;
    if( ! refalrts::alloc_char( n573, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n574 = 0;
    if( ! refalrts::alloc_char( n574, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n575 = 0;
    if( ! refalrts::alloc_char( n575, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n576 = 0;
    if( ! refalrts::alloc_char( n576, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n577 = 0;
    if( ! refalrts::alloc_char( n577, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n578 = 0;
    if( ! refalrts::alloc_char( n578, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n579 = 0;
    if( ! refalrts::alloc_char( n579, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n580 = 0;
    if( ! refalrts::alloc_char( n580, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n581 = 0;
    if( ! refalrts::alloc_char( n581, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n582 = 0;
    if( ! refalrts::alloc_char( n582, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n583 = 0;
    if( ! refalrts::alloc_char( n583, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n584 = 0;
    if( ! refalrts::alloc_char( n584, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n585 = 0;
    if( ! refalrts::alloc_char( n585, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n586 = 0;
    if( ! refalrts::alloc_char( n586, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n587 = 0;
    if( ! refalrts::alloc_char( n587, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n588 = 0;
    if( ! refalrts::alloc_char( n588, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n589 = 0;
    if( ! refalrts::alloc_char( n589, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n590 = 0;
    if( ! refalrts::alloc_char( n590, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n591 = 0;
    if( ! refalrts::alloc_char( n591, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n592 = 0;
    if( ! refalrts::alloc_char( n592, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n593 = 0;
    if( ! refalrts::alloc_char( n593, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n594 = 0;
    if( ! refalrts::alloc_char( n594, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n595 = 0;
    if( ! refalrts::alloc_char( n595, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n596 = 0;
    if( ! refalrts::alloc_char( n596, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n597 = 0;
    if( ! refalrts::alloc_char( n597, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n598 = 0;
    if( ! refalrts::alloc_char( n598, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n599 = 0;
    if( ! refalrts::alloc_char( n599, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n600 = 0;
    if( ! refalrts::alloc_char( n600, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n601 = 0;
    if( ! refalrts::alloc_char( n601, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n602 = 0;
    if( ! refalrts::alloc_char( n602, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n603 = 0;
    if( ! refalrts::alloc_char( n603, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n604 = 0;
    if( ! refalrts::alloc_char( n604, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n605 = 0;
    if( ! refalrts::alloc_char( n605, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n606 = 0;
    if( ! refalrts::alloc_char( n606, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n607 = 0;
    if( ! refalrts::alloc_char( n607, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n608 = 0;
    if( ! refalrts::alloc_char( n608, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n609 = 0;
    if( ! refalrts::alloc_char( n609, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n610 = 0;
    if( ! refalrts::alloc_char( n610, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n611 = 0;
    if( ! refalrts::alloc_char( n611, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n612 = 0;
    if( ! refalrts::alloc_char( n612, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n613 = 0;
    if( ! refalrts::alloc_char( n613, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n614 = 0;
    if( ! refalrts::alloc_close_bracket( n614 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n615 = 0;
    if( ! refalrts::alloc_open_bracket( n615 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n616 = 0;
    if( ! refalrts::alloc_close_bracket( n616 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n617 = 0;
    if( ! refalrts::alloc_open_bracket( n617 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n618 = 0;
    if( ! refalrts::alloc_char( n618, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n619 = 0;
    if( ! refalrts::alloc_char( n619, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n620 = 0;
    if( ! refalrts::alloc_char( n620, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n621 = 0;
    if( ! refalrts::alloc_char( n621, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n622 = 0;
    if( ! refalrts::alloc_char( n622, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n623 = 0;
    if( ! refalrts::alloc_char( n623, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n624 = 0;
    if( ! refalrts::alloc_char( n624, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n625 = 0;
    if( ! refalrts::alloc_char( n625, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n626 = 0;
    if( ! refalrts::alloc_char( n626, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n627 = 0;
    if( ! refalrts::alloc_char( n627, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n628 = 0;
    if( ! refalrts::alloc_char( n628, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n629 = 0;
    if( ! refalrts::alloc_char( n629, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n630 = 0;
    if( ! refalrts::alloc_char( n630, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n631 = 0;
    if( ! refalrts::alloc_char( n631, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n632 = 0;
    if( ! refalrts::alloc_char( n632, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n633 = 0;
    if( ! refalrts::alloc_char( n633, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n634 = 0;
    if( ! refalrts::alloc_char( n634, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n635 = 0;
    if( ! refalrts::alloc_char( n635, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n636 = 0;
    if( ! refalrts::alloc_char( n636, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n637 = 0;
    if( ! refalrts::alloc_char( n637, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n638 = 0;
    if( ! refalrts::alloc_char( n638, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n639 = 0;
    if( ! refalrts::alloc_char( n639, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n640 = 0;
    if( ! refalrts::alloc_char( n640, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n641 = 0;
    if( ! refalrts::alloc_char( n641, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n642 = 0;
    if( ! refalrts::alloc_char( n642, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n643 = 0;
    if( ! refalrts::alloc_char( n643, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n644 = 0;
    if( ! refalrts::alloc_char( n644, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n645 = 0;
    if( ! refalrts::alloc_char( n645, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n646 = 0;
    if( ! refalrts::alloc_close_bracket( n646 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n647 = 0;
    if( ! refalrts::alloc_open_bracket( n647 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n648 = 0;
    if( ! refalrts::alloc_char( n648, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n649 = 0;
    if( ! refalrts::alloc_close_bracket( n649 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n650 = 0;
    if( ! refalrts::alloc_open_bracket( n650 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n651 = 0;
    if( ! refalrts::alloc_close_bracket( n651 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n650, n651 );
    res = refalrts::splice_elem( res, n651 );
    res = refalrts::splice_elem( res, n650 );
    refalrts::link_brackets( n647, n649 );
    res = refalrts::splice_elem( res, n649 );
    res = refalrts::splice_elem( res, n648 );
    res = refalrts::splice_elem( res, n647 );
    refalrts::link_brackets( n617, n646 );
    res = refalrts::splice_elem( res, n646 );
    res = refalrts::splice_elem( res, n645 );
    res = refalrts::splice_elem( res, n644 );
    res = refalrts::splice_elem( res, n643 );
    res = refalrts::splice_elem( res, n642 );
    res = refalrts::splice_elem( res, n641 );
    res = refalrts::splice_elem( res, n640 );
    res = refalrts::splice_elem( res, n639 );
    res = refalrts::splice_elem( res, n638 );
    res = refalrts::splice_elem( res, n637 );
    res = refalrts::splice_elem( res, n636 );
    res = refalrts::splice_elem( res, n635 );
    res = refalrts::splice_elem( res, n634 );
    res = refalrts::splice_elem( res, n633 );
    res = refalrts::splice_elem( res, n632 );
    res = refalrts::splice_elem( res, n631 );
    res = refalrts::splice_elem( res, n630 );
    res = refalrts::splice_elem( res, n629 );
    res = refalrts::splice_elem( res, n628 );
    res = refalrts::splice_elem( res, n627 );
    res = refalrts::splice_elem( res, n626 );
    res = refalrts::splice_elem( res, n625 );
    res = refalrts::splice_elem( res, n624 );
    res = refalrts::splice_elem( res, n623 );
    res = refalrts::splice_elem( res, n622 );
    res = refalrts::splice_elem( res, n621 );
    res = refalrts::splice_elem( res, n620 );
    res = refalrts::splice_elem( res, n619 );
    res = refalrts::splice_elem( res, n618 );
    res = refalrts::splice_elem( res, n617 );
    refalrts::link_brackets( n615, n616 );
    res = refalrts::splice_elem( res, n616 );
    res = refalrts::splice_elem( res, n615 );
    refalrts::link_brackets( n560, n614 );
    res = refalrts::splice_elem( res, n614 );
    res = refalrts::splice_elem( res, n613 );
    res = refalrts::splice_elem( res, n612 );
    res = refalrts::splice_elem( res, n611 );
    res = refalrts::splice_elem( res, n610 );
    res = refalrts::splice_elem( res, n609 );
    res = refalrts::splice_elem( res, n608 );
    res = refalrts::splice_elem( res, n607 );
    res = refalrts::splice_elem( res, n606 );
    res = refalrts::splice_elem( res, n605 );
    res = refalrts::splice_elem( res, n604 );
    res = refalrts::splice_elem( res, n603 );
    res = refalrts::splice_elem( res, n602 );
    res = refalrts::splice_elem( res, n601 );
    res = refalrts::splice_elem( res, n600 );
    res = refalrts::splice_elem( res, n599 );
    res = refalrts::splice_elem( res, n598 );
    res = refalrts::splice_elem( res, n597 );
    res = refalrts::splice_elem( res, n596 );
    res = refalrts::splice_elem( res, n595 );
    res = refalrts::splice_elem( res, n594 );
    res = refalrts::splice_elem( res, n593 );
    res = refalrts::splice_elem( res, n592 );
    res = refalrts::splice_elem( res, n591 );
    res = refalrts::splice_elem( res, n590 );
    res = refalrts::splice_elem( res, n589 );
    res = refalrts::splice_elem( res, n588 );
    res = refalrts::splice_elem( res, n587 );
    res = refalrts::splice_elem( res, n586 );
    res = refalrts::splice_elem( res, n585 );
    res = refalrts::splice_elem( res, n584 );
    res = refalrts::splice_elem( res, n583 );
    res = refalrts::splice_elem( res, n582 );
    res = refalrts::splice_elem( res, n581 );
    res = refalrts::splice_elem( res, n580 );
    res = refalrts::splice_elem( res, n579 );
    res = refalrts::splice_elem( res, n578 );
    res = refalrts::splice_elem( res, n577 );
    res = refalrts::splice_elem( res, n576 );
    res = refalrts::splice_elem( res, n575 );
    res = refalrts::splice_elem( res, n574 );
    res = refalrts::splice_elem( res, n573 );
    res = refalrts::splice_elem( res, n572 );
    res = refalrts::splice_elem( res, n571 );
    res = refalrts::splice_elem( res, n570 );
    res = refalrts::splice_elem( res, n569 );
    res = refalrts::splice_elem( res, n568 );
    res = refalrts::splice_elem( res, n567 );
    res = refalrts::splice_elem( res, n566 );
    res = refalrts::splice_elem( res, n565 );
    res = refalrts::splice_elem( res, n564 );
    res = refalrts::splice_elem( res, n563 );
    res = refalrts::splice_elem( res, n562 );
    res = refalrts::splice_elem( res, n561 );
    res = refalrts::splice_elem( res, n560 );
    refalrts::link_brackets( n510, n559 );
    res = refalrts::splice_elem( res, n559 );
    res = refalrts::splice_elem( res, n558 );
    res = refalrts::splice_elem( res, n557 );
    res = refalrts::splice_elem( res, n556 );
    res = refalrts::splice_elem( res, n555 );
    res = refalrts::splice_elem( res, n554 );
    res = refalrts::splice_elem( res, n553 );
    res = refalrts::splice_elem( res, n552 );
    res = refalrts::splice_elem( res, n551 );
    res = refalrts::splice_elem( res, n550 );
    res = refalrts::splice_elem( res, n549 );
    res = refalrts::splice_elem( res, n548 );
    res = refalrts::splice_elem( res, n547 );
    res = refalrts::splice_elem( res, n546 );
    res = refalrts::splice_elem( res, n545 );
    res = refalrts::splice_elem( res, n544 );
    res = refalrts::splice_elem( res, n543 );
    res = refalrts::splice_elem( res, n542 );
    res = refalrts::splice_elem( res, n541 );
    res = refalrts::splice_elem( res, n540 );
    res = refalrts::splice_elem( res, n539 );
    res = refalrts::splice_elem( res, n538 );
    res = refalrts::splice_elem( res, n537 );
    res = refalrts::splice_elem( res, n536 );
    res = refalrts::splice_elem( res, n535 );
    res = refalrts::splice_elem( res, n534 );
    res = refalrts::splice_elem( res, n533 );
    res = refalrts::splice_elem( res, n532 );
    res = refalrts::splice_elem( res, n531 );
    res = refalrts::splice_elem( res, n530 );
    res = refalrts::splice_elem( res, n529 );
    res = refalrts::splice_elem( res, n528 );
    res = refalrts::splice_elem( res, n527 );
    res = refalrts::splice_elem( res, n526 );
    res = refalrts::splice_elem( res, n525 );
    res = refalrts::splice_elem( res, n524 );
    res = refalrts::splice_elem( res, n523 );
    res = refalrts::splice_elem( res, n522 );
    res = refalrts::splice_elem( res, n521 );
    res = refalrts::splice_elem( res, n520 );
    res = refalrts::splice_elem( res, n519 );
    res = refalrts::splice_elem( res, n518 );
    res = refalrts::splice_elem( res, n517 );
    res = refalrts::splice_elem( res, n516 );
    res = refalrts::splice_elem( res, n515 );
    res = refalrts::splice_elem( res, n514 );
    res = refalrts::splice_elem( res, n513 );
    res = refalrts::splice_elem( res, n512 );
    res = refalrts::splice_elem( res, n511 );
    res = refalrts::splice_elem( res, n510 );
    refalrts::link_brackets( n453, n509 );
    res = refalrts::splice_elem( res, n509 );
    res = refalrts::splice_elem( res, n508 );
    res = refalrts::splice_elem( res, n507 );
    res = refalrts::splice_elem( res, n506 );
    res = refalrts::splice_elem( res, n505 );
    res = refalrts::splice_elem( res, n504 );
    res = refalrts::splice_elem( res, n503 );
    res = refalrts::splice_elem( res, n502 );
    res = refalrts::splice_elem( res, n501 );
    res = refalrts::splice_elem( res, n500 );
    res = refalrts::splice_elem( res, n499 );
    res = refalrts::splice_elem( res, n498 );
    res = refalrts::splice_elem( res, n497 );
    res = refalrts::splice_elem( res, n496 );
    res = refalrts::splice_elem( res, n495 );
    res = refalrts::splice_elem( res, n494 );
    res = refalrts::splice_elem( res, n493 );
    res = refalrts::splice_elem( res, n492 );
    res = refalrts::splice_elem( res, n491 );
    res = refalrts::splice_elem( res, n490 );
    res = refalrts::splice_elem( res, n489 );
    res = refalrts::splice_elem( res, n488 );
    res = refalrts::splice_elem( res, n487 );
    res = refalrts::splice_elem( res, n486 );
    res = refalrts::splice_elem( res, n485 );
    res = refalrts::splice_elem( res, n484 );
    res = refalrts::splice_elem( res, n483 );
    res = refalrts::splice_elem( res, n482 );
    res = refalrts::splice_elem( res, n481 );
    res = refalrts::splice_elem( res, n480 );
    res = refalrts::splice_elem( res, n479 );
    res = refalrts::splice_elem( res, n478 );
    res = refalrts::splice_elem( res, n477 );
    res = refalrts::splice_elem( res, n476 );
    res = refalrts::splice_elem( res, n475 );
    res = refalrts::splice_elem( res, n474 );
    res = refalrts::splice_elem( res, n473 );
    res = refalrts::splice_elem( res, n472 );
    res = refalrts::splice_elem( res, n471 );
    res = refalrts::splice_elem( res, n470 );
    res = refalrts::splice_elem( res, n469 );
    res = refalrts::splice_elem( res, n468 );
    res = refalrts::splice_elem( res, n467 );
    res = refalrts::splice_elem( res, n466 );
    res = refalrts::splice_elem( res, n465 );
    res = refalrts::splice_elem( res, n464 );
    res = refalrts::splice_elem( res, n463 );
    res = refalrts::splice_elem( res, n462 );
    res = refalrts::splice_elem( res, n461 );
    res = refalrts::splice_elem( res, n460 );
    res = refalrts::splice_elem( res, n459 );
    res = refalrts::splice_elem( res, n458 );
    res = refalrts::splice_elem( res, n457 );
    res = refalrts::splice_elem( res, n456 );
    res = refalrts::splice_elem( res, n455 );
    res = refalrts::splice_elem( res, n454 );
    res = refalrts::splice_elem( res, n453 );
    refalrts::link_brackets( n394, n452 );
    res = refalrts::splice_elem( res, n452 );
    res = refalrts::splice_elem( res, n451 );
    res = refalrts::splice_elem( res, n450 );
    res = refalrts::splice_elem( res, n449 );
    res = refalrts::splice_elem( res, n448 );
    res = refalrts::splice_elem( res, n447 );
    res = refalrts::splice_elem( res, n446 );
    res = refalrts::splice_elem( res, n445 );
    res = refalrts::splice_elem( res, n444 );
    res = refalrts::splice_elem( res, n443 );
    res = refalrts::splice_elem( res, n442 );
    res = refalrts::splice_elem( res, n441 );
    res = refalrts::splice_elem( res, n440 );
    res = refalrts::splice_elem( res, n439 );
    res = refalrts::splice_elem( res, n438 );
    res = refalrts::splice_elem( res, n437 );
    res = refalrts::splice_elem( res, n436 );
    res = refalrts::splice_elem( res, n435 );
    res = refalrts::splice_elem( res, n434 );
    res = refalrts::splice_elem( res, n433 );
    res = refalrts::splice_elem( res, n432 );
    res = refalrts::splice_elem( res, n431 );
    res = refalrts::splice_elem( res, n430 );
    res = refalrts::splice_elem( res, n429 );
    res = refalrts::splice_elem( res, n428 );
    res = refalrts::splice_elem( res, n427 );
    res = refalrts::splice_elem( res, n426 );
    res = refalrts::splice_elem( res, n425 );
    res = refalrts::splice_elem( res, n424 );
    res = refalrts::splice_elem( res, n423 );
    res = refalrts::splice_elem( res, n422 );
    res = refalrts::splice_elem( res, n421 );
    res = refalrts::splice_elem( res, n420 );
    res = refalrts::splice_elem( res, n419 );
    res = refalrts::splice_elem( res, n418 );
    res = refalrts::splice_elem( res, n417 );
    res = refalrts::splice_elem( res, n416 );
    res = refalrts::splice_elem( res, n415 );
    res = refalrts::splice_elem( res, n414 );
    res = refalrts::splice_elem( res, n413 );
    res = refalrts::splice_elem( res, n412 );
    res = refalrts::splice_elem( res, n411 );
    res = refalrts::splice_elem( res, n410 );
    res = refalrts::splice_elem( res, n409 );
    res = refalrts::splice_elem( res, n408 );
    res = refalrts::splice_elem( res, n407 );
    res = refalrts::splice_elem( res, n406 );
    res = refalrts::splice_elem( res, n405 );
    res = refalrts::splice_elem( res, n404 );
    res = refalrts::splice_elem( res, n403 );
    res = refalrts::splice_elem( res, n402 );
    res = refalrts::splice_elem( res, n401 );
    res = refalrts::splice_elem( res, n400 );
    res = refalrts::splice_elem( res, n399 );
    res = refalrts::splice_elem( res, n398 );
    res = refalrts::splice_elem( res, n397 );
    res = refalrts::splice_elem( res, n396 );
    res = refalrts::splice_elem( res, n395 );
    res = refalrts::splice_elem( res, n394 );
    refalrts::link_brackets( n392, n393 );
    res = refalrts::splice_elem( res, n393 );
    res = refalrts::splice_elem( res, n392 );
    refalrts::link_brackets( n365, n391 );
    res = refalrts::splice_elem( res, n391 );
    res = refalrts::splice_elem( res, n390 );
    res = refalrts::splice_elem( res, n389 );
    res = refalrts::splice_elem( res, n388 );
    res = refalrts::splice_elem( res, n387 );
    res = refalrts::splice_elem( res, n386 );
    res = refalrts::splice_elem( res, n385 );
    res = refalrts::splice_elem( res, n384 );
    res = refalrts::splice_elem( res, n383 );
    res = refalrts::splice_elem( res, n382 );
    res = refalrts::splice_elem( res, n381 );
    res = refalrts::splice_elem( res, n380 );
    res = refalrts::splice_elem( res, n379 );
    res = refalrts::splice_elem( res, n378 );
    res = refalrts::splice_elem( res, n377 );
    res = refalrts::splice_elem( res, n376 );
    res = refalrts::splice_elem( res, n375 );
    res = refalrts::splice_elem( res, n374 );
    res = refalrts::splice_elem( res, n373 );
    res = refalrts::splice_elem( res, n372 );
    res = refalrts::splice_elem( res, n371 );
    res = refalrts::splice_elem( res, n370 );
    res = refalrts::splice_elem( res, n369 );
    res = refalrts::splice_elem( res, n368 );
    res = refalrts::splice_elem( res, n367 );
    res = refalrts::splice_elem( res, n366 );
    res = refalrts::splice_elem( res, n365 );
    refalrts::link_brackets( n338, n364 );
    res = refalrts::splice_elem( res, n364 );
    res = refalrts::splice_elem( res, n363 );
    res = refalrts::splice_elem( res, n362 );
    res = refalrts::splice_elem( res, n361 );
    res = refalrts::splice_elem( res, n360 );
    res = refalrts::splice_elem( res, n359 );
    res = refalrts::splice_elem( res, n358 );
    res = refalrts::splice_elem( res, n357 );
    res = refalrts::splice_elem( res, n356 );
    res = refalrts::splice_elem( res, n355 );
    res = refalrts::splice_elem( res, n354 );
    res = refalrts::splice_elem( res, n353 );
    res = refalrts::splice_elem( res, n352 );
    res = refalrts::splice_elem( res, n351 );
    res = refalrts::splice_elem( res, n350 );
    res = refalrts::splice_elem( res, n349 );
    res = refalrts::splice_elem( res, n348 );
    res = refalrts::splice_elem( res, n347 );
    res = refalrts::splice_elem( res, n346 );
    res = refalrts::splice_elem( res, n345 );
    res = refalrts::splice_elem( res, n344 );
    res = refalrts::splice_elem( res, n343 );
    res = refalrts::splice_elem( res, n342 );
    res = refalrts::splice_elem( res, n341 );
    res = refalrts::splice_elem( res, n340 );
    res = refalrts::splice_elem( res, n339 );
    res = refalrts::splice_elem( res, n338 );
    refalrts::link_brackets( n336, n337 );
    res = refalrts::splice_elem( res, n337 );
    res = refalrts::splice_elem( res, n336 );
    refalrts::link_brackets( n257, n335 );
    res = refalrts::splice_elem( res, n335 );
    res = refalrts::splice_elem( res, n334 );
    res = refalrts::splice_elem( res, n333 );
    res = refalrts::splice_elem( res, n332 );
    res = refalrts::splice_elem( res, n331 );
    res = refalrts::splice_elem( res, n330 );
    res = refalrts::splice_elem( res, n329 );
    res = refalrts::splice_elem( res, n328 );
    res = refalrts::splice_elem( res, n327 );
    res = refalrts::splice_elem( res, n326 );
    res = refalrts::splice_elem( res, n325 );
    res = refalrts::splice_elem( res, n324 );
    res = refalrts::splice_elem( res, n323 );
    res = refalrts::splice_elem( res, n322 );
    res = refalrts::splice_elem( res, n321 );
    res = refalrts::splice_elem( res, n320 );
    res = refalrts::splice_elem( res, n319 );
    res = refalrts::splice_elem( res, n318 );
    res = refalrts::splice_elem( res, n317 );
    res = refalrts::splice_elem( res, n316 );
    res = refalrts::splice_elem( res, n315 );
    res = refalrts::splice_elem( res, n314 );
    res = refalrts::splice_elem( res, n313 );
    res = refalrts::splice_elem( res, n312 );
    res = refalrts::splice_elem( res, n311 );
    res = refalrts::splice_elem( res, n310 );
    res = refalrts::splice_elem( res, n309 );
    res = refalrts::splice_elem( res, n308 );
    res = refalrts::splice_elem( res, n307 );
    res = refalrts::splice_elem( res, n306 );
    res = refalrts::splice_elem( res, n305 );
    res = refalrts::splice_elem( res, n304 );
    res = refalrts::splice_elem( res, n303 );
    res = refalrts::splice_elem( res, n302 );
    res = refalrts::splice_elem( res, n301 );
    res = refalrts::splice_elem( res, n300 );
    res = refalrts::splice_elem( res, n299 );
    res = refalrts::splice_elem( res, n298 );
    res = refalrts::splice_elem( res, n297 );
    res = refalrts::splice_elem( res, n296 );
    res = refalrts::splice_elem( res, n295 );
    res = refalrts::splice_elem( res, n294 );
    res = refalrts::splice_elem( res, n293 );
    res = refalrts::splice_elem( res, n292 );
    res = refalrts::splice_elem( res, n291 );
    res = refalrts::splice_elem( res, n290 );
    res = refalrts::splice_elem( res, n289 );
    res = refalrts::splice_elem( res, n288 );
    res = refalrts::splice_elem( res, n287 );
    res = refalrts::splice_elem( res, n286 );
    res = refalrts::splice_elem( res, n285 );
    res = refalrts::splice_elem( res, n284 );
    res = refalrts::splice_elem( res, n283 );
    res = refalrts::splice_elem( res, n282 );
    res = refalrts::splice_elem( res, n281 );
    res = refalrts::splice_elem( res, n280 );
    res = refalrts::splice_elem( res, n279 );
    res = refalrts::splice_elem( res, n278 );
    res = refalrts::splice_elem( res, n277 );
    res = refalrts::splice_elem( res, n276 );
    res = refalrts::splice_elem( res, n275 );
    res = refalrts::splice_elem( res, n274 );
    res = refalrts::splice_elem( res, n273 );
    res = refalrts::splice_elem( res, n272 );
    res = refalrts::splice_elem( res, n271 );
    res = refalrts::splice_elem( res, n270 );
    res = refalrts::splice_elem( res, n269 );
    res = refalrts::splice_elem( res, n268 );
    res = refalrts::splice_elem( res, n267 );
    res = refalrts::splice_elem( res, n266 );
    res = refalrts::splice_elem( res, n265 );
    res = refalrts::splice_elem( res, n264 );
    res = refalrts::splice_elem( res, n263 );
    res = refalrts::splice_elem( res, n262 );
    res = refalrts::splice_elem( res, n261 );
    res = refalrts::splice_elem( res, n260 );
    res = refalrts::splice_elem( res, n259 );
    res = refalrts::splice_elem( res, n258 );
    res = refalrts::splice_elem( res, n257 );
    refalrts::link_brackets( n255, n256 );
    res = refalrts::splice_elem( res, n256 );
    res = refalrts::splice_elem( res, n255 );
    refalrts::link_brackets( n212, n254 );
    res = refalrts::splice_elem( res, n254 );
    res = refalrts::splice_elem( res, n253 );
    res = refalrts::splice_elem( res, n252 );
    res = refalrts::splice_elem( res, n251 );
    res = refalrts::splice_elem( res, n250 );
    res = refalrts::splice_elem( res, n249 );
    res = refalrts::splice_elem( res, n248 );
    res = refalrts::splice_elem( res, n247 );
    res = refalrts::splice_elem( res, n246 );
    res = refalrts::splice_elem( res, n245 );
    res = refalrts::splice_elem( res, n244 );
    res = refalrts::splice_elem( res, n243 );
    res = refalrts::splice_elem( res, n242 );
    res = refalrts::splice_elem( res, n241 );
    res = refalrts::splice_elem( res, n240 );
    res = refalrts::splice_elem( res, n239 );
    res = refalrts::splice_elem( res, n238 );
    res = refalrts::splice_elem( res, n237 );
    res = refalrts::splice_elem( res, n236 );
    res = refalrts::splice_elem( res, n235 );
    res = refalrts::splice_elem( res, n234 );
    res = refalrts::splice_elem( res, n233 );
    res = refalrts::splice_elem( res, n232 );
    res = refalrts::splice_elem( res, n231 );
    res = refalrts::splice_elem( res, n230 );
    res = refalrts::splice_elem( res, n229 );
    res = refalrts::splice_elem( res, n228 );
    res = refalrts::splice_elem( res, n227 );
    res = refalrts::splice_elem( res, n226 );
    res = refalrts::splice_elem( res, n225 );
    res = refalrts::splice_elem( res, n224 );
    res = refalrts::splice_elem( res, n223 );
    res = refalrts::splice_elem( res, n222 );
    res = refalrts::splice_elem( res, n221 );
    res = refalrts::splice_elem( res, n220 );
    res = refalrts::splice_elem( res, n219 );
    res = refalrts::splice_elem( res, n218 );
    res = refalrts::splice_elem( res, n217 );
    res = refalrts::splice_elem( res, n216 );
    res = refalrts::splice_elem( res, n215 );
    res = refalrts::splice_elem( res, n214 );
    res = refalrts::splice_elem( res, n213 );
    res = refalrts::splice_elem( res, n212 );
    refalrts::link_brackets( n170, n211 );
    res = refalrts::splice_elem( res, n211 );
    res = refalrts::splice_elem( res, n210 );
    res = refalrts::splice_elem( res, n209 );
    res = refalrts::splice_elem( res, n208 );
    res = refalrts::splice_elem( res, n207 );
    res = refalrts::splice_elem( res, n206 );
    res = refalrts::splice_elem( res, n205 );
    res = refalrts::splice_elem( res, n204 );
    res = refalrts::splice_elem( res, n203 );
    res = refalrts::splice_elem( res, n202 );
    res = refalrts::splice_elem( res, n201 );
    res = refalrts::splice_elem( res, n200 );
    res = refalrts::splice_elem( res, n199 );
    res = refalrts::splice_elem( res, n198 );
    res = refalrts::splice_elem( res, n197 );
    res = refalrts::splice_elem( res, n196 );
    res = refalrts::splice_elem( res, n195 );
    res = refalrts::splice_elem( res, n194 );
    res = refalrts::splice_elem( res, n193 );
    res = refalrts::splice_elem( res, n192 );
    res = refalrts::splice_elem( res, n191 );
    res = refalrts::splice_elem( res, n190 );
    res = refalrts::splice_elem( res, n189 );
    res = refalrts::splice_elem( res, n188 );
    res = refalrts::splice_elem( res, n187 );
    res = refalrts::splice_elem( res, n186 );
    res = refalrts::splice_elem( res, n185 );
    res = refalrts::splice_elem( res, n184 );
    res = refalrts::splice_elem( res, n183 );
    res = refalrts::splice_elem( res, n182 );
    res = refalrts::splice_elem( res, n181 );
    res = refalrts::splice_elem( res, n180 );
    res = refalrts::splice_elem( res, n179 );
    res = refalrts::splice_elem( res, n178 );
    res = refalrts::splice_elem( res, n177 );
    res = refalrts::splice_elem( res, n176 );
    res = refalrts::splice_elem( res, n175 );
    res = refalrts::splice_elem( res, n174 );
    res = refalrts::splice_elem( res, n173 );
    res = refalrts::splice_elem( res, n172 );
    res = refalrts::splice_elem( res, n171 );
    res = refalrts::splice_elem( res, n170 );
    refalrts::link_brackets( n168, n169 );
    res = refalrts::splice_elem( res, n169 );
    res = refalrts::splice_elem( res, n168 );
    refalrts::link_brackets( n132, n167 );
    res = refalrts::splice_elem( res, n167 );
    res = refalrts::splice_elem( res, n166 );
    res = refalrts::splice_elem( res, n165 );
    res = refalrts::splice_elem( res, n164 );
    res = refalrts::splice_elem( res, n163 );
    res = refalrts::splice_elem( res, n162 );
    res = refalrts::splice_elem( res, n161 );
    res = refalrts::splice_elem( res, n160 );
    res = refalrts::splice_elem( res, n159 );
    res = refalrts::splice_elem( res, n158 );
    res = refalrts::splice_elem( res, n157 );
    res = refalrts::splice_elem( res, n156 );
    res = refalrts::splice_elem( res, n155 );
    res = refalrts::splice_elem( res, n154 );
    res = refalrts::splice_elem( res, n153 );
    res = refalrts::splice_elem( res, n152 );
    res = refalrts::splice_elem( res, n151 );
    res = refalrts::splice_elem( res, n150 );
    res = refalrts::splice_elem( res, n149 );
    res = refalrts::splice_elem( res, n148 );
    res = refalrts::splice_elem( res, n147 );
    res = refalrts::splice_elem( res, n146 );
    res = refalrts::splice_elem( res, n145 );
    res = refalrts::splice_elem( res, n144 );
    res = refalrts::splice_elem( res, n143 );
    res = refalrts::splice_elem( res, n142 );
    res = refalrts::splice_elem( res, n141 );
    res = refalrts::splice_elem( res, n140 );
    res = refalrts::splice_elem( res, n139 );
    res = refalrts::splice_elem( res, n138 );
    res = refalrts::splice_elem( res, n137 );
    res = refalrts::splice_elem( res, n136 );
    res = refalrts::splice_elem( res, n135 );
    res = refalrts::splice_elem( res, n134 );
    res = refalrts::splice_elem( res, n133 );
    res = refalrts::splice_elem( res, n132 );
    refalrts::link_brackets( n94, n131 );
    res = refalrts::splice_elem( res, n131 );
    res = refalrts::splice_elem( res, n130 );
    res = refalrts::splice_elem( res, n129 );
    res = refalrts::splice_elem( res, n128 );
    res = refalrts::splice_elem( res, n127 );
    res = refalrts::splice_elem( res, n126 );
    res = refalrts::splice_elem( res, n125 );
    res = refalrts::splice_elem( res, n124 );
    res = refalrts::splice_elem( res, n123 );
    res = refalrts::splice_elem( res, n122 );
    res = refalrts::splice_elem( res, n121 );
    res = refalrts::splice_elem( res, n120 );
    res = refalrts::splice_elem( res, n119 );
    res = refalrts::splice_elem( res, n118 );
    res = refalrts::splice_elem( res, n117 );
    res = refalrts::splice_elem( res, n116 );
    res = refalrts::splice_elem( res, n115 );
    res = refalrts::splice_elem( res, n114 );
    res = refalrts::splice_elem( res, n113 );
    res = refalrts::splice_elem( res, n112 );
    res = refalrts::splice_elem( res, n111 );
    res = refalrts::splice_elem( res, n110 );
    res = refalrts::splice_elem( res, n109 );
    res = refalrts::splice_elem( res, n108 );
    res = refalrts::splice_elem( res, n107 );
    res = refalrts::splice_elem( res, n106 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    refalrts::link_brackets( n92, n93 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    refalrts::link_brackets( n46, n91 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::link_brackets( n44, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    refalrts::link_brackets( n3, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sMemoryClass_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eName_b_3;
    refalrts::use( eName_b_3 );
    static refalrts::Iter eName_e_3;
    refalrts::use( eName_e_3 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '$'},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'B'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '*'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eName_b_3, eName_e_3, eName_b_2, eName_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '$' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'B' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '<' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, '>' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_open_bracket( n47 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_close_bracket( n77 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_open_bracket( n78 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_close_bracket( n93 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_open_bracket( n94 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_close_bracket( n98 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_open_bracket( n99 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_close_bracket( n102 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_open_bracket( n103 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_close_bracket( n104 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n103, n104 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    refalrts::link_brackets( n99, n102 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    refalrts::link_brackets( n94, n98 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    refalrts::link_brackets( n78, n93 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_evar( res, eName_b_3, eName_e_3 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    refalrts::link_brackets( n47, n77 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::link_brackets( n34, n46 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n11, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'D'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '#'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_close_bracket( n68 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_open_bracket( n69 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_close_bracket( n70 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_open_bracket( n71 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_close_bracket( n72 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n71, n72 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    refalrts::link_brackets( n69, n70 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    refalrts::link_brackets( n46, n68 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::link_brackets( n0, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult CmdChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdOpenedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdLinkBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdPushStack(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdInsertElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdInsertEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElOpenADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElCloseADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEmptyResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdReturnResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdIfDef(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdElse(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEndIf(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdInitRAA(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdFinRAA(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdDeclareEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdDeclareVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult AlgLeft(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult AlgRight(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdPrint(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrFunc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrOB(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCB(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrOADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrOC(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCC(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenSentence_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult BracketsVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult BracketsVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult GenSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eAlgorithm_b_1;
    refalrts::use( eAlgorithm_b_1 );
    static refalrts::Iter eAlgorithm_e_1;
    refalrts::use( eAlgorithm_e_1 );
    // e.Algorithm
    eAlgorithm_b_1 = bb_0;
    refalrts::use( eAlgorithm_b_1 );
    eAlgorithm_e_1 = be_0;
    refalrts::use( eAlgorithm_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenSentence_Aux, (void*) "GenSentence_Aux"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
      {refalrts::icFunc, (void*) & GenCommand, (void*) "GenCommand"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eAlgorithm_b_1, & eAlgorithm_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_number( n30, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_open_call( n66 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_name( n67, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_number( n68, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_close_call( n69 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_close_bracket( n81 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_open_bracket( n82 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_char( n105, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_char( n106, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_char( n107, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_open_call( n108 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_name( n109, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_number( n110, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_close_call( n111 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_char( n112, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_char( n113, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_open_call( n114 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_name( n115, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_number( n116, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_close_call( n117 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_char( n118, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_char( n119, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_char( n120, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_close_bracket( n121 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_open_bracket( n122 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_char( n123, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_char( n124, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_char( n125, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_char( n126, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_char( n127, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_char( n128, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_char( n129, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_char( n130, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_char( n131, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_char( n132, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_char( n133, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_char( n134, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_char( n135, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n136 = 0;
    if( ! refalrts::alloc_char( n136, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n137 = 0;
    if( ! refalrts::alloc_char( n137, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n138 = 0;
    if( ! refalrts::alloc_char( n138, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n139 = 0;
    if( ! refalrts::alloc_char( n139, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n140 = 0;
    if( ! refalrts::alloc_char( n140, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n141 = 0;
    if( ! refalrts::alloc_char( n141, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n142 = 0;
    if( ! refalrts::alloc_char( n142, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n143 = 0;
    if( ! refalrts::alloc_char( n143, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n144 = 0;
    if( ! refalrts::alloc_char( n144, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n145 = 0;
    if( ! refalrts::alloc_char( n145, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n146 = 0;
    if( ! refalrts::alloc_char( n146, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n147 = 0;
    if( ! refalrts::alloc_char( n147, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n148 = 0;
    if( ! refalrts::alloc_open_call( n148 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n149 = 0;
    if( ! refalrts::alloc_name( n149, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n150 = 0;
    if( ! refalrts::alloc_number( n150, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n151 = 0;
    if( ! refalrts::alloc_close_call( n151 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n152 = 0;
    if( ! refalrts::alloc_char( n152, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n153 = 0;
    if( ! refalrts::alloc_char( n153, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n154 = 0;
    if( ! refalrts::alloc_open_call( n154 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n155 = 0;
    if( ! refalrts::alloc_name( n155, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n156 = 0;
    if( ! refalrts::alloc_number( n156, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n157 = 0;
    if( ! refalrts::alloc_close_call( n157 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n158 = 0;
    if( ! refalrts::alloc_char( n158, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n159 = 0;
    if( ! refalrts::alloc_char( n159, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n160 = 0;
    if( ! refalrts::alloc_char( n160, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n161 = 0;
    if( ! refalrts::alloc_close_bracket( n161 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n162 = 0;
    if( ! refalrts::alloc_open_bracket( n162 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n163 = 0;
    if( ! refalrts::alloc_char( n163, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n164 = 0;
    if( ! refalrts::alloc_char( n164, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n165 = 0;
    if( ! refalrts::alloc_char( n165, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n166 = 0;
    if( ! refalrts::alloc_char( n166, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n167 = 0;
    if( ! refalrts::alloc_char( n167, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n168 = 0;
    if( ! refalrts::alloc_char( n168, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n169 = 0;
    if( ! refalrts::alloc_char( n169, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n170 = 0;
    if( ! refalrts::alloc_char( n170, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n171 = 0;
    if( ! refalrts::alloc_char( n171, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n172 = 0;
    if( ! refalrts::alloc_char( n172, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n173 = 0;
    if( ! refalrts::alloc_char( n173, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n174 = 0;
    if( ! refalrts::alloc_char( n174, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n175 = 0;
    if( ! refalrts::alloc_char( n175, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n176 = 0;
    if( ! refalrts::alloc_char( n176, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n177 = 0;
    if( ! refalrts::alloc_char( n177, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n178 = 0;
    if( ! refalrts::alloc_char( n178, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n179 = 0;
    if( ! refalrts::alloc_char( n179, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n180 = 0;
    if( ! refalrts::alloc_char( n180, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n181 = 0;
    if( ! refalrts::alloc_char( n181, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n182 = 0;
    if( ! refalrts::alloc_char( n182, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n183 = 0;
    if( ! refalrts::alloc_char( n183, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n184 = 0;
    if( ! refalrts::alloc_char( n184, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n185 = 0;
    if( ! refalrts::alloc_char( n185, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n186 = 0;
    if( ! refalrts::alloc_char( n186, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n187 = 0;
    if( ! refalrts::alloc_char( n187, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n188 = 0;
    if( ! refalrts::alloc_char( n188, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n189 = 0;
    if( ! refalrts::alloc_open_call( n189 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n190 = 0;
    if( ! refalrts::alloc_name( n190, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n191 = 0;
    if( ! refalrts::alloc_number( n191, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n192 = 0;
    if( ! refalrts::alloc_close_call( n192 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n193 = 0;
    if( ! refalrts::alloc_char( n193, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n194 = 0;
    if( ! refalrts::alloc_char( n194, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n195 = 0;
    if( ! refalrts::alloc_open_call( n195 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n196 = 0;
    if( ! refalrts::alloc_name( n196, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n197 = 0;
    if( ! refalrts::alloc_number( n197, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n198 = 0;
    if( ! refalrts::alloc_close_call( n198 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n199 = 0;
    if( ! refalrts::alloc_char( n199, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n200 = 0;
    if( ! refalrts::alloc_char( n200, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n201 = 0;
    if( ! refalrts::alloc_char( n201, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n202 = 0;
    if( ! refalrts::alloc_close_bracket( n202 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n203 = 0;
    if( ! refalrts::alloc_open_call( n203 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n204 = 0;
    if( ! refalrts::alloc_name( n204, & GenSentence_Aux, "GenSentence_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n205 = 0;
    if( ! refalrts::alloc_open_call( n205 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n206 = 0;
    if( ! refalrts::alloc_name( n206, & MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n207 = 0;
    if( ! refalrts::alloc_name( n207, & GenCommand, "GenCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n208 = 0;
    if( ! refalrts::alloc_open_bracket( n208 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n209 = 0;
    if( ! refalrts::alloc_char( n209, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n210 = 0;
    if( ! refalrts::alloc_char( n210, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n211 = 0;
    if( ! refalrts::alloc_char( n211, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n212 = 0;
    if( ! refalrts::alloc_char( n212, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n213 = 0;
    if( ! refalrts::alloc_close_bracket( n213 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n214 = 0;
    if( ! refalrts::alloc_close_call( n214 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n215 = 0;
    if( ! refalrts::alloc_close_call( n215 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n215 );
    refalrts::push_stack( n203 );
    res = refalrts::splice_elem( res, n215 );
    refalrts::push_stack( n214 );
    refalrts::push_stack( n205 );
    res = refalrts::splice_elem( res, n214 );
    res = refalrts::splice_evar( res, eAlgorithm_b_1, eAlgorithm_e_1 );
    refalrts::link_brackets( n208, n213 );
    res = refalrts::splice_elem( res, n213 );
    res = refalrts::splice_elem( res, n212 );
    res = refalrts::splice_elem( res, n211 );
    res = refalrts::splice_elem( res, n210 );
    res = refalrts::splice_elem( res, n209 );
    res = refalrts::splice_elem( res, n208 );
    res = refalrts::splice_elem( res, n207 );
    res = refalrts::splice_elem( res, n206 );
    res = refalrts::splice_elem( res, n205 );
    res = refalrts::splice_elem( res, n204 );
    res = refalrts::splice_elem( res, n203 );
    refalrts::link_brackets( n162, n202 );
    res = refalrts::splice_elem( res, n202 );
    res = refalrts::splice_elem( res, n201 );
    res = refalrts::splice_elem( res, n200 );
    res = refalrts::splice_elem( res, n199 );
    refalrts::push_stack( n198 );
    refalrts::push_stack( n195 );
    res = refalrts::splice_elem( res, n198 );
    res = refalrts::splice_elem( res, n197 );
    res = refalrts::splice_elem( res, n196 );
    res = refalrts::splice_elem( res, n195 );
    res = refalrts::splice_elem( res, n194 );
    res = refalrts::splice_elem( res, n193 );
    refalrts::push_stack( n192 );
    refalrts::push_stack( n189 );
    res = refalrts::splice_elem( res, n192 );
    res = refalrts::splice_elem( res, n191 );
    res = refalrts::splice_elem( res, n190 );
    res = refalrts::splice_elem( res, n189 );
    res = refalrts::splice_elem( res, n188 );
    res = refalrts::splice_elem( res, n187 );
    res = refalrts::splice_elem( res, n186 );
    res = refalrts::splice_elem( res, n185 );
    res = refalrts::splice_elem( res, n184 );
    res = refalrts::splice_elem( res, n183 );
    res = refalrts::splice_elem( res, n182 );
    res = refalrts::splice_elem( res, n181 );
    res = refalrts::splice_elem( res, n180 );
    res = refalrts::splice_elem( res, n179 );
    res = refalrts::splice_elem( res, n178 );
    res = refalrts::splice_elem( res, n177 );
    res = refalrts::splice_elem( res, n176 );
    res = refalrts::splice_elem( res, n175 );
    res = refalrts::splice_elem( res, n174 );
    res = refalrts::splice_elem( res, n173 );
    res = refalrts::splice_elem( res, n172 );
    res = refalrts::splice_elem( res, n171 );
    res = refalrts::splice_elem( res, n170 );
    res = refalrts::splice_elem( res, n169 );
    res = refalrts::splice_elem( res, n168 );
    res = refalrts::splice_elem( res, n167 );
    res = refalrts::splice_elem( res, n166 );
    res = refalrts::splice_elem( res, n165 );
    res = refalrts::splice_elem( res, n164 );
    res = refalrts::splice_elem( res, n163 );
    res = refalrts::splice_elem( res, n162 );
    refalrts::link_brackets( n122, n161 );
    res = refalrts::splice_elem( res, n161 );
    res = refalrts::splice_elem( res, n160 );
    res = refalrts::splice_elem( res, n159 );
    res = refalrts::splice_elem( res, n158 );
    refalrts::push_stack( n157 );
    refalrts::push_stack( n154 );
    res = refalrts::splice_elem( res, n157 );
    res = refalrts::splice_elem( res, n156 );
    res = refalrts::splice_elem( res, n155 );
    res = refalrts::splice_elem( res, n154 );
    res = refalrts::splice_elem( res, n153 );
    res = refalrts::splice_elem( res, n152 );
    refalrts::push_stack( n151 );
    refalrts::push_stack( n148 );
    res = refalrts::splice_elem( res, n151 );
    res = refalrts::splice_elem( res, n150 );
    res = refalrts::splice_elem( res, n149 );
    res = refalrts::splice_elem( res, n148 );
    res = refalrts::splice_elem( res, n147 );
    res = refalrts::splice_elem( res, n146 );
    res = refalrts::splice_elem( res, n145 );
    res = refalrts::splice_elem( res, n144 );
    res = refalrts::splice_elem( res, n143 );
    res = refalrts::splice_elem( res, n142 );
    res = refalrts::splice_elem( res, n141 );
    res = refalrts::splice_elem( res, n140 );
    res = refalrts::splice_elem( res, n139 );
    res = refalrts::splice_elem( res, n138 );
    res = refalrts::splice_elem( res, n137 );
    res = refalrts::splice_elem( res, n136 );
    res = refalrts::splice_elem( res, n135 );
    res = refalrts::splice_elem( res, n134 );
    res = refalrts::splice_elem( res, n133 );
    res = refalrts::splice_elem( res, n132 );
    res = refalrts::splice_elem( res, n131 );
    res = refalrts::splice_elem( res, n130 );
    res = refalrts::splice_elem( res, n129 );
    res = refalrts::splice_elem( res, n128 );
    res = refalrts::splice_elem( res, n127 );
    res = refalrts::splice_elem( res, n126 );
    res = refalrts::splice_elem( res, n125 );
    res = refalrts::splice_elem( res, n124 );
    res = refalrts::splice_elem( res, n123 );
    res = refalrts::splice_elem( res, n122 );
    refalrts::link_brackets( n82, n121 );
    res = refalrts::splice_elem( res, n121 );
    res = refalrts::splice_elem( res, n120 );
    res = refalrts::splice_elem( res, n119 );
    res = refalrts::splice_elem( res, n118 );
    refalrts::push_stack( n117 );
    refalrts::push_stack( n114 );
    res = refalrts::splice_elem( res, n117 );
    res = refalrts::splice_elem( res, n116 );
    res = refalrts::splice_elem( res, n115 );
    res = refalrts::splice_elem( res, n114 );
    res = refalrts::splice_elem( res, n113 );
    res = refalrts::splice_elem( res, n112 );
    refalrts::push_stack( n111 );
    refalrts::push_stack( n108 );
    res = refalrts::splice_elem( res, n111 );
    res = refalrts::splice_elem( res, n110 );
    res = refalrts::splice_elem( res, n109 );
    res = refalrts::splice_elem( res, n108 );
    res = refalrts::splice_elem( res, n107 );
    res = refalrts::splice_elem( res, n106 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    refalrts::link_brackets( n46, n81 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    refalrts::push_stack( n69 );
    refalrts::push_stack( n66 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::link_brackets( n8, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::push_stack( n31 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenCloseBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenSentence_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eGenerated_b_1;
    refalrts::use( eGenerated_b_1 );
    static refalrts::Iter eGenerated_e_1;
    refalrts::use( eGenerated_e_1 );
    // (~1 e.Indent )~1 e.Generated
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eGenerated_b_1 = bb_0;
    refalrts::use( eGenerated_b_1 );
    eGenerated_e_1 = be_0;
    refalrts::use( eGenerated_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eGenerated_b_1, & eGenerated_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenCloseBrackets, (void*) "GenCloseBrackets"},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenCloseBrackets, "GenCloseBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult BracketsVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    // s.BracketNumber
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult BracketsVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    // s.BracketNumber
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintEVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintEVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintEVar_OE(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintArrVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintArrEVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintArrEVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintElemVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult StringFromCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintStkBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStkBracket_1;
    refalrts::use( sStkBracket_1 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter sStkBracket_2;
    refalrts::use( sStkBracket_2 );
    static refalrts::Iter sStkBracket_3;
    refalrts::use( sStkBracket_3 );
    static refalrts::Iter sStkBracket_4;
    refalrts::use( sStkBracket_4 );
    // e.Indent s.StkBracket
    if( ! refalrts::svar_right( sStkBracket_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_0;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_0;
    refalrts::use( eIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStkBracket_2, sStkBracket_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStkBracket_3, sStkBracket_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStkBracket_4, sStkBracket_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_open_call( n47 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_name( n48, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_close_call( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_open_call( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_name( n58, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_close_call( n59 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_close_bracket( n61 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n31, n61 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    refalrts::push_stack( n59 );
    refalrts::push_stack( n57 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_stvar( res, sStkBracket_4 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    refalrts::push_stack( n49 );
    refalrts::push_stack( n47 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_stvar( res, sStkBracket_3 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n0, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, sStkBracket_2 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, sStkBracket_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintRecoverStackBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStkBracket_1;
    refalrts::use( sStkBracket_1 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter sStkBracket_2;
    refalrts::use( sStkBracket_2 );
    static refalrts::Iter sStkBracket_3;
    refalrts::use( sStkBracket_3 );
    static refalrts::Iter sStkBracket_4;
    refalrts::use( sStkBracket_4 );
    // e.Indent s.StkBracket
    if( ! refalrts::svar_right( sStkBracket_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_0;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_0;
    refalrts::use( eIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStkBracket_2, sStkBracket_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStkBracket_3, sStkBracket_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStkBracket_4, sStkBracket_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n16, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_stvar( res, sStkBracket_4 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n17 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, sStkBracket_3 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n0, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sStkBracket_2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sStkBracket_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult BracketExcept(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eBrackets_B_b_1;
    refalrts::use( eBrackets_B_b_1 );
    static refalrts::Iter eBrackets_B_e_1;
    refalrts::use( eBrackets_B_e_1 );
    static refalrts::Iter eBrackets_E_b_1;
    refalrts::use( eBrackets_E_b_1 );
    static refalrts::Iter eBrackets_E_e_1;
    refalrts::use( eBrackets_E_e_1 );
    static refalrts::Iter sExcept_1;
    refalrts::use( sExcept_1 );
    static refalrts::Iter sExcept_2;
    refalrts::use( sExcept_2 );
    // e.Brackets_B s.Except e.Brackets_E s.Except
    if( ! refalrts::svar_right( sExcept_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eBrackets_B_b_1 = bb_0_stk,
        eBrackets_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eBrackets_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eBrackets_B_oe_1, be_0 )
    ) {
      bb_0 = eBrackets_B_oe_1;
      eBrackets_B_b_1 = bb_0_stk;
      eBrackets_B_e_1 = eBrackets_B_oe_1;
      refalrts::move_right( eBrackets_B_b_1, eBrackets_B_e_1 );
      if( ! refalrts::repeated_stvar_left( sExcept_2, sExcept_1, bb_0, be_0 ) ) 
        continue;
      eBrackets_E_b_1 = bb_0;
      refalrts::use( eBrackets_E_b_1 );
      eBrackets_E_e_1 = be_0;
      refalrts::use( eBrackets_E_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eBrackets_B_b_1, & eBrackets_B_e_1},
        {refalrts::icSpliceEVar, & eBrackets_E_b_1, & eBrackets_E_e_1},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      res = refalrts::splice_evar( res, eBrackets_E_b_1, eBrackets_E_e_1 );
      res = refalrts::splice_evar( res, eBrackets_B_b_1, eBrackets_B_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    }
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

//$LABEL CCreateClosure
template <typename T>
struct CCreateClosureL_ {
  static const char *name() {
    return "CCreateClosure";
  }
};

static refalrts::FnResult PrintName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // # CCreateClosure
    if( ! refalrts::ident_left(  & CCreateClosureL_<int>::name, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eText_b_1;
    refalrts::use( eText_b_1 );
    static refalrts::Iter eText_e_1;
    refalrts::use( eText_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdComment e.Text )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdComment, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eText_b_1 = bb_2;
    refalrts::use( eText_b_1 );
    eText_e_1 = be_2;
    refalrts::use( eText_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icSpliceEVar, & eText_b_1, & eText_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eText_b_1, eText_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eText_b_1;
    refalrts::use( eText_b_1 );
    static refalrts::Iter eText_e_1;
    refalrts::use( eText_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdPrint e.Text )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdPrint, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eText_b_1 = bb_2;
    refalrts::use( eText_b_1 );
    eText_e_1 = be_2;
    refalrts::use( eText_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icSpliceEVar, & eText_b_1, & eText_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eText_b_1, eText_e_1 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eVarInfo_b_1;
    refalrts::use( eVarInfo_b_1 );
    static refalrts::Iter eVarInfo_e_1;
    refalrts::use( eVarInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    static refalrts::Iter eIndent_b_5;
    refalrts::use( eIndent_b_5 );
    static refalrts::Iter eIndent_e_5;
    refalrts::use( eIndent_e_5 );
    static refalrts::Iter eVarInfo_b_2;
    refalrts::use( eVarInfo_b_2 );
    static refalrts::Iter eVarInfo_e_2;
    refalrts::use( eVarInfo_e_2 );
    static refalrts::Iter eVarInfo_b_3;
    refalrts::use( eVarInfo_b_3 );
    static refalrts::Iter eVarInfo_e_3;
    refalrts::use( eVarInfo_e_3 );
    static refalrts::Iter eVarInfo_b_4;
    refalrts::use( eVarInfo_b_4 );
    static refalrts::Iter eVarInfo_e_4;
    refalrts::use( eVarInfo_e_4 );
    // (~1 e.Indent )~1 (~2 & CmdDeclareEVar e.VarInfo )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdDeclareEVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eVarInfo_b_1 = bb_2;
    refalrts::use( eVarInfo_b_1 );
    eVarInfo_e_1 = be_2;
    refalrts::use( eVarInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icSpliceEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icCopyEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icCopyEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icCopyEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_5, eIndent_e_5, eIndent_b_4, eIndent_e_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eVarInfo_b_2, eVarInfo_e_2, eVarInfo_b_1, eVarInfo_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eVarInfo_b_3, eVarInfo_e_3, eVarInfo_b_2, eVarInfo_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eVarInfo_b_4, eVarInfo_e_4, eVarInfo_b_3, eVarInfo_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_name( n47, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_close_call( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_close_bracket( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_open_bracket( n53 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_open_call( n76 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_name( n77, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_close_call( n78 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_close_bracket( n80 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_open_bracket( n81 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_open_call( n97 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_name( n98, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_close_call( n99 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_close_bracket( n103 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n81, n103 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    refalrts::push_stack( n99 );
    refalrts::push_stack( n97 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_evar( res, eVarInfo_b_4, eVarInfo_e_4 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_evar( res, eIndent_b_5, eIndent_e_5 );
    res = refalrts::splice_elem( res, n81 );
    refalrts::link_brackets( n53, n80 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    refalrts::push_stack( n78 );
    refalrts::push_stack( n76 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_evar( res, eVarInfo_b_3, eVarInfo_e_3 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n53 );
    refalrts::link_brackets( n30, n52 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    refalrts::push_stack( n48 );
    refalrts::push_stack( n46 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_evar( res, eVarInfo_b_2, eVarInfo_e_2 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n2, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eVarInfo_b_1;
    refalrts::use( eVarInfo_b_1 );
    static refalrts::Iter eVarInfo_e_1;
    refalrts::use( eVarInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eVarInfo_b_2;
    refalrts::use( eVarInfo_b_2 );
    static refalrts::Iter eVarInfo_e_2;
    refalrts::use( eVarInfo_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdDeclareVar e.VarInfo )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdDeclareVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eVarInfo_b_1 = bb_2;
    refalrts::use( eVarInfo_b_1 );
    eVarInfo_e_1 = be_2;
    refalrts::use( eVarInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icSpliceEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icCopyEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eVarInfo_b_2, eVarInfo_e_2, eVarInfo_b_1, eVarInfo_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_name( n47, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_close_call( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_close_bracket( n52 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n30, n52 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    refalrts::push_stack( n48 );
    refalrts::push_stack( n46 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_evar( res, eVarInfo_b_2, eVarInfo_e_2 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n2, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdChar s.Direction s.BracketNumber s.Char )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdChar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sChar_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchChar, (void*) "PrintMatchChar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & PrintMatchChar, "PrintMatchChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdNumber s.Direction s.BracketNumber s.Number )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdNumber, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchNumber, (void*) "PrintMatchNumber"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & PrintMatchNumber, "PrintMatchNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdName s.Direction s.BracketNumber e.Name )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdName, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    eName_b_1 = bb_2;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_2;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchName, (void*) "PrintMatchName"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & PrintMatchName, "PrintMatchName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdIdent s.Direction s.BracketNumber e.Name )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdIdent, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    eName_b_1 = bb_2;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_2;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchIdent, (void*) "PrintMatchIdent"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & PrintMatchIdent, "PrintMatchIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sInnerBrackets_1;
    refalrts::use( sInnerBrackets_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    static refalrts::Iter sInnerBrackets_2;
    refalrts::use( sInnerBrackets_2 );
    static refalrts::Iter sInnerBrackets_3;
    refalrts::use( sInnerBrackets_3 );
    // (~1 e.Indent )~1 (~2 & CmdBrackets s.Direction s.BracketNumber s.InnerBrackets )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdBrackets, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerBrackets_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sInnerBrackets_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sInnerBrackets_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchBrackets, (void*) "PrintMatchBrackets"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icCopySTVar, & sInnerBrackets_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_2, sInnerBrackets_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_3, sInnerBrackets_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_name( n44, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_open_call( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_name( n53, & PrintMatchBrackets, "PrintMatchBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_open_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_close_call( n56 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n56 );
    refalrts::push_stack( n52 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_stvar( res, sInnerBrackets_3 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n54, n55 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    refalrts::link_brackets( n27, n51 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::push_stack( n45 );
    refalrts::push_stack( n43 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, sInnerBrackets_2 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::link_brackets( n2, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sInnerBrackets_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sInnerBrackets_1;
    refalrts::use( sInnerBrackets_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    static refalrts::Iter sInnerBrackets_2;
    refalrts::use( sInnerBrackets_2 );
    static refalrts::Iter sInnerBrackets_3;
    refalrts::use( sInnerBrackets_3 );
    // (~1 e.Indent )~1 (~2 & CmdADT s.Direction s.BracketNumber s.InnerBrackets e.Name )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdADT, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerBrackets_1, bb_2, be_2 ) ) 
      break;
    eName_b_1 = bb_2;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_2;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sInnerBrackets_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sInnerBrackets_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchADT, (void*) "PrintMatchADT"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icCopySTVar, & sInnerBrackets_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_2, sInnerBrackets_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_3, sInnerBrackets_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_name( n44, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_open_call( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_name( n53, & PrintMatchADT, "PrintMatchADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_open_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_close_call( n56 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n56 );
    refalrts::push_stack( n52 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sInnerBrackets_3 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n54, n55 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    refalrts::link_brackets( n27, n51 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::push_stack( n45 );
    refalrts::push_stack( n43 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, sInnerBrackets_2 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::link_brackets( n2, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sInnerBrackets_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdEmpty s.BracketNumber )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdEmpty, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchEmpty, (void*) "PrintMatchEmpty"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & PrintMatchEmpty, "PrintMatchEmpty" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdVar s.Direction s.BracketNumber s.Mode e.Info )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
      break;
    eInfo_b_1 = bb_2;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_2;
    refalrts::use( eInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchSTVar, (void*) "PrintMatchSTVar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eInfo_b_1, & eInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & PrintMatchSTVar, "PrintMatchSTVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eVarInfo_b_1;
    refalrts::use( eVarInfo_b_1 );
    static refalrts::Iter eVarInfo_e_1;
    refalrts::use( eVarInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdRepeated s.Direction s.BracketNumber e.VarInfo )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdRepeated, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    eVarInfo_b_1 = bb_2;
    refalrts::use( eVarInfo_b_1 );
    eVarInfo_e_1 = be_2;
    refalrts::use( eVarInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchRepeated, (void*) "PrintMatchRepeated"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icSpliceEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & PrintMatchRepeated, "PrintMatchRepeated" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    static refalrts::Iter eIndent_b_5;
    refalrts::use( eIndent_b_5 );
    static refalrts::Iter eIndent_e_5;
    refalrts::use( eIndent_e_5 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter eIndex_b_4;
    refalrts::use( eIndex_b_4 );
    static refalrts::Iter eIndex_e_4;
    refalrts::use( eIndex_e_4 );
    static refalrts::Iter sBracketNumber_2;
    refalrts::use( sBracketNumber_2 );
    // (~1 e.Indent )~1 (~2 & CmdClosedE & AlgLeft s.BracketNumber 'e e.Index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdClosedE, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_5, eIndent_e_5, eIndent_b_4, eIndent_e_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_4, eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_2, sBracketNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_number( n5, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_number( n34, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_number( n44, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_open_call( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_name( n51, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_close_call( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_open_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_open_call( n71 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_name( n72, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_number( n73, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_close_call( n75 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_close_bracket( n79 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n55, n79 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    refalrts::push_stack( n75 );
    refalrts::push_stack( n71 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_evar( res, eIndex_b_4, eIndex_e_4 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_evar( res, eIndent_b_5, eIndent_e_5 );
    res = refalrts::splice_elem( res, n55 );
    refalrts::link_brackets( n41, n54 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    refalrts::push_stack( n52 );
    refalrts::push_stack( n50 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_stvar( res, sBracketNumber_2 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::push_stack( n46 );
    refalrts::push_stack( n42 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n41 );
    refalrts::link_brackets( n16, n40 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    refalrts::push_stack( n36 );
    refalrts::push_stack( n32 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n2, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eBracketsForSave_b_1;
    refalrts::use( eBracketsForSave_b_1 );
    static refalrts::Iter eBracketsForSave_e_1;
    refalrts::use( eBracketsForSave_e_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    static refalrts::Iter eIndent_b_5;
    refalrts::use( eIndent_b_5 );
    static refalrts::Iter eIndent_e_5;
    refalrts::use( eIndent_e_5 );
    static refalrts::Iter eIndent_b_6;
    refalrts::use( eIndent_b_6 );
    static refalrts::Iter eIndent_e_6;
    refalrts::use( eIndent_e_6 );
    static refalrts::Iter eIndent_b_7;
    refalrts::use( eIndent_b_7 );
    static refalrts::Iter eIndent_e_7;
    refalrts::use( eIndent_e_7 );
    static refalrts::Iter eIndent_b_8;
    refalrts::use( eIndent_b_8 );
    static refalrts::Iter eIndent_e_8;
    refalrts::use( eIndent_e_8 );
    static refalrts::Iter eIndent_b_9;
    refalrts::use( eIndent_b_9 );
    static refalrts::Iter eIndent_e_9;
    refalrts::use( eIndent_e_9 );
    static refalrts::Iter eIndent_b_10;
    refalrts::use( eIndent_b_10 );
    static refalrts::Iter eIndent_e_10;
    refalrts::use( eIndent_e_10 );
    static refalrts::Iter eIndent_b_11;
    refalrts::use( eIndent_b_11 );
    static refalrts::Iter eIndent_e_11;
    refalrts::use( eIndent_e_11 );
    static refalrts::Iter eIndent_b_12;
    refalrts::use( eIndent_b_12 );
    static refalrts::Iter eIndent_e_12;
    refalrts::use( eIndent_e_12 );
    static refalrts::Iter eIndent_b_13;
    refalrts::use( eIndent_b_13 );
    static refalrts::Iter eIndent_e_13;
    refalrts::use( eIndent_e_13 );
    static refalrts::Iter eIndent_b_14;
    refalrts::use( eIndent_b_14 );
    static refalrts::Iter eIndent_e_14;
    refalrts::use( eIndent_e_14 );
    static refalrts::Iter eIndent_b_15;
    refalrts::use( eIndent_b_15 );
    static refalrts::Iter eIndent_e_15;
    refalrts::use( eIndent_e_15 );
    static refalrts::Iter eIndent_b_16;
    refalrts::use( eIndent_b_16 );
    static refalrts::Iter eIndent_e_16;
    refalrts::use( eIndent_e_16 );
    static refalrts::Iter eBracketsForSave_b_2;
    refalrts::use( eBracketsForSave_b_2 );
    static refalrts::Iter eBracketsForSave_e_2;
    refalrts::use( eBracketsForSave_e_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter eIndex_b_4;
    refalrts::use( eIndex_b_4 );
    static refalrts::Iter eIndex_e_4;
    refalrts::use( eIndex_e_4 );
    static refalrts::Iter eIndex_b_5;
    refalrts::use( eIndex_b_5 );
    static refalrts::Iter eIndex_e_5;
    refalrts::use( eIndex_e_5 );
    static refalrts::Iter eIndex_b_6;
    refalrts::use( eIndex_b_6 );
    static refalrts::Iter eIndex_e_6;
    refalrts::use( eIndex_e_6 );
    static refalrts::Iter eIndex_b_7;
    refalrts::use( eIndex_b_7 );
    static refalrts::Iter eIndex_e_7;
    refalrts::use( eIndex_e_7 );
    static refalrts::Iter eIndex_b_8;
    refalrts::use( eIndex_b_8 );
    static refalrts::Iter eIndex_e_8;
    refalrts::use( eIndex_e_8 );
    static refalrts::Iter eIndex_b_9;
    refalrts::use( eIndex_b_9 );
    static refalrts::Iter eIndex_e_9;
    refalrts::use( eIndex_e_9 );
    static refalrts::Iter eIndex_b_10;
    refalrts::use( eIndex_b_10 );
    static refalrts::Iter eIndex_e_10;
    refalrts::use( eIndex_e_10 );
    static refalrts::Iter sBracketNumber_2;
    refalrts::use( sBracketNumber_2 );
    static refalrts::Iter sBracketNumber_3;
    refalrts::use( sBracketNumber_3 );
    static refalrts::Iter sBracketNumber_4;
    refalrts::use( sBracketNumber_4 );
    static refalrts::Iter sBracketNumber_5;
    refalrts::use( sBracketNumber_5 );
    static refalrts::Iter sBracketNumber_6;
    refalrts::use( sBracketNumber_6 );
    static refalrts::Iter sBracketNumber_7;
    refalrts::use( sBracketNumber_7 );
    static refalrts::Iter sBracketNumber_8;
    refalrts::use( sBracketNumber_8 );
    static refalrts::Iter sBracketNumber_9;
    refalrts::use( sBracketNumber_9 );
    static refalrts::Iter sBracketNumber_10;
    refalrts::use( sBracketNumber_10 );
    // (~1 e.Indent )~1 (~2 & CmdOpenedE & AlgLeft s.BracketNumber 'e e.Index (~3 e.BracketsForSave )~3 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdOpenedE, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eBracketsForSave_b_1 = bb_3;
    refalrts::use( eBracketsForSave_b_1 );
    eBracketsForSave_e_1 = be_3;
    refalrts::use( eBracketsForSave_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & PrintStkBracket, (void*) "PrintStkBracket"},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eBracketsForSave_b_1, & eBracketsForSave_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_OE, (void*) "PrintEVar_OE"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'q'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_OE, (void*) "PrintEVar_OE"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & PrintRecoverStackBracket, (void*) "PrintRecoverStackBracket"},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopyEVar, & eBracketsForSave_b_1, & eBracketsForSave_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_OE, (void*) "PrintEVar_OE"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_OE, (void*) "PrintEVar_OE"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_OE, (void*) "PrintEVar_OE"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_5, eIndent_e_5, eIndent_b_4, eIndent_e_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_6, eIndent_e_6, eIndent_b_5, eIndent_e_5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_7, eIndent_e_7, eIndent_b_6, eIndent_e_6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_8, eIndent_e_8, eIndent_b_7, eIndent_e_7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_9, eIndent_e_9, eIndent_b_8, eIndent_e_8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_10, eIndent_e_10, eIndent_b_9, eIndent_e_9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_11, eIndent_e_11, eIndent_b_10, eIndent_e_10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_12, eIndent_e_12, eIndent_b_11, eIndent_e_11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_13, eIndent_e_13, eIndent_b_12, eIndent_e_12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_14, eIndent_e_14, eIndent_b_13, eIndent_e_13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_15, eIndent_e_15, eIndent_b_14, eIndent_e_14 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_16, eIndent_e_16, eIndent_b_15, eIndent_e_15 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eBracketsForSave_b_2, eBracketsForSave_e_2, eBracketsForSave_b_1, eBracketsForSave_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_4, eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_5, eIndex_e_5, eIndex_b_4, eIndex_e_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_6, eIndex_e_6, eIndex_b_5, eIndex_e_5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_7, eIndex_e_7, eIndex_b_6, eIndex_e_6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_8, eIndex_e_8, eIndex_b_7, eIndex_e_7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_9, eIndex_e_9, eIndex_b_8, eIndex_e_8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_10, eIndex_e_10, eIndex_b_9, eIndex_e_9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_2, sBracketNumber_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_3, sBracketNumber_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_4, sBracketNumber_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_5, sBracketNumber_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_6, sBracketNumber_5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_7, sBracketNumber_6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_8, sBracketNumber_7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_9, sBracketNumber_8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_10, sBracketNumber_9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & PrintStkBracket, "PrintStkBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_open_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_name( n41, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_number( n42, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_open_call( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_name( n49, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_call( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_close_bracket( n56 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_open_bracket( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_open_call( n62 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_name( n63, & PrintEVar_OE, "PrintEVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_number( n64, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_close_call( n66 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_open_call( n70 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_name( n71, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_close_call( n72 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_close_bracket( n78 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_open_bracket( n79 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_open_call( n84 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_name( n85, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_close_call( n86 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_open_call( n90 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_name( n91, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_close_call( n92 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_close_bracket( n98 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_open_bracket( n99 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_open_call( n104 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_name( n105, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_close_call( n106 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_char( n107, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_char( n108, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_char( n109, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_open_call( n110 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_name( n111, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_close_call( n112 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_char( n113, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_char( n114, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_char( n115, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_char( n116, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_char( n117, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_close_bracket( n118 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_open_bracket( n119 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_char( n120, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_char( n121, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_char( n122, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_char( n123, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_char( n124, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_char( n125, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_char( n126, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_char( n127, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_char( n128, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_char( n129, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_char( n130, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_char( n131, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_char( n132, 'q' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_char( n133, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_char( n134, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_open_call( n135 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n136 = 0;
    if( ! refalrts::alloc_name( n136, & PrintEVar_OE, "PrintEVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n137 = 0;
    if( ! refalrts::alloc_number( n137, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n138 = 0;
    if( ! refalrts::alloc_char( n138, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n139 = 0;
    if( ! refalrts::alloc_close_call( n139 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n140 = 0;
    if( ! refalrts::alloc_char( n140, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n141 = 0;
    if( ! refalrts::alloc_char( n141, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n142 = 0;
    if( ! refalrts::alloc_open_call( n142 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n143 = 0;
    if( ! refalrts::alloc_name( n143, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n144 = 0;
    if( ! refalrts::alloc_close_call( n144 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n145 = 0;
    if( ! refalrts::alloc_char( n145, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n146 = 0;
    if( ! refalrts::alloc_char( n146, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n147 = 0;
    if( ! refalrts::alloc_char( n147, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n148 = 0;
    if( ! refalrts::alloc_close_bracket( n148 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n149 = 0;
    if( ! refalrts::alloc_open_call( n149 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n150 = 0;
    if( ! refalrts::alloc_name( n150, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n151 = 0;
    if( ! refalrts::alloc_open_bracket( n151 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n152 = 0;
    if( ! refalrts::alloc_name( n152, & PrintRecoverStackBracket, "PrintRecoverStackBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n153 = 0;
    if( ! refalrts::alloc_char( n153, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n154 = 0;
    if( ! refalrts::alloc_char( n154, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n155 = 0;
    if( ! refalrts::alloc_close_bracket( n155 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n156 = 0;
    if( ! refalrts::alloc_close_call( n156 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n157 = 0;
    if( ! refalrts::alloc_open_bracket( n157 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n158 = 0;
    if( ! refalrts::alloc_char( n158, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n159 = 0;
    if( ! refalrts::alloc_char( n159, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n160 = 0;
    if( ! refalrts::alloc_char( n160, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n161 = 0;
    if( ! refalrts::alloc_char( n161, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n162 = 0;
    if( ! refalrts::alloc_char( n162, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n163 = 0;
    if( ! refalrts::alloc_char( n163, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n164 = 0;
    if( ! refalrts::alloc_char( n164, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n165 = 0;
    if( ! refalrts::alloc_char( n165, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n166 = 0;
    if( ! refalrts::alloc_char( n166, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n167 = 0;
    if( ! refalrts::alloc_char( n167, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n168 = 0;
    if( ! refalrts::alloc_char( n168, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n169 = 0;
    if( ! refalrts::alloc_char( n169, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n170 = 0;
    if( ! refalrts::alloc_char( n170, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n171 = 0;
    if( ! refalrts::alloc_char( n171, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n172 = 0;
    if( ! refalrts::alloc_char( n172, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n173 = 0;
    if( ! refalrts::alloc_char( n173, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n174 = 0;
    if( ! refalrts::alloc_char( n174, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n175 = 0;
    if( ! refalrts::alloc_char( n175, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n176 = 0;
    if( ! refalrts::alloc_char( n176, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n177 = 0;
    if( ! refalrts::alloc_char( n177, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n178 = 0;
    if( ! refalrts::alloc_char( n178, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n179 = 0;
    if( ! refalrts::alloc_char( n179, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n180 = 0;
    if( ! refalrts::alloc_char( n180, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n181 = 0;
    if( ! refalrts::alloc_open_call( n181 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n182 = 0;
    if( ! refalrts::alloc_name( n182, & PrintEVar_OE, "PrintEVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n183 = 0;
    if( ! refalrts::alloc_number( n183, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n184 = 0;
    if( ! refalrts::alloc_char( n184, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n185 = 0;
    if( ! refalrts::alloc_close_call( n185 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n186 = 0;
    if( ! refalrts::alloc_char( n186, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n187 = 0;
    if( ! refalrts::alloc_char( n187, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n188 = 0;
    if( ! refalrts::alloc_open_call( n188 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n189 = 0;
    if( ! refalrts::alloc_name( n189, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n190 = 0;
    if( ! refalrts::alloc_close_call( n190 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n191 = 0;
    if( ! refalrts::alloc_char( n191, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n192 = 0;
    if( ! refalrts::alloc_char( n192, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n193 = 0;
    if( ! refalrts::alloc_close_bracket( n193 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n194 = 0;
    if( ! refalrts::alloc_open_bracket( n194 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n195 = 0;
    if( ! refalrts::alloc_char( n195, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n196 = 0;
    if( ! refalrts::alloc_char( n196, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n197 = 0;
    if( ! refalrts::alloc_char( n197, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n198 = 0;
    if( ! refalrts::alloc_close_bracket( n198 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n199 = 0;
    if( ! refalrts::alloc_open_bracket( n199 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n200 = 0;
    if( ! refalrts::alloc_char( n200, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n201 = 0;
    if( ! refalrts::alloc_char( n201, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n202 = 0;
    if( ! refalrts::alloc_open_call( n202 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n203 = 0;
    if( ! refalrts::alloc_name( n203, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n204 = 0;
    if( ! refalrts::alloc_close_call( n204 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n205 = 0;
    if( ! refalrts::alloc_char( n205, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n206 = 0;
    if( ! refalrts::alloc_char( n206, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n207 = 0;
    if( ! refalrts::alloc_char( n207, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n208 = 0;
    if( ! refalrts::alloc_open_call( n208 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n209 = 0;
    if( ! refalrts::alloc_name( n209, & PrintEVar_OE, "PrintEVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n210 = 0;
    if( ! refalrts::alloc_number( n210, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n211 = 0;
    if( ! refalrts::alloc_char( n211, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n212 = 0;
    if( ! refalrts::alloc_close_call( n212 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n213 = 0;
    if( ! refalrts::alloc_char( n213, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n214 = 0;
    if( ! refalrts::alloc_close_bracket( n214 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n215 = 0;
    if( ! refalrts::alloc_open_bracket( n215 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n216 = 0;
    if( ! refalrts::alloc_char( n216, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n217 = 0;
    if( ! refalrts::alloc_char( n217, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n218 = 0;
    if( ! refalrts::alloc_open_call( n218 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n219 = 0;
    if( ! refalrts::alloc_name( n219, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n220 = 0;
    if( ! refalrts::alloc_number( n220, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n221 = 0;
    if( ! refalrts::alloc_char( n221, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n222 = 0;
    if( ! refalrts::alloc_close_call( n222 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n223 = 0;
    if( ! refalrts::alloc_char( n223, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n224 = 0;
    if( ! refalrts::alloc_char( n224, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n225 = 0;
    if( ! refalrts::alloc_char( n225, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n226 = 0;
    if( ! refalrts::alloc_open_call( n226 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n227 = 0;
    if( ! refalrts::alloc_name( n227, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n228 = 0;
    if( ! refalrts::alloc_close_call( n228 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n229 = 0;
    if( ! refalrts::alloc_char( n229, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n230 = 0;
    if( ! refalrts::alloc_char( n230, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n231 = 0;
    if( ! refalrts::alloc_char( n231, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n232 = 0;
    if( ! refalrts::alloc_char( n232, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n233 = 0;
    if( ! refalrts::alloc_char( n233, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n234 = 0;
    if( ! refalrts::alloc_close_bracket( n234 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n235 = 0;
    if( ! refalrts::alloc_open_bracket( n235 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n236 = 0;
    if( ! refalrts::alloc_char( n236, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n237 = 0;
    if( ! refalrts::alloc_char( n237, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n238 = 0;
    if( ! refalrts::alloc_open_call( n238 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n239 = 0;
    if( ! refalrts::alloc_name( n239, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n240 = 0;
    if( ! refalrts::alloc_number( n240, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n241 = 0;
    if( ! refalrts::alloc_char( n241, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n242 = 0;
    if( ! refalrts::alloc_close_call( n242 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n243 = 0;
    if( ! refalrts::alloc_char( n243, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n244 = 0;
    if( ! refalrts::alloc_char( n244, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n245 = 0;
    if( ! refalrts::alloc_char( n245, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n246 = 0;
    if( ! refalrts::alloc_open_call( n246 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n247 = 0;
    if( ! refalrts::alloc_name( n247, & PrintEVar_OE, "PrintEVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n248 = 0;
    if( ! refalrts::alloc_number( n248, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n249 = 0;
    if( ! refalrts::alloc_char( n249, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n250 = 0;
    if( ! refalrts::alloc_close_call( n250 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n251 = 0;
    if( ! refalrts::alloc_char( n251, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n252 = 0;
    if( ! refalrts::alloc_close_bracket( n252 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n253 = 0;
    if( ! refalrts::alloc_open_bracket( n253 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n254 = 0;
    if( ! refalrts::alloc_char( n254, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n255 = 0;
    if( ! refalrts::alloc_char( n255, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n256 = 0;
    if( ! refalrts::alloc_char( n256, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n257 = 0;
    if( ! refalrts::alloc_char( n257, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n258 = 0;
    if( ! refalrts::alloc_char( n258, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n259 = 0;
    if( ! refalrts::alloc_char( n259, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n260 = 0;
    if( ! refalrts::alloc_char( n260, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n261 = 0;
    if( ! refalrts::alloc_char( n261, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n262 = 0;
    if( ! refalrts::alloc_char( n262, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n263 = 0;
    if( ! refalrts::alloc_char( n263, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n264 = 0;
    if( ! refalrts::alloc_char( n264, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n265 = 0;
    if( ! refalrts::alloc_char( n265, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n266 = 0;
    if( ! refalrts::alloc_char( n266, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n267 = 0;
    if( ! refalrts::alloc_char( n267, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n268 = 0;
    if( ! refalrts::alloc_char( n268, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n269 = 0;
    if( ! refalrts::alloc_char( n269, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n270 = 0;
    if( ! refalrts::alloc_char( n270, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n271 = 0;
    if( ! refalrts::alloc_char( n271, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n272 = 0;
    if( ! refalrts::alloc_char( n272, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n273 = 0;
    if( ! refalrts::alloc_char( n273, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n274 = 0;
    if( ! refalrts::alloc_char( n274, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n275 = 0;
    if( ! refalrts::alloc_char( n275, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n276 = 0;
    if( ! refalrts::alloc_char( n276, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n277 = 0;
    if( ! refalrts::alloc_char( n277, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n278 = 0;
    if( ! refalrts::alloc_open_call( n278 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n279 = 0;
    if( ! refalrts::alloc_name( n279, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n280 = 0;
    if( ! refalrts::alloc_number( n280, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n281 = 0;
    if( ! refalrts::alloc_char( n281, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n282 = 0;
    if( ! refalrts::alloc_close_call( n282 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n283 = 0;
    if( ! refalrts::alloc_char( n283, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n284 = 0;
    if( ! refalrts::alloc_char( n284, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n285 = 0;
    if( ! refalrts::alloc_open_call( n285 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n286 = 0;
    if( ! refalrts::alloc_name( n286, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n287 = 0;
    if( ! refalrts::alloc_number( n287, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n288 = 0;
    if( ! refalrts::alloc_char( n288, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n289 = 0;
    if( ! refalrts::alloc_close_call( n289 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n290 = 0;
    if( ! refalrts::alloc_char( n290, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n291 = 0;
    if( ! refalrts::alloc_char( n291, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n292 = 0;
    if( ! refalrts::alloc_char( n292, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n293 = 0;
    if( ! refalrts::alloc_close_bracket( n293 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n253, n293 );
    res = refalrts::splice_elem( res, n293 );
    res = refalrts::splice_elem( res, n292 );
    res = refalrts::splice_elem( res, n291 );
    res = refalrts::splice_elem( res, n290 );
    refalrts::push_stack( n289 );
    refalrts::push_stack( n285 );
    res = refalrts::splice_elem( res, n289 );
    res = refalrts::splice_evar( res, eIndex_b_10, eIndex_e_10 );
    res = refalrts::splice_elem( res, n288 );
    res = refalrts::splice_elem( res, n287 );
    res = refalrts::splice_elem( res, n286 );
    res = refalrts::splice_elem( res, n285 );
    res = refalrts::splice_elem( res, n284 );
    res = refalrts::splice_elem( res, n283 );
    refalrts::push_stack( n282 );
    refalrts::push_stack( n278 );
    res = refalrts::splice_elem( res, n282 );
    res = refalrts::splice_evar( res, eIndex_b_9, eIndex_e_9 );
    res = refalrts::splice_elem( res, n281 );
    res = refalrts::splice_elem( res, n280 );
    res = refalrts::splice_elem( res, n279 );
    res = refalrts::splice_elem( res, n278 );
    res = refalrts::splice_elem( res, n277 );
    res = refalrts::splice_elem( res, n276 );
    res = refalrts::splice_elem( res, n275 );
    res = refalrts::splice_elem( res, n274 );
    res = refalrts::splice_elem( res, n273 );
    res = refalrts::splice_elem( res, n272 );
    res = refalrts::splice_elem( res, n271 );
    res = refalrts::splice_elem( res, n270 );
    res = refalrts::splice_elem( res, n269 );
    res = refalrts::splice_elem( res, n268 );
    res = refalrts::splice_elem( res, n267 );
    res = refalrts::splice_elem( res, n266 );
    res = refalrts::splice_elem( res, n265 );
    res = refalrts::splice_elem( res, n264 );
    res = refalrts::splice_elem( res, n263 );
    res = refalrts::splice_elem( res, n262 );
    res = refalrts::splice_elem( res, n261 );
    res = refalrts::splice_elem( res, n260 );
    res = refalrts::splice_elem( res, n259 );
    res = refalrts::splice_elem( res, n258 );
    res = refalrts::splice_elem( res, n257 );
    res = refalrts::splice_elem( res, n256 );
    res = refalrts::splice_elem( res, n255 );
    res = refalrts::splice_elem( res, n254 );
    res = refalrts::splice_evar( res, eIndent_b_16, eIndent_e_16 );
    res = refalrts::splice_elem( res, n253 );
    refalrts::link_brackets( n235, n252 );
    res = refalrts::splice_elem( res, n252 );
    res = refalrts::splice_elem( res, n251 );
    refalrts::push_stack( n250 );
    refalrts::push_stack( n246 );
    res = refalrts::splice_elem( res, n250 );
    res = refalrts::splice_evar( res, eIndex_b_8, eIndex_e_8 );
    res = refalrts::splice_elem( res, n249 );
    res = refalrts::splice_elem( res, n248 );
    res = refalrts::splice_elem( res, n247 );
    res = refalrts::splice_elem( res, n246 );
    res = refalrts::splice_elem( res, n245 );
    res = refalrts::splice_elem( res, n244 );
    res = refalrts::splice_elem( res, n243 );
    refalrts::push_stack( n242 );
    refalrts::push_stack( n238 );
    res = refalrts::splice_elem( res, n242 );
    res = refalrts::splice_evar( res, eIndex_b_7, eIndex_e_7 );
    res = refalrts::splice_elem( res, n241 );
    res = refalrts::splice_elem( res, n240 );
    res = refalrts::splice_elem( res, n239 );
    res = refalrts::splice_elem( res, n238 );
    res = refalrts::splice_elem( res, n237 );
    res = refalrts::splice_elem( res, n236 );
    res = refalrts::splice_evar( res, eIndent_b_15, eIndent_e_15 );
    res = refalrts::splice_elem( res, n235 );
    refalrts::link_brackets( n215, n234 );
    res = refalrts::splice_elem( res, n234 );
    res = refalrts::splice_elem( res, n233 );
    res = refalrts::splice_elem( res, n232 );
    res = refalrts::splice_elem( res, n231 );
    res = refalrts::splice_elem( res, n230 );
    res = refalrts::splice_elem( res, n229 );
    refalrts::push_stack( n228 );
    refalrts::push_stack( n226 );
    res = refalrts::splice_elem( res, n228 );
    res = refalrts::splice_stvar( res, sBracketNumber_10 );
    res = refalrts::splice_elem( res, n227 );
    res = refalrts::splice_elem( res, n226 );
    res = refalrts::splice_elem( res, n225 );
    res = refalrts::splice_elem( res, n224 );
    res = refalrts::splice_elem( res, n223 );
    refalrts::push_stack( n222 );
    refalrts::push_stack( n218 );
    res = refalrts::splice_elem( res, n222 );
    res = refalrts::splice_evar( res, eIndex_b_6, eIndex_e_6 );
    res = refalrts::splice_elem( res, n221 );
    res = refalrts::splice_elem( res, n220 );
    res = refalrts::splice_elem( res, n219 );
    res = refalrts::splice_elem( res, n218 );
    res = refalrts::splice_elem( res, n217 );
    res = refalrts::splice_elem( res, n216 );
    res = refalrts::splice_evar( res, eIndent_b_14, eIndent_e_14 );
    res = refalrts::splice_elem( res, n215 );
    refalrts::link_brackets( n199, n214 );
    res = refalrts::splice_elem( res, n214 );
    res = refalrts::splice_elem( res, n213 );
    refalrts::push_stack( n212 );
    refalrts::push_stack( n208 );
    res = refalrts::splice_elem( res, n212 );
    res = refalrts::splice_evar( res, eIndex_b_5, eIndex_e_5 );
    res = refalrts::splice_elem( res, n211 );
    res = refalrts::splice_elem( res, n210 );
    res = refalrts::splice_elem( res, n209 );
    res = refalrts::splice_elem( res, n208 );
    res = refalrts::splice_elem( res, n207 );
    res = refalrts::splice_elem( res, n206 );
    res = refalrts::splice_elem( res, n205 );
    refalrts::push_stack( n204 );
    refalrts::push_stack( n202 );
    res = refalrts::splice_elem( res, n204 );
    res = refalrts::splice_stvar( res, sBracketNumber_9 );
    res = refalrts::splice_elem( res, n203 );
    res = refalrts::splice_elem( res, n202 );
    res = refalrts::splice_elem( res, n201 );
    res = refalrts::splice_elem( res, n200 );
    res = refalrts::splice_evar( res, eIndent_b_13, eIndent_e_13 );
    res = refalrts::splice_elem( res, n199 );
    refalrts::link_brackets( n194, n198 );
    res = refalrts::splice_elem( res, n198 );
    res = refalrts::splice_elem( res, n197 );
    res = refalrts::splice_elem( res, n196 );
    res = refalrts::splice_elem( res, n195 );
    res = refalrts::splice_evar( res, eIndent_b_12, eIndent_e_12 );
    res = refalrts::splice_elem( res, n194 );
    refalrts::link_brackets( n157, n193 );
    res = refalrts::splice_elem( res, n193 );
    res = refalrts::splice_elem( res, n192 );
    res = refalrts::splice_elem( res, n191 );
    refalrts::push_stack( n190 );
    refalrts::push_stack( n188 );
    res = refalrts::splice_elem( res, n190 );
    res = refalrts::splice_stvar( res, sBracketNumber_8 );
    res = refalrts::splice_elem( res, n189 );
    res = refalrts::splice_elem( res, n188 );
    res = refalrts::splice_elem( res, n187 );
    res = refalrts::splice_elem( res, n186 );
    refalrts::push_stack( n185 );
    refalrts::push_stack( n181 );
    res = refalrts::splice_elem( res, n185 );
    res = refalrts::splice_evar( res, eIndex_b_4, eIndex_e_4 );
    res = refalrts::splice_elem( res, n184 );
    res = refalrts::splice_elem( res, n183 );
    res = refalrts::splice_elem( res, n182 );
    res = refalrts::splice_elem( res, n181 );
    res = refalrts::splice_elem( res, n180 );
    res = refalrts::splice_elem( res, n179 );
    res = refalrts::splice_elem( res, n178 );
    res = refalrts::splice_elem( res, n177 );
    res = refalrts::splice_elem( res, n176 );
    res = refalrts::splice_elem( res, n175 );
    res = refalrts::splice_elem( res, n174 );
    res = refalrts::splice_elem( res, n173 );
    res = refalrts::splice_elem( res, n172 );
    res = refalrts::splice_elem( res, n171 );
    res = refalrts::splice_elem( res, n170 );
    res = refalrts::splice_elem( res, n169 );
    res = refalrts::splice_elem( res, n168 );
    res = refalrts::splice_elem( res, n167 );
    res = refalrts::splice_elem( res, n166 );
    res = refalrts::splice_elem( res, n165 );
    res = refalrts::splice_elem( res, n164 );
    res = refalrts::splice_elem( res, n163 );
    res = refalrts::splice_elem( res, n162 );
    res = refalrts::splice_elem( res, n161 );
    res = refalrts::splice_elem( res, n160 );
    res = refalrts::splice_elem( res, n159 );
    res = refalrts::splice_elem( res, n158 );
    res = refalrts::splice_evar( res, eIndent_b_11, eIndent_e_11 );
    res = refalrts::splice_elem( res, n157 );
    refalrts::push_stack( n156 );
    refalrts::push_stack( n149 );
    res = refalrts::splice_elem( res, n156 );
    res = refalrts::splice_evar( res, eBracketsForSave_b_2, eBracketsForSave_e_2 );
    refalrts::link_brackets( n151, n155 );
    res = refalrts::splice_elem( res, n155 );
    res = refalrts::splice_elem( res, n154 );
    res = refalrts::splice_elem( res, n153 );
    res = refalrts::splice_evar( res, eIndent_b_10, eIndent_e_10 );
    res = refalrts::splice_elem( res, n152 );
    res = refalrts::splice_elem( res, n151 );
    res = refalrts::splice_elem( res, n150 );
    res = refalrts::splice_elem( res, n149 );
    refalrts::link_brackets( n119, n148 );
    res = refalrts::splice_elem( res, n148 );
    res = refalrts::splice_elem( res, n147 );
    res = refalrts::splice_elem( res, n146 );
    res = refalrts::splice_elem( res, n145 );
    refalrts::push_stack( n144 );
    refalrts::push_stack( n142 );
    res = refalrts::splice_elem( res, n144 );
    res = refalrts::splice_stvar( res, sBracketNumber_7 );
    res = refalrts::splice_elem( res, n143 );
    res = refalrts::splice_elem( res, n142 );
    res = refalrts::splice_elem( res, n141 );
    res = refalrts::splice_elem( res, n140 );
    refalrts::push_stack( n139 );
    refalrts::push_stack( n135 );
    res = refalrts::splice_elem( res, n139 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n138 );
    res = refalrts::splice_elem( res, n137 );
    res = refalrts::splice_elem( res, n136 );
    res = refalrts::splice_elem( res, n135 );
    res = refalrts::splice_elem( res, n134 );
    res = refalrts::splice_elem( res, n133 );
    res = refalrts::splice_elem( res, n132 );
    res = refalrts::splice_elem( res, n131 );
    res = refalrts::splice_elem( res, n130 );
    res = refalrts::splice_elem( res, n129 );
    res = refalrts::splice_elem( res, n128 );
    res = refalrts::splice_elem( res, n127 );
    res = refalrts::splice_elem( res, n126 );
    res = refalrts::splice_elem( res, n125 );
    res = refalrts::splice_elem( res, n124 );
    res = refalrts::splice_elem( res, n123 );
    res = refalrts::splice_elem( res, n122 );
    res = refalrts::splice_elem( res, n121 );
    res = refalrts::splice_elem( res, n120 );
    res = refalrts::splice_evar( res, eIndent_b_9, eIndent_e_9 );
    res = refalrts::splice_elem( res, n119 );
    refalrts::link_brackets( n99, n118 );
    res = refalrts::splice_elem( res, n118 );
    res = refalrts::splice_elem( res, n117 );
    res = refalrts::splice_elem( res, n116 );
    res = refalrts::splice_elem( res, n115 );
    res = refalrts::splice_elem( res, n114 );
    res = refalrts::splice_elem( res, n113 );
    refalrts::push_stack( n112 );
    refalrts::push_stack( n110 );
    res = refalrts::splice_elem( res, n112 );
    res = refalrts::splice_stvar( res, sBracketNumber_6 );
    res = refalrts::splice_elem( res, n111 );
    res = refalrts::splice_elem( res, n110 );
    res = refalrts::splice_elem( res, n109 );
    res = refalrts::splice_elem( res, n108 );
    res = refalrts::splice_elem( res, n107 );
    refalrts::push_stack( n106 );
    refalrts::push_stack( n104 );
    res = refalrts::splice_elem( res, n106 );
    res = refalrts::splice_stvar( res, sBracketNumber_5 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_evar( res, eIndent_b_8, eIndent_e_8 );
    res = refalrts::splice_elem( res, n99 );
    refalrts::link_brackets( n79, n98 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    refalrts::push_stack( n92 );
    refalrts::push_stack( n90 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_stvar( res, sBracketNumber_4 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    refalrts::push_stack( n86 );
    refalrts::push_stack( n84 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_stvar( res, sBracketNumber_3 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_evar( res, eIndent_b_7, eIndent_e_7 );
    res = refalrts::splice_elem( res, n79 );
    refalrts::link_brackets( n57, n78 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    refalrts::push_stack( n72 );
    refalrts::push_stack( n70 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_stvar( res, sBracketNumber_2 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    refalrts::push_stack( n66 );
    refalrts::push_stack( n62 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_evar( res, eIndent_b_6, eIndent_e_6 );
    res = refalrts::splice_elem( res, n57 );
    refalrts::link_brackets( n35, n56 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    refalrts::push_stack( n50 );
    refalrts::push_stack( n48 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n40 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eIndent_b_5, eIndent_e_5 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n17, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n10, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eBracketsForSave_b_1, eBracketsForSave_e_1 );
    refalrts::link_brackets( n6, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    // (~1 e.Indent )~1 (~2 & CmdEmptyResult )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdEmptyResult, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_close_bracket( n66 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n34, n66 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n4, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    static refalrts::Iter eElemInfo_b_1;
    refalrts::use( eElemInfo_b_1 );
    static refalrts::Iter eElemInfo_e_1;
    refalrts::use( eElemInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter sElemNumber_2;
    refalrts::use( sElemNumber_2 );
    // (~1 e.Indent )~1 (~2 & CmdAllocateElem s.ElemNumber e.ElemInfo )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdAllocateElem, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_2, be_2 ) ) 
      break;
    eElemInfo_b_1 = bb_2;
    refalrts::use( eElemInfo_b_1 );
    eElemInfo_e_1 = be_2;
    refalrts::use( eElemInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintAllocateElem, (void*) "PrintAllocateElem"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopySTVar, & sElemNumber_1},
      {refalrts::icSpliceEVar, & eElemInfo_b_1, & eElemInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sElemNumber_2, sElemNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, & PrintAllocateElem, "PrintAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n31 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eElemInfo_b_1, eElemInfo_e_1 );
    res = refalrts::splice_stvar( res, sElemNumber_2 );
    refalrts::link_brackets( n29, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::link_brackets( n2, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdLinkBrackets s.Left s.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdLinkBrackets, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sLeft_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sRight_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sLeft_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sRight_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n39 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::push_stack( n35 );
    refalrts::push_stack( n33 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_stvar( res, sRight_1 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, sLeft_1 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdPushStack s.ElemNumber )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdPushStack, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdInsertElem & ElElem s.ElemNumber )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & ElElem, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdInsertElem & ElSTVar s.Usings s.Mode e.Index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & ElSTVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n44 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    refalrts::push_stack( n40 );
    refalrts::push_stack( n38 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdInsertEVar s.Usings 'e e.Index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdInsertEVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_name( n44, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_bracket( n50 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n50 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::push_stack( n46 );
    refalrts::push_stack( n43 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    refalrts::push_stack( n40 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    // (~1 e.Indent )~1 (~2 & CmdReturnResult )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdReturnResult, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_close_bracket( n77 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_open_bracket( n78 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_close_bracket( n105 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n78, n105 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n78 );
    refalrts::link_brackets( n25, n77 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n2, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintArrVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Mode e.Index
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, '1'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '1' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintEVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintArrEVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Mode e.Index
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, '1'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '1' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintEVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintArrEVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Mode e.Index
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, '1'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '1' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintEVar_OE(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\n'
    if( ! refalrts::char_left( '\n', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'n' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\t'
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\r'
    if( ! refalrts::char_left( '\r', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\\'
    if( ! refalrts::char_left( '\\', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\''
    if( ! refalrts::char_left( '\'', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sOther_1;
    refalrts::use( sOther_1 );
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sOther_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sOther_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber s.Char
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Escape, (void*) "Escape"},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber s.Number
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n4, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber e.Name
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icChar, 0, 0, '&'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '&' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n4, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber e.Name
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '&'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, '&' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '<' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '>' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n27 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n4, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sInnerNum_1;
    refalrts::use( sInnerNum_1 );
    static refalrts::Iter sInnerNum_2;
    refalrts::use( sInnerNum_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber s.InnerNum
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sInnerNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sInnerNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sInnerNum_2, sInnerNum_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n22 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, sInnerNum_2 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n4, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchADT(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sInnerNum_1;
    refalrts::use( sInnerNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sInnerNum_2;
    refalrts::use( sInnerNum_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber s.InnerNum e.Name
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sInnerNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sInnerNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '&'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sInnerNum_2, sInnerNum_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, '&' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sInnerNum_2 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult BreakerFromIndent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '    '
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ';' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eOtherIndent_b_1;
    refalrts::use( eOtherIndent_b_1 );
    static refalrts::Iter eOtherIndent_e_1;
    refalrts::use( eOtherIndent_e_1 );
    // e.OtherIndent
    eOtherIndent_b_1 = bb_0;
    refalrts::use( eOtherIndent_b_1 );
    eOtherIndent_e_1 = be_0;
    refalrts::use( eOtherIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ';' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter sBracketNumber_2;
    refalrts::use( sBracketNumber_2 );
    // (~1 e.Indent )~1 s.BracketNumber
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'q'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BreakerFromIndent, (void*) "BreakerFromIndent"},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_2, sBracketNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'q' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_name( n35, & BreakerFromIndent, "BreakerFromIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n31, n37 );
    res = refalrts::splice_elem( res, n37 );
    refalrts::push_stack( n36 );
    refalrts::push_stack( n34 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n0, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_stvar( res, sBracketNumber_2 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StrFromDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & AlgLeft
    if( ! refalrts::function_left( & AlgLeft, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & AlgRight
    if( ! refalrts::function_left( & AlgRight, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult VarMatchFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // 's'
    if( ! refalrts::char_left( 's', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // 't'
    if( ! refalrts::char_left( 't', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarMatchFunction, (void*) "VarMatchFunction"},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icCopySTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & VarMatchFunction, "VarMatchFunction" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_number( n11, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter sUsings_3;
    refalrts::use( sUsings_3 );
    static refalrts::Iter sUsings_4;
    refalrts::use( sUsings_4 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter eIndex_b_4;
    refalrts::use( eIndex_b_4 );
    static refalrts::Iter eIndex_e_4;
    refalrts::use( eIndex_e_4 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber s.Usings 'e e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_3, sUsings_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_4, sUsings_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_4, eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_name( n41, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_close_call( n47 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n47 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::push_stack( n46 );
    refalrts::push_stack( n40 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_evar( res, eIndex_b_4, eIndex_e_4 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n42 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_stvar( res, sUsings_4 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    refalrts::push_stack( n37 );
    refalrts::push_stack( n31 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::push_stack( n35 );
    refalrts::push_stack( n33 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_stvar( res, sUsings_3 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n4, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber s.Usings s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sMode_1},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n31 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    refalrts::push_stack( n29 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n4, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNumber_1;
    refalrts::use( sBracketNumber_1 );
    static refalrts::Iter eFunction_b_1;
    refalrts::use( eFunction_b_1 );
    static refalrts::Iter eFunction_e_1;
    refalrts::use( eFunction_e_1 );
    static refalrts::Iter eTextRep_b_1;
    refalrts::use( eTextRep_b_1 );
    static refalrts::Iter eTextRep_e_1;
    refalrts::use( eTextRep_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter sBracketNumber_2;
    refalrts::use( sBracketNumber_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNumber (~2 e.Function )~2 e.TextRep
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eFunction_b_1 = bb_2;
    refalrts::use( eFunction_b_1 );
    eFunction_e_1 = be_2;
    refalrts::use( eFunction_e_1 );
    eTextRep_b_1 = bb_0;
    refalrts::use( eTextRep_b_1 );
    eTextRep_e_1 = be_0;
    refalrts::use( eTextRep_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icSpliceEVar, & eFunction_b_1, & eFunction_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromDirection, (void*) "StrFromDirection"},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eTextRep_b_1, & eTextRep_e_1},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BreakerFromIndent, (void*) "BreakerFromIndent"},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_2, sBracketNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & StrFromDirection, "StrFromDirection" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, & BreakerFromIndent, "BreakerFromIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n39, n45 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n42 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::link_brackets( n0, n38 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::push_stack( n32 );
    refalrts::push_stack( n30 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_stvar( res, sBracketNumber_2 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eTextRep_b_1, eTextRep_e_1 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eFunction_b_1, eFunction_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintElemVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // s.Number
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintAllocate_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SwAllocator(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SwInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    static refalrts::Iter sElementType_1;
    refalrts::use( sElementType_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter sElementType_2;
    refalrts::use( sElementType_2 );
    // (~1 e.Indent )~1 s.ElemNumber s.ElementType e.Info
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sElementType_1, bb_0, be_0 ) ) 
      break;
    eInfo_b_1 = bb_0;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_0;
    refalrts::use( eInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintAllocate_Aux, (void*) "PrintAllocate_Aux"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwAllocator, (void*) "SwAllocator"},
      {refalrts::icSpliceSTVar, & sElementType_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwInfo, (void*) "SwInfo"},
      {refalrts::icCopySTVar, & sElementType_1},
      {refalrts::icSpliceEVar, & eInfo_b_1, & eInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sElementType_2, sElementType_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintAllocate_Aux, "PrintAllocate_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & SwAllocator, "SwAllocator" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & SwInfo, "SwInfo" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n15, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n9, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_stvar( res, sElementType_2 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sElementType_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintAllocate_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eConstructor_b_1;
    refalrts::use( eConstructor_b_1 );
    static refalrts::Iter eConstructor_e_1;
    refalrts::use( eConstructor_e_1 );
    static refalrts::Iter eValue_b_1;
    refalrts::use( eValue_b_1 );
    static refalrts::Iter eValue_e_1;
    refalrts::use( eValue_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    // (~1 e.Indent )~1 s.ElemNumber (~2 e.Constructor )~2 (~3 e.Value )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eConstructor_b_1 = bb_2;
    refalrts::use( eConstructor_b_1 );
    eConstructor_e_1 = be_2;
    refalrts::use( eConstructor_e_1 );
    eValue_b_1 = bb_3;
    refalrts::use( eValue_b_1 );
    eValue_e_1 = be_3;
    refalrts::use( eValue_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icSpliceEVar, & eConstructor_b_1, & eConstructor_e_1},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eValue_b_1, & eValue_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eConstructor_b_1, eConstructor_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SwAllocator(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElChar
    if( ! refalrts::function_left( & ElChar, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElName
    if( ! refalrts::function_left( & ElName, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElNumber
    if( ! refalrts::function_left( & ElNumber, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElIdent
    if( ! refalrts::function_left( & ElIdent, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElOpenADT
    if( ! refalrts::function_left( & ElOpenADT, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElCloseADT
    if( ! refalrts::function_left( & ElCloseADT, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElOpenBracket
    if( ! refalrts::function_left( & ElOpenBracket, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElCloseBracket
    if( ! refalrts::function_left( & ElCloseBracket, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElOpenCall
    if( ! refalrts::function_left( & ElOpenCall, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElCloseCall
    if( ! refalrts::function_left( & ElCloseCall, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'l' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SwInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // & ElChar s.Char
    if( ! refalrts::function_left( & ElChar, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Escape, (void*) "Escape"},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // & ElName e.Name
    if( ! refalrts::function_left( & ElName, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '&'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintName, (void*) "PrintName"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintName, (void*) "PrintName"},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '&' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & PrintName, "PrintName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & PrintName, "PrintName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // & ElNumber s.Number
    if( ! refalrts::function_left( & ElNumber, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'L' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // & ElIdent e.Name
    if( ! refalrts::function_left( & ElIdent, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '&'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '&' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '<' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '>' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sOther_1;
    refalrts::use( sOther_1 );
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenCloseBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '    '
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // '   e.Indent
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_0;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_0;
    refalrts::use( eIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenCloseBrackets, (void*) "GenCloseBrackets"},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenCloseBrackets, "GenCloseBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ElemVarName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult InsertElem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // & ElElem s.Number
    if( ! refalrts::function_left( & ElElem, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ElemVarName, (void*) "ElemVarName"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ElemVarName, "ElemVarName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // & ElSTVar s.Usings s.Mode e.Index
    if( ! refalrts::function_left( & ElSTVar, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SwStringFromCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & CmdReturnResult
    if( ! refalrts::function_left( & CmdReturnResult, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StringFromCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sCommand_1;
    refalrts::use( sCommand_1 );
    static refalrts::Iter eArguments_b_1;
    refalrts::use( eArguments_b_1 );
    static refalrts::Iter eArguments_e_1;
    refalrts::use( eArguments_e_1 );
    // (~1 s.Command e.Arguments )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCommand_1, bb_1, be_1 ) ) 
      break;
    eArguments_b_1 = bb_1;
    refalrts::use( eArguments_b_1 );
    eArguments_e_1 = be_1;
    refalrts::use( eArguments_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwStringFromCommand, (void*) "SwStringFromCommand"},
      {refalrts::icSpliceSTVar, & sCommand_1},
      {refalrts::icSpliceEVar, & eArguments_b_1, & eArguments_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & SwStringFromCommand, "SwStringFromCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eArguments_b_1, eArguments_e_1 );
    res = refalrts::splice_stvar( res, sCommand_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}


//End of file
