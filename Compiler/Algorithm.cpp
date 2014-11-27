// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult LeftPtr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult RightPtr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter ePattern_b_2;
    refalrts::use( ePattern_b_2 );
    static refalrts::Iter ePattern_e_2;
    refalrts::use( ePattern_e_2 );
    // (~1 e.Pattern )~1 (~2 e.Result )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopyEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( ePattern_b_2, ePattern_e_2, ePattern_b_1, ePattern_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_close_call( n82 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_open_call( n83 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_name( n84, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, 'a' ) )
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
    if( ! refalrts::alloc_char( n105, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_close_call( n106 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_open_call( n107 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_name( n108, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_char( n109, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_char( n110, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_char( n111, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_char( n112, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_char( n113, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_char( n114, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_char( n115, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_char( n116, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_char( n117, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_close_call( n118 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_open_call( n119 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_name( n120, & GenPattern, "GenPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_open_bracket( n121 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_name( n122, & LeftPtr, "LeftPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_number( n123, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_number( n124, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_close_bracket( n125 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_open_bracket( n126 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_name( n127, & RightPtr, "RightPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_number( n128, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_number( n129, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_close_bracket( n130 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_open_bracket( n131 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_close_bracket( n132 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_open_bracket( n133 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_close_bracket( n134 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_close_call( n135 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n135 );
    refalrts::push_stack( n119 );
    res = refalrts::splice_elem( res, n135 );
    refalrts::link_brackets( n133, n134 );
    res = refalrts::splice_elem( res, n134 );
    res = refalrts::splice_elem( res, n133 );
    refalrts::link_brackets( n131, n132 );
    res = refalrts::splice_elem( res, n132 );
    res = refalrts::splice_elem( res, n131 );
    refalrts::link_brackets( n126, n130 );
    res = refalrts::splice_elem( res, n130 );
    res = refalrts::splice_elem( res, n129 );
    res = refalrts::splice_elem( res, n128 );
    res = refalrts::splice_elem( res, n127 );
    res = refalrts::splice_elem( res, n126 );
    res = refalrts::splice_evar( res, ePattern_b_2, ePattern_e_2 );
    refalrts::link_brackets( n121, n125 );
    res = refalrts::splice_elem( res, n125 );
    res = refalrts::splice_elem( res, n124 );
    res = refalrts::splice_elem( res, n123 );
    res = refalrts::splice_elem( res, n122 );
    res = refalrts::splice_elem( res, n121 );
    res = refalrts::splice_elem( res, n120 );
    res = refalrts::splice_elem( res, n119 );
    refalrts::push_stack( n118 );
    refalrts::push_stack( n107 );
    res = refalrts::splice_elem( res, n118 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
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
    refalrts::push_stack( n106 );
    refalrts::push_stack( n83 );
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
    refalrts::push_stack( n82 );
    refalrts::push_stack( n0 );
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

extern refalrts::FnResult TkOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult LeftPtr(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult RightPtr(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult AlgLeft(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult AlgRight(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult TkIdentifier(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdNumber(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdBrackets(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdEmpty(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdRepeated(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdOpenedE(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdClosedE(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdComment(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdPrint(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdCreateVector(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdTakeFixed(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 e.Pattern_E (~2 e.Vars )~2 (~3 e.Commands )~3
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_2;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_2;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_3;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_3;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'w'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'p'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icInt, 0, 0, 0 },
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdCreateVector, (void*) "CmdCreateVector"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_char( n49, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_char( n50, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_char( n51, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_char( n52, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_char( n53, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_char( n54, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_char( n55, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_char( n56, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n57 = 0;
      if( ! refalrts::alloc_char( n57, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n58 = 0;
      if( ! refalrts::alloc_char( n58, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n59 = 0;
      if( ! refalrts::alloc_char( n59, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n60 = 0;
      if( ! refalrts::alloc_char( n60, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n61 = 0;
      if( ! refalrts::alloc_char( n61, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n62 = 0;
      if( ! refalrts::alloc_char( n62, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n63 = 0;
      if( ! refalrts::alloc_char( n63, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n64 = 0;
      if( ! refalrts::alloc_char( n64, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n65 = 0;
      if( ! refalrts::alloc_char( n65, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n66 = 0;
      if( ! refalrts::alloc_char( n66, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n67 = 0;
      if( ! refalrts::alloc_char( n67, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n68 = 0;
      if( ! refalrts::alloc_char( n68, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n69 = 0;
      if( ! refalrts::alloc_char( n69, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n70 = 0;
      if( ! refalrts::alloc_char( n70, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n71 = 0;
      if( ! refalrts::alloc_char( n71, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n72 = 0;
      if( ! refalrts::alloc_char( n72, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n73 = 0;
      if( ! refalrts::alloc_char( n73, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n74 = 0;
      if( ! refalrts::alloc_char( n74, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n75 = 0;
      if( ! refalrts::alloc_char( n75, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n76 = 0;
      if( ! refalrts::alloc_char( n76, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n77 = 0;
      if( ! refalrts::alloc_char( n77, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n78 = 0;
      if( ! refalrts::alloc_char( n78, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n79 = 0;
      if( ! refalrts::alloc_char( n79, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n80 = 0;
      if( ! refalrts::alloc_char( n80, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n81 = 0;
      if( ! refalrts::alloc_char( n81, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n82 = 0;
      if( ! refalrts::alloc_close_call( n82 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n83 = 0;
      if( ! refalrts::alloc_open_call( n83 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n84 = 0;
      if( ! refalrts::alloc_name( n84, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n85 = 0;
      if( ! refalrts::alloc_char( n85, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n86 = 0;
      if( ! refalrts::alloc_char( n86, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n87 = 0;
      if( ! refalrts::alloc_char( n87, 'w' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n88 = 0;
      if( ! refalrts::alloc_char( n88, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n89 = 0;
      if( ! refalrts::alloc_char( n89, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n90 = 0;
      if( ! refalrts::alloc_char( n90, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n91 = 0;
      if( ! refalrts::alloc_char( n91, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n92 = 0;
      if( ! refalrts::alloc_char( n92, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n93 = 0;
      if( ! refalrts::alloc_char( n93, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n94 = 0;
      if( ! refalrts::alloc_char( n94, 'p' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n95 = 0;
      if( ! refalrts::alloc_char( n95, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n96 = 0;
      if( ! refalrts::alloc_char( n96, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n97 = 0;
      if( ! refalrts::alloc_close_call( n97 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n98 = 0;
      if( ! refalrts::alloc_open_call( n98 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n99 = 0;
      if( ! refalrts::alloc_name( n99, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n100 = 0;
      if( ! refalrts::alloc_open_bracket( n100 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n101 = 0;
      if( ! refalrts::alloc_name( n101, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n102 = 0;
      if( ! refalrts::alloc_number( n102, 0UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n103 = 0;
      if( ! refalrts::alloc_close_bracket( n103 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n104 = 0;
      if( ! refalrts::alloc_open_bracket( n104 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n105 = 0;
      if( ! refalrts::alloc_close_bracket( n105 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n106 = 0;
      if( ! refalrts::alloc_open_bracket( n106 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n107 = 0;
      if( ! refalrts::alloc_open_bracket( n107 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n108 = 0;
      if( ! refalrts::alloc_name( n108, & CmdCreateVector, "CmdCreateVector" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n109 = 0;
      if( ! refalrts::alloc_name( n109, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n110 = 0;
      if( ! refalrts::alloc_close_bracket( n110 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n111 = 0;
      if( ! refalrts::alloc_close_bracket( n111 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n112 = 0;
      if( ! refalrts::alloc_close_call( n112 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n112 );
      refalrts::push_stack( n98 );
      res = refalrts::splice_elem( res, n112 );
      refalrts::link_brackets( n106, n111 );
      res = refalrts::splice_elem( res, n111 );
      refalrts::link_brackets( n107, n110 );
      res = refalrts::splice_elem( res, n110 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n109 );
      res = refalrts::splice_elem( res, n108 );
      res = refalrts::splice_elem( res, n107 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n106 );
      refalrts::link_brackets( n104, n105 );
      res = refalrts::splice_elem( res, n105 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n104 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n100, n103 );
      res = refalrts::splice_elem( res, n103 );
      res = refalrts::splice_elem( res, n102 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n101 );
      res = refalrts::splice_elem( res, n100 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n99 );
      res = refalrts::splice_elem( res, n98 );
      refalrts::push_stack( n97 );
      refalrts::push_stack( n83 );
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
      refalrts::push_stack( n82 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkChar s.Char )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkChar, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
      if( ! refalrts::svar_left( sChar_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'x'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
        {refalrts::icSpliceSTVar, & sChar_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'x' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_call( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & TkChar, "TkChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_close_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_close_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_open_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n30, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n30 );
      refalrts::link_brackets( n28, n29 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n19, n27 );
      res = refalrts::splice_elem( res, n27 );
      refalrts::link_brackets( n24, n26 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_stvar( res, sChar_1 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n23 );
      refalrts::push_stack( n21 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkNumber s.Number )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
      if( ! refalrts::svar_left( sNumber_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'x'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'm'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkNumber, (void*) "TkNumber"},
        {refalrts::icSpliceSTVar, & sNumber_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'x' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'm' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_call( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_call( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_call( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_name( n27, & TkNumber, "TkNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_close_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_open_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_close_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_close_call( n34 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n34 );
      refalrts::push_stack( n19 );
      res = refalrts::splice_elem( res, n34 );
      refalrts::link_brackets( n32, n33 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n30, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n29 );
      res = refalrts::splice_elem( res, n29 );
      refalrts::link_brackets( n26, n28 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_stvar( res, sNumber_1 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n25 );
      refalrts::push_stack( n23 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      refalrts::push_stack( n18 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkName e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'x'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'm'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'x' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'm' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_call( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & TkName, "TkName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_close_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_close_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_open_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n30, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n30 );
      refalrts::link_brackets( n28, n29 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n19, n27 );
      res = refalrts::splice_elem( res, n27 );
      refalrts::link_brackets( n24, n26 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n23 );
      refalrts::push_stack( n21 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkIdentifier e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkIdentifier, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'x'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkIdentifier, (void*) "TkIdentifier"},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdIdent, (void*) "CmdIdent"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'x' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_call( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_close_call( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_open_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & TkIdentifier, "TkIdentifier" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_open_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_name( n33, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_close_bracket( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_bracket( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_call( n37 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n37 );
      refalrts::push_stack( n18 );
      res = refalrts::splice_elem( res, n37 );
      refalrts::link_brackets( n31, n36 );
      res = refalrts::splice_elem( res, n36 );
      refalrts::link_brackets( n32, n35 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n29, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n20, n28 );
      res = refalrts::splice_elem( res, n28 );
      refalrts::link_brackets( n25, n27 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n24 );
      refalrts::push_stack( n22 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    // e.Pattern_B (~1 & RightPtr s.Num )~1 e.Pattern_E (~2 e.Vars )~2 (~3 e.Commands )~3
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_2;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_2;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_3;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_3;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_1, be_1 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'w'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'g'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'p'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icInt, 0, 0, 0 },
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdCreateVector, (void*) "CmdCreateVector"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'w' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'g' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'p' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_call( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_number( n20, 0UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_open_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & CmdCreateVector, "CmdCreateVector" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_name( n27, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_close_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_call( n30 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n30 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n30 );
      refalrts::link_brackets( n24, n29 );
      res = refalrts::splice_elem( res, n29 );
      refalrts::link_brackets( n25, n28 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n24 );
      refalrts::link_brackets( n22, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n18, n21 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::push_stack( n15 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sChar_2;
    refalrts::use( sChar_2 );
    // e.Pattern_B (~1 & TkChar s.Char )~1 (~2 & RightPtr s.Num s.FixCount e.FixedCommands )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_2, be_2 ) ) 
        continue;
      eFixedCommands_b_1 = bb_2;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_2;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'x'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'g'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
        {refalrts::icSpliceSTVar, & sChar_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdNumber, (void*) "CmdNumber"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopySTVar, & sChar_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sChar_2, sChar_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'x' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'g' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_call( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_close_call( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_open_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & TkChar, "TkChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_open_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_name( n33, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_close_bracket( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_bracket( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_call( n37 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n37 );
      refalrts::push_stack( n18 );
      res = refalrts::splice_elem( res, n37 );
      refalrts::link_brackets( n31, n36 );
      res = refalrts::splice_elem( res, n36 );
      refalrts::link_brackets( n32, n35 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_stvar( res, sChar_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n29, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n20, n28 );
      res = refalrts::splice_elem( res, n28 );
      refalrts::link_brackets( n25, n27 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_stvar( res, sChar_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n24 );
      refalrts::push_stack( n22 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sNumber_2;
    refalrts::use( sNumber_2 );
    // e.Pattern_B (~1 & TkNumber s.Number )~1 (~2 & RightPtr s.Num s.FixCount e.FixedCommands )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_2, be_2 ) ) 
        continue;
      eFixedCommands_b_1 = bb_2;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_2;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'x'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'm'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'g'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkNumber, (void*) "TkNumber"},
        {refalrts::icSpliceSTVar, & sNumber_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdNumber, (void*) "CmdNumber"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopySTVar, & sNumber_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNumber_2, sNumber_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'x' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'm' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'g' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_call( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_call( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_close_call( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_name( n28, & TkNumber, "TkNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_close_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_open_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_open_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_name( n35, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_name( n36, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_call( n39 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n39 );
      refalrts::push_stack( n20 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n33, n38 );
      res = refalrts::splice_elem( res, n38 );
      refalrts::link_brackets( n34, n37 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_stvar( res, sNumber_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n33 );
      refalrts::link_brackets( n31, n32 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n22, n30 );
      res = refalrts::splice_elem( res, n30 );
      refalrts::link_brackets( n27, n29 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_stvar( res, sNumber_1 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n26 );
      refalrts::push_stack( n24 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::push_stack( n19 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Pattern_B (~1 & TkName e.Name )~1 (~2 & RightPtr s.Num s.FixCount e.FixedCommands )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_1;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_1;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_2, be_2 ) ) 
        continue;
      eFixedCommands_b_1 = bb_2;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_2;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'x'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'm'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'g'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdName, (void*) "CmdName"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'x' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'm' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'g' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_call( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_close_call( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_open_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & TkName, "TkName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_open_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_name( n33, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_close_bracket( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_bracket( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_call( n37 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n37 );
      refalrts::push_stack( n18 );
      res = refalrts::splice_elem( res, n37 );
      refalrts::link_brackets( n31, n36 );
      res = refalrts::splice_elem( res, n36 );
      refalrts::link_brackets( n32, n35 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n29, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n20, n28 );
      res = refalrts::splice_elem( res, n28 );
      refalrts::link_brackets( n25, n27 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n24 );
      refalrts::push_stack( n22 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Pattern_B (~1 & TkIdentifier e.Name )~1 (~2 & RightPtr s.Num s.FixCount e.FixedCommands )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkIdentifier, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_1;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_1;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_2, be_2 ) ) 
        continue;
      eFixedCommands_b_1 = bb_2;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_2;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'x'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'g'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkIdentifier, (void*) "TkIdentifier"},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdIdent, (void*) "CmdIdent"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'x' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'g' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_call( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_call( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_call( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_name( n27, & TkIdentifier, "TkIdentifier" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_close_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_open_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_name( n35, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_bracket( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_call( n38 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n38 );
      refalrts::push_stack( n19 );
      res = refalrts::splice_elem( res, n38 );
      refalrts::link_brackets( n32, n37 );
      res = refalrts::splice_elem( res, n37 );
      refalrts::link_brackets( n33, n36 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n30, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n29 );
      res = refalrts::splice_elem( res, n29 );
      refalrts::link_brackets( n26, n28 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n25 );
      refalrts::push_stack( n23 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      refalrts::push_stack( n18 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sFixCount_2;
    refalrts::use( sFixCount_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sNum_3;
    refalrts::use( sNum_3 );
    static refalrts::Iter sInner_3;
    refalrts::use( sInner_3 );
    static refalrts::Iter sInner_4;
    refalrts::use( sInner_4 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkOpenBracket s.Inner )~2 e.Pattern_M (~3 & TkCloseBracket s.Inner )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenBracket, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
      if( ! refalrts::svar_left( sInner_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseBracket, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icChar, 0, 0, 'b'},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'c'},
          {refalrts::icChar, 0, 0, 'k'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, 's'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'f'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icSpliceSTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkBrackets, (void*) "TkBrackets"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icSpliceSTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_2},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_b_1, & ePattern_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdBrackets, (void*) "CmdBrackets"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sFixCount_2, sFixCount_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_3, sNum_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_char( n2, 'b' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_char( n3, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_char( n4, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_char( n5, 'c' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_char( n6, 'k' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_char( n7, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_char( n8, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_char( n9, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_char( n10, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_char( n11, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_char( n12, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_char( n13, 'f' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_char( n14, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_close_call( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_open_call( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_name( n17, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_call( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_call( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_name( n20, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_bracket( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_call( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_open_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_name( n27, & TkBrackets, "TkBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_open_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_name( n29, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_number( n30, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_close_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_name( n33, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_number( n34, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_bracket( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_open_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_close_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_open_bracket( n40 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_open_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_name( n42, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_name( n43, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_bracket( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_call( n46 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n46 );
        refalrts::push_stack( n19 );
        res = refalrts::splice_elem( res, n46 );
        refalrts::link_brackets( n40, n45 );
        res = refalrts::splice_elem( res, n45 );
        refalrts::link_brackets( n41, n44 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_stvar( res, sNum_3 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n40 );
        refalrts::link_brackets( n38, n39 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n21, n37 );
        res = refalrts::splice_elem( res, n37 );
        refalrts::link_brackets( n26, n36 );
        res = refalrts::splice_elem( res, n36 );
        refalrts::link_brackets( n32, n35 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n28, n31 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
        refalrts::push_stack( n25 );
        refalrts::push_stack( n23 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_stvar( res, sFixCount_2 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::push_stack( n18 );
        refalrts::push_stack( n16 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_stvar( res, sFixCount_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_elem( res, n16 );
        refalrts::push_stack( n15 );
        refalrts::push_stack( n0 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sFixCount_2;
    refalrts::use( sFixCount_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sNum_3;
    refalrts::use( sNum_3 );
    static refalrts::Iter sInner_3;
    refalrts::use( sInner_3 );
    static refalrts::Iter sInner_4;
    refalrts::use( sInner_4 );
    // e.Pattern_B (~1 & TkOpenBracket s.Inner )~1 e.Pattern_M (~2 & TkCloseBracket s.Inner )~2 (~3 & RightPtr s.Num s.FixCount e.FixedCommands )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenBracket, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseBracket, bb_2, be_2 ) ) 
          continue;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & RightPtr, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
        if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::svar_left( sFixCount_1, bb_3, be_3 ) ) 
          continue;
        eFixedCommands_b_1 = bb_3;
        refalrts::use( eFixedCommands_b_1 );
        eFixedCommands_e_1 = be_3;
        refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icChar, 0, 0, 'b'},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'c'},
          {refalrts::icChar, 0, 0, 'k'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, 's'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'g'},
          {refalrts::icChar, 0, 0, 'h'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icSpliceSTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icSpliceSTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkBrackets, (void*) "TkBrackets"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_2},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_b_1, & ePattern_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdBrackets, (void*) "CmdBrackets"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sFixCount_2, sFixCount_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_3, sNum_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_char( n2, 'b' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_char( n3, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_char( n4, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_char( n5, 'c' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_char( n6, 'k' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_char( n7, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_char( n8, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_char( n9, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_char( n10, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_char( n11, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_char( n12, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_char( n13, 'g' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_char( n14, 'h' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_char( n15, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_close_call( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_call( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_open_call( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_name( n21, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_open_bracket( n22 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_name( n23, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_open_call( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_name( n25, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_close_call( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_open_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_name( n28, & TkBrackets, "TkBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_open_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_name( n30, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_number( n31, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_close_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_open_bracket( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_name( n34, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_number( n35, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_bracket( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_close_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_open_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_close_bracket( n40 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_open_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_open_bracket( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_name( n43, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_name( n44, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_bracket( n46 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_close_call( n47 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n47 );
        refalrts::push_stack( n20 );
        res = refalrts::splice_elem( res, n47 );
        refalrts::link_brackets( n41, n46 );
        res = refalrts::splice_elem( res, n46 );
        refalrts::link_brackets( n42, n45 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_stvar( res, sNum_3 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n41 );
        refalrts::link_brackets( n39, n40 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n22, n38 );
        res = refalrts::splice_elem( res, n38 );
        refalrts::link_brackets( n27, n37 );
        res = refalrts::splice_elem( res, n37 );
        refalrts::link_brackets( n33, n36 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n29, n32 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
        refalrts::push_stack( n26 );
        refalrts::push_stack( n24 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_stvar( res, sFixCount_2 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::push_stack( n19 );
        refalrts::push_stack( n17 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_stvar( res, sFixCount_1 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
        refalrts::push_stack( n16 );
        refalrts::push_stack( n0 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sFixCount_2;
    refalrts::use( sFixCount_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sInner_3;
    refalrts::use( sInner_3 );
    static refalrts::Iter sInner_4;
    refalrts::use( sInner_4 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkOpenADT s.Inner )~2 (~3 & TkName e.Name )~3 e.Pattern_M (~4 & TkCloseADT s.Inner )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_right( bb_6, be_6, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_5;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_5;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_6;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_6;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenADT, bb_2, be_2 ) ) 
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_3, be_3 ) ) 
        continue;
      eName_b_1 = bb_3;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_3;
      refalrts::use( eName_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
      if( ! refalrts::svar_left( sInner_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseADT, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'f'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icSpliceSTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkADT, (void*) "TkADT"},
          {refalrts::icSpliceSTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
          {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_2},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_b_1, & ePattern_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdADT, (void*) "CmdADT"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sFixCount_2, sFixCount_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_char( n2, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_char( n3, 'd' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_char( n4, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_char( n5, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_char( n6, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_char( n7, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_char( n8, 'f' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_char( n9, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_call( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_name( n12, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_call( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_call( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_open_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_name( n17, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_open_call( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_name( n19, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_close_call( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_bracket( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & TkADT, "TkADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & TkName, "TkName" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_open_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_name( n27, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_number( n28, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_close_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_open_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_name( n31, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_number( n32, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_close_bracket( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_open_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_bracket( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_open_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_open_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_name( n40, & CmdADT, "CmdADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_name( n41, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_close_bracket( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_close_bracket( n43 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_call( n44 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n44 );
        refalrts::push_stack( n14 );
        res = refalrts::splice_elem( res, n44 );
        refalrts::link_brackets( n38, n43 );
        res = refalrts::splice_elem( res, n43 );
        refalrts::link_brackets( n39, n42 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n38 );
        refalrts::link_brackets( n36, n37 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n16, n35 );
        res = refalrts::splice_elem( res, n35 );
        refalrts::link_brackets( n21, n34 );
        res = refalrts::splice_elem( res, n34 );
        refalrts::link_brackets( n30, n33 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n26, n29 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_elem( res, n26 );
        refalrts::link_brackets( n23, n25 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
        refalrts::push_stack( n20 );
        refalrts::push_stack( n18 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_stvar( res, sFixCount_2 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::push_stack( n13 );
        refalrts::push_stack( n11 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_stvar( res, sFixCount_1 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::push_stack( n10 );
        refalrts::push_stack( n0 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sFixCount_2;
    refalrts::use( sFixCount_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sInner_3;
    refalrts::use( sInner_3 );
    static refalrts::Iter sInner_4;
    refalrts::use( sInner_4 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Pattern_B (~1 & TkOpenADT s.Inner )~1 (~2 & TkName e.Name )~2 e.Pattern_M (~3 & TkCloseADT s.Inner )~3 (~4 & RightPtr s.Num s.FixCount e.FixedCommands )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_right( bb_6, be_6, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_5;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_5;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_6;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_6;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenADT, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      if( ! refalrts::svar_left( sInner_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseADT, bb_3, be_3 ) ) 
          continue;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & RightPtr, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
        if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::svar_left( sFixCount_1, bb_4, be_4 ) ) 
          continue;
        eFixedCommands_b_1 = bb_4;
        refalrts::use( eFixedCommands_b_1 );
        eFixedCommands_e_1 = be_4;
        refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'g'},
          {refalrts::icChar, 0, 0, 'h'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icSpliceSTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkADT, (void*) "TkADT"},
          {refalrts::icSpliceSTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
          {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_2},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_b_1, & ePattern_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdADT, (void*) "CmdADT"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sFixCount_2, sFixCount_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_char( n2, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_char( n3, 'd' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_char( n4, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_char( n5, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_char( n6, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_char( n7, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_char( n8, 'g' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_char( n9, 'h' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_char( n10, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_close_call( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_open_call( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_name( n13, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_close_call( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_open_call( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_name( n16, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_bracket( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_call( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_name( n20, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_close_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_open_bracket( n22 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_name( n23, & TkADT, "TkADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_open_bracket( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_name( n25, & TkName, "TkName" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_close_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_open_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_name( n28, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_number( n29, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_name( n32, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_number( n33, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_open_bracket( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_close_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_open_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_open_bracket( n40 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_name( n41, & CmdADT, "CmdADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_name( n42, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_close_bracket( n43 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_bracket( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_call( n45 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n45 );
        refalrts::push_stack( n15 );
        res = refalrts::splice_elem( res, n45 );
        refalrts::link_brackets( n39, n44 );
        res = refalrts::splice_elem( res, n44 );
        refalrts::link_brackets( n40, n43 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n39 );
        refalrts::link_brackets( n37, n38 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n17, n36 );
        res = refalrts::splice_elem( res, n36 );
        refalrts::link_brackets( n22, n35 );
        res = refalrts::splice_elem( res, n35 );
        refalrts::link_brackets( n31, n34 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n27, n30 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_elem( res, n27 );
        refalrts::link_brackets( n24, n26 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
        refalrts::push_stack( n21 );
        refalrts::push_stack( n19 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_stvar( res, sFixCount_2 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        refalrts::push_stack( n14 );
        refalrts::push_stack( n12 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_stvar( res, sFixCount_1 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        refalrts::push_stack( n11 );
        refalrts::push_stack( n0 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sFixCountLeft_1;
    refalrts::use( sFixCountLeft_1 );
    static refalrts::Iter eFixedCommandsLeft_b_1;
    refalrts::use( eFixedCommandsLeft_b_1 );
    static refalrts::Iter eFixedCommandsLeft_e_1;
    refalrts::use( eFixedCommandsLeft_e_1 );
    static refalrts::Iter sFixCountRight_1;
    refalrts::use( sFixCountRight_1 );
    static refalrts::Iter eFixedCommandsRight_b_1;
    refalrts::use( eFixedCommandsRight_b_1 );
    static refalrts::Iter eFixedCommandsRight_e_1;
    refalrts::use( eFixedCommandsRight_e_1 );
    static refalrts::Iter sFixCountLeft_2;
    refalrts::use( sFixCountLeft_2 );
    static refalrts::Iter sFixCountRight_2;
    refalrts::use( sFixCountRight_2 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCountLeft e.FixedCommandsLeft )~1 (~2 & RightPtr s.Num s.FixCountRight e.FixedCommandsRight )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCountLeft_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommandsLeft_b_1 = bb_1;
      refalrts::use( eFixedCommandsLeft_b_1 );
      eFixedCommandsLeft_e_1 = be_1;
      refalrts::use( eFixedCommandsLeft_e_1 );
      if( ! refalrts::svar_left( sFixCountRight_1, bb_2, be_2 ) ) 
        continue;
      eFixedCommandsRight_b_1 = bb_2;
      refalrts::use( eFixedCommandsRight_b_1 );
      eFixedCommandsRight_e_1 = be_2;
      refalrts::use( eFixedCommandsRight_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'A'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'k'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'x'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'm'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'z'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceSTVar, & sFixCountLeft_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'm'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'g'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'z'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceSTVar, & sFixCountRight_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdTakeFixed, (void*) "CmdTakeFixed"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icCopySTVar, & sFixCountLeft_1},
        {refalrts::icSpliceEVar, & eFixedCommandsLeft_b_1, & eFixedCommandsLeft_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdTakeFixed, (void*) "CmdTakeFixed"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icSpliceSTVar, & sNum_2},
        {refalrts::icCopySTVar, & sFixCountRight_1},
        {refalrts::icSpliceEVar, & eFixedCommandsRight_b_1, & eFixedCommandsRight_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sFixCountLeft_2, sFixCountLeft_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sFixCountRight_2, sFixCountRight_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'A' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'i' ) )
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
      if( ! refalrts::alloc_char( n9, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'k' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'x' ) )
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
      if( ! refalrts::alloc_char( n28, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_call( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'm' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_char( n49, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_char( n50, 'z' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_char( n51, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_close_call( n52 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_open_call( n53 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_name( n54, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_char( n55, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_char( n56, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n57 = 0;
      if( ! refalrts::alloc_char( n57, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n58 = 0;
      if( ! refalrts::alloc_char( n58, 'm' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n59 = 0;
      if( ! refalrts::alloc_char( n59, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n60 = 0;
      if( ! refalrts::alloc_char( n60, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n61 = 0;
      if( ! refalrts::alloc_char( n61, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n62 = 0;
      if( ! refalrts::alloc_char( n62, 'g' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n63 = 0;
      if( ! refalrts::alloc_char( n63, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n64 = 0;
      if( ! refalrts::alloc_char( n64, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n65 = 0;
      if( ! refalrts::alloc_char( n65, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n66 = 0;
      if( ! refalrts::alloc_char( n66, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n67 = 0;
      if( ! refalrts::alloc_char( n67, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n68 = 0;
      if( ! refalrts::alloc_char( n68, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n69 = 0;
      if( ! refalrts::alloc_char( n69, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n70 = 0;
      if( ! refalrts::alloc_char( n70, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n71 = 0;
      if( ! refalrts::alloc_char( n71, 'z' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n72 = 0;
      if( ! refalrts::alloc_char( n72, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n73 = 0;
      if( ! refalrts::alloc_close_call( n73 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n74 = 0;
      if( ! refalrts::alloc_open_call( n74 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n75 = 0;
      if( ! refalrts::alloc_name( n75, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n76 = 0;
      if( ! refalrts::alloc_open_bracket( n76 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n77 = 0;
      if( ! refalrts::alloc_close_bracket( n77 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n78 = 0;
      if( ! refalrts::alloc_open_bracket( n78 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n79 = 0;
      if( ! refalrts::alloc_open_bracket( n79 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n80 = 0;
      if( ! refalrts::alloc_name( n80, & CmdTakeFixed, "CmdTakeFixed" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n81 = 0;
      if( ! refalrts::alloc_name( n81, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n82 = 0;
      if( ! refalrts::alloc_close_bracket( n82 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n83 = 0;
      if( ! refalrts::alloc_open_bracket( n83 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n84 = 0;
      if( ! refalrts::alloc_name( n84, & CmdTakeFixed, "CmdTakeFixed" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n85 = 0;
      if( ! refalrts::alloc_name( n85, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n86 = 0;
      if( ! refalrts::alloc_close_bracket( n86 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n87 = 0;
      if( ! refalrts::alloc_close_bracket( n87 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n88 = 0;
      if( ! refalrts::alloc_close_call( n88 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n88 );
      refalrts::push_stack( n74 );
      res = refalrts::splice_elem( res, n88 );
      refalrts::link_brackets( n78, n87 );
      res = refalrts::splice_elem( res, n87 );
      refalrts::link_brackets( n83, n86 );
      res = refalrts::splice_elem( res, n86 );
      res = refalrts::splice_evar( res, eFixedCommandsRight_b_1, eFixedCommandsRight_e_1 );
      res = refalrts::splice_stvar( res, sFixCountRight_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n85 );
      res = refalrts::splice_elem( res, n84 );
      res = refalrts::splice_elem( res, n83 );
      refalrts::link_brackets( n79, n82 );
      res = refalrts::splice_elem( res, n82 );
      res = refalrts::splice_evar( res, eFixedCommandsLeft_b_1, eFixedCommandsLeft_e_1 );
      res = refalrts::splice_stvar( res, sFixCountLeft_2 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n81 );
      res = refalrts::splice_elem( res, n80 );
      res = refalrts::splice_elem( res, n79 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n78 );
      refalrts::link_brackets( n76, n77 );
      res = refalrts::splice_elem( res, n77 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n76 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n75 );
      res = refalrts::splice_elem( res, n74 );
      refalrts::push_stack( n73 );
      refalrts::push_stack( n53 );
      res = refalrts::splice_elem( res, n73 );
      res = refalrts::splice_stvar( res, sFixCountRight_1 );
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
      refalrts::push_stack( n52 );
      refalrts::push_stack( n33 );
      res = refalrts::splice_elem( res, n52 );
      res = refalrts::splice_stvar( res, sFixCountLeft_1 );
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
      refalrts::push_stack( n32 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter eVars_B_b_1;
    refalrts::use( eVars_B_b_1 );
    static refalrts::Iter eVars_B_e_1;
    refalrts::use( eVars_B_e_1 );
    static refalrts::Iter eVars_E_b_1;
    refalrts::use( eVars_E_b_1 );
    static refalrts::Iter eVars_E_e_1;
    refalrts::use( eVars_E_e_1 );
    static refalrts::Iter sCount_1;
    refalrts::use( sCount_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sNum_3;
    refalrts::use( sNum_3 );
    static refalrts::Iter sCount_2;
    refalrts::use( sCount_2 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkVariable 'e e.Index )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'p'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, '-'},
          {refalrts::icChar, 0, 0, 'v'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'b'},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'o'},
          {refalrts::icChar, 0, 0, 'n'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'f'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
          {refalrts::icSpliceSTVar, & sMode_1},
          {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_b_1, & eVars_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eVars_E_b_1, & eVars_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdTakeFixed, (void*) "CmdTakeFixed"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icSpliceSTVar, & sFixCount_1},
          {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdRepeated, (void*) "CmdRepeated"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_3, sNum_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_char( n2, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_char( n3, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_char( n4, 'p' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_char( n5, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_char( n6, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_char( n7, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_char( n8, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_char( n9, 'd' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_char( n10, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_char( n11, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_char( n12, '-' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_char( n13, 'v' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_char( n14, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_char( n15, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_char( n16, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_char( n17, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_char( n18, 'b' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_char( n19, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_char( n20, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_char( n21, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_char( n22, 'o' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_char( n23, 'n' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_char( n24, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_char( n25, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_char( n26, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_char( n27, 'f' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_char( n28, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_close_call( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_open_call( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_name( n31, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_name( n33, & TkVariable, "TkVariable" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_open_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_name( n36, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_number( n37, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_close_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_open_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_open_bracket( n40 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_open_call( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_name( n42, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_close_call( n43 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_char( n44, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_bracket( n46 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_open_bracket( n47 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n48 = 0;
        if( ! refalrts::alloc_open_bracket( n48 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n49 = 0;
        if( ! refalrts::alloc_name( n49, & CmdTakeFixed, "CmdTakeFixed" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n50 = 0;
        if( ! refalrts::alloc_name( n50, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_close_bracket( n51 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_open_bracket( n52 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_name( n53, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n54 = 0;
        if( ! refalrts::alloc_name( n54, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n55 = 0;
        if( ! refalrts::alloc_open_call( n55 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n56 = 0;
        if( ! refalrts::alloc_name( n56, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n57 = 0;
        if( ! refalrts::alloc_close_call( n57 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n58 = 0;
        if( ! refalrts::alloc_char( n58, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n59 = 0;
        if( ! refalrts::alloc_close_bracket( n59 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n60 = 0;
        if( ! refalrts::alloc_close_bracket( n60 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n61 = 0;
        if( ! refalrts::alloc_close_call( n61 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n61 );
        refalrts::push_stack( n30 );
        res = refalrts::splice_elem( res, n61 );
        refalrts::link_brackets( n47, n60 );
        res = refalrts::splice_elem( res, n60 );
        refalrts::link_brackets( n52, n59 );
        res = refalrts::splice_elem( res, n59 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_elem( res, n58 );
        refalrts::push_stack( n57 );
        refalrts::push_stack( n55 );
        res = refalrts::splice_elem( res, n57 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n56 );
        res = refalrts::splice_elem( res, n55 );
        res = refalrts::splice_stvar( res, sNum_3 );
        res = refalrts::splice_elem( res, n54 );
        res = refalrts::splice_elem( res, n53 );
        res = refalrts::splice_elem( res, n52 );
        refalrts::link_brackets( n48, n51 );
        res = refalrts::splice_elem( res, n51 );
        res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
        res = refalrts::splice_stvar( res, sFixCount_1 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n50 );
        res = refalrts::splice_elem( res, n49 );
        res = refalrts::splice_elem( res, n48 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n47 );
        refalrts::link_brackets( n39, n46 );
        res = refalrts::splice_elem( res, n46 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n40, n45 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_elem( res, n44 );
        refalrts::push_stack( n43 );
        refalrts::push_stack( n41 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n35, n38 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_elem( res, n35 );
        refalrts::link_brackets( n32, n34 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_elem( res, n30 );
        refalrts::push_stack( n29 );
        refalrts::push_stack( n0 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter eVars_B_b_1;
    refalrts::use( eVars_B_b_1 );
    static refalrts::Iter eVars_B_e_1;
    refalrts::use( eVars_B_e_1 );
    static refalrts::Iter eVars_E_b_1;
    refalrts::use( eVars_E_b_1 );
    static refalrts::Iter eVars_E_e_1;
    refalrts::use( eVars_E_e_1 );
    static refalrts::Iter sCount_1;
    refalrts::use( sCount_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sNum_3;
    refalrts::use( sNum_3 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sCount_2;
    refalrts::use( sCount_2 );
    // e.Pattern_B (~1 & TkVariable 'e e.Index )~1 (~2 & RightPtr s.Num s.FixCount e.FixedCommands )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count 'e e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_2, be_2 ) ) 
        continue;
      eFixedCommands_b_1 = bb_2;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_2;
      refalrts::use( eFixedCommands_e_1 );
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::char_right( 'e', bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'p'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, '-'},
          {refalrts::icChar, 0, 0, 'v'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'b'},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'o'},
          {refalrts::icChar, 0, 0, 'n'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'g'},
          {refalrts::icChar, 0, 0, 'h'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_b_1, & eVars_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eVars_E_b_1, & eVars_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdTakeFixed, (void*) "CmdTakeFixed"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icSpliceSTVar, & sFixCount_1},
          {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdRepeated, (void*) "CmdRepeated"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_3, sNum_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_char( n2, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_char( n3, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_char( n4, 'p' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_char( n5, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_char( n6, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_char( n7, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_char( n8, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_char( n9, 'd' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_char( n10, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_char( n11, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_char( n12, '-' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_char( n13, 'v' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_char( n14, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_char( n15, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_char( n16, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_char( n17, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_char( n18, 'b' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_char( n19, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_char( n20, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_char( n21, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_char( n22, 'o' ) )
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
        if( ! refalrts::alloc_char( n26, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_char( n27, 'g' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_char( n28, 'h' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_char( n29, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_call( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_call( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_name( n32, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_open_bracket( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_name( n34, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_number( n35, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_open_bracket( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_name( n38, & TkVariable, "TkVariable" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_char( n39, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_close_bracket( n40 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_open_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_open_bracket( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_open_call( n43 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_name( n44, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_call( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_char( n46, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_close_bracket( n47 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n48 = 0;
        if( ! refalrts::alloc_close_bracket( n48 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n49 = 0;
        if( ! refalrts::alloc_open_bracket( n49 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n50 = 0;
        if( ! refalrts::alloc_open_bracket( n50 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_name( n51, & CmdTakeFixed, "CmdTakeFixed" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_name( n52, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_close_bracket( n53 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n54 = 0;
        if( ! refalrts::alloc_open_bracket( n54 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n55 = 0;
        if( ! refalrts::alloc_name( n55, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n56 = 0;
        if( ! refalrts::alloc_name( n56, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n57 = 0;
        if( ! refalrts::alloc_open_call( n57 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n58 = 0;
        if( ! refalrts::alloc_name( n58, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n59 = 0;
        if( ! refalrts::alloc_close_call( n59 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n60 = 0;
        if( ! refalrts::alloc_char( n60, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n61 = 0;
        if( ! refalrts::alloc_close_bracket( n61 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n62 = 0;
        if( ! refalrts::alloc_close_bracket( n62 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n63 = 0;
        if( ! refalrts::alloc_close_call( n63 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n63 );
        refalrts::push_stack( n31 );
        res = refalrts::splice_elem( res, n63 );
        refalrts::link_brackets( n49, n62 );
        res = refalrts::splice_elem( res, n62 );
        refalrts::link_brackets( n54, n61 );
        res = refalrts::splice_elem( res, n61 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_elem( res, n60 );
        refalrts::push_stack( n59 );
        refalrts::push_stack( n57 );
        res = refalrts::splice_elem( res, n59 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n58 );
        res = refalrts::splice_elem( res, n57 );
        res = refalrts::splice_stvar( res, sNum_3 );
        res = refalrts::splice_elem( res, n56 );
        res = refalrts::splice_elem( res, n55 );
        res = refalrts::splice_elem( res, n54 );
        refalrts::link_brackets( n50, n53 );
        res = refalrts::splice_elem( res, n53 );
        res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
        res = refalrts::splice_stvar( res, sFixCount_1 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n52 );
        res = refalrts::splice_elem( res, n51 );
        res = refalrts::splice_elem( res, n50 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n49 );
        refalrts::link_brackets( n41, n48 );
        res = refalrts::splice_elem( res, n48 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n42, n47 );
        res = refalrts::splice_elem( res, n47 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_elem( res, n46 );
        refalrts::push_stack( n45 );
        refalrts::push_stack( n43 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n37, n40 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_elem( res, n37 );
        refalrts::link_brackets( n33, n36 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_elem( res, n31 );
        refalrts::push_stack( n30 );
        refalrts::push_stack( n0 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVars_B_b_1;
    refalrts::use( eVars_B_b_1 );
    static refalrts::Iter eVars_B_e_1;
    refalrts::use( eVars_B_e_1 );
    static refalrts::Iter eVars_E_b_1;
    refalrts::use( eVars_E_b_1 );
    static refalrts::Iter eVars_E_e_1;
    refalrts::use( eVars_E_e_1 );
    static refalrts::Iter sCount_1;
    refalrts::use( sCount_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sMode_3;
    refalrts::use( sMode_3 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sCount_2;
    refalrts::use( sCount_2 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkVariable s.Mode e.Index )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
      if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'p'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 's'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, '-'},
          {refalrts::icChar, 0, 0, 'v'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'b'},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'o'},
          {refalrts::icChar, 0, 0, 'n'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'f'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
          {refalrts::icSpliceSTVar, & sMode_1},
          {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_b_1, & eVars_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_2},
          {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eVars_E_b_1, & eVars_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdRepeated, (void*) "CmdRepeated"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icCopySTVar, & sMode_1},
          {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_char( n2, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_char( n3, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_char( n4, 'p' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_char( n5, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_char( n6, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_char( n7, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_char( n8, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_char( n9, 'd' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_char( n10, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_char( n11, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_char( n12, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_char( n13, '-' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_char( n14, 'v' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_char( n15, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_char( n16, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_char( n17, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_char( n18, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_char( n19, 'b' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_char( n20, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_char( n21, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_char( n22, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_char( n23, 'o' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_char( n24, 'n' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_char( n25, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_char( n26, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_char( n27, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_char( n28, 'f' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_char( n29, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_call( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_call( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_name( n32, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_open_bracket( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_name( n34, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_open_call( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_name( n36, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_call( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_open_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_name( n39, & TkVariable, "TkVariable" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_close_bracket( n40 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_close_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_open_bracket( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_open_bracket( n43 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_open_call( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_name( n45, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_call( n46 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_close_bracket( n47 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n48 = 0;
        if( ! refalrts::alloc_close_bracket( n48 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n49 = 0;
        if( ! refalrts::alloc_open_bracket( n49 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n50 = 0;
        if( ! refalrts::alloc_open_bracket( n50 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_name( n51, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_name( n52, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_open_call( n53 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n54 = 0;
        if( ! refalrts::alloc_name( n54, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n55 = 0;
        if( ! refalrts::alloc_close_call( n55 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n56 = 0;
        if( ! refalrts::alloc_close_bracket( n56 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n57 = 0;
        if( ! refalrts::alloc_close_bracket( n57 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n58 = 0;
        if( ! refalrts::alloc_close_call( n58 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n58 );
        refalrts::push_stack( n31 );
        res = refalrts::splice_elem( res, n58 );
        refalrts::link_brackets( n49, n57 );
        res = refalrts::splice_elem( res, n57 );
        refalrts::link_brackets( n50, n56 );
        res = refalrts::splice_elem( res, n56 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_stvar( res, sMode_3 );
        refalrts::push_stack( n55 );
        refalrts::push_stack( n53 );
        res = refalrts::splice_elem( res, n55 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n54 );
        res = refalrts::splice_elem( res, n53 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n52 );
        res = refalrts::splice_elem( res, n51 );
        res = refalrts::splice_elem( res, n50 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n49 );
        refalrts::link_brackets( n42, n48 );
        res = refalrts::splice_elem( res, n48 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n43, n47 );
        res = refalrts::splice_elem( res, n47 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        refalrts::push_stack( n46 );
        refalrts::push_stack( n44 );
        res = refalrts::splice_elem( res, n46 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n33, n41 );
        res = refalrts::splice_elem( res, n41 );
        refalrts::link_brackets( n38, n40 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
        refalrts::push_stack( n37 );
        refalrts::push_stack( n35 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_stvar( res, sFixCount_1 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_elem( res, n31 );
        refalrts::push_stack( n30 );
        refalrts::push_stack( n0 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter eVars_B_b_1;
    refalrts::use( eVars_B_b_1 );
    static refalrts::Iter eVars_B_e_1;
    refalrts::use( eVars_B_e_1 );
    static refalrts::Iter eVars_E_b_1;
    refalrts::use( eVars_E_b_1 );
    static refalrts::Iter eVars_E_e_1;
    refalrts::use( eVars_E_e_1 );
    static refalrts::Iter sCount_1;
    refalrts::use( sCount_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sMode_3;
    refalrts::use( sMode_3 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sCount_2;
    refalrts::use( sCount_2 );
    // e.Pattern_B (~1 & TkVariable s.Mode e.Index )~1 (~2 & RightPtr s.Num s.FixCount e.FixedCommands )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_2, be_2 ) ) 
        continue;
      eFixedCommands_b_1 = bb_2;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_2;
      refalrts::use( eFixedCommands_e_1 );
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'p'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 's'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, '-'},
          {refalrts::icChar, 0, 0, 'v'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'b'},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'o'},
          {refalrts::icChar, 0, 0, 'n'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'r'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'g'},
          {refalrts::icChar, 0, 0, 'h'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sFixCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
          {refalrts::icSpliceSTVar, & sMode_1},
          {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_b_1, & eVars_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_2},
          {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eVars_E_b_1, & eVars_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdRepeated, (void*) "CmdRepeated"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icCopySTVar, & sMode_1},
          {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_char( n2, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_char( n3, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_char( n4, 'p' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_char( n5, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_char( n6, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_char( n7, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_char( n8, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_char( n9, 'd' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_char( n10, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_char( n11, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_char( n12, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_char( n13, '-' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_char( n14, 'v' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_char( n15, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_char( n16, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_char( n17, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_char( n18, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_char( n19, 'b' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_char( n20, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_char( n21, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_char( n22, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_char( n23, 'o' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_char( n24, 'n' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_char( n25, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_char( n26, 'r' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_char( n27, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_char( n28, 'g' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_char( n29, 'h' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_char( n30, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_close_call( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_call( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_name( n33, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_open_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_name( n35, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_open_call( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_name( n37, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_close_call( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_open_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_name( n40, & TkVariable, "TkVariable" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_close_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_close_bracket( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_open_bracket( n43 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_open_bracket( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_open_call( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_name( n46, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_close_call( n47 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n48 = 0;
        if( ! refalrts::alloc_close_bracket( n48 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n49 = 0;
        if( ! refalrts::alloc_close_bracket( n49 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n50 = 0;
        if( ! refalrts::alloc_open_bracket( n50 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_open_bracket( n51 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_name( n52, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_name( n53, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n54 = 0;
        if( ! refalrts::alloc_open_call( n54 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n55 = 0;
        if( ! refalrts::alloc_name( n55, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n56 = 0;
        if( ! refalrts::alloc_close_call( n56 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n57 = 0;
        if( ! refalrts::alloc_close_bracket( n57 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n58 = 0;
        if( ! refalrts::alloc_close_bracket( n58 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n59 = 0;
        if( ! refalrts::alloc_close_call( n59 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n59 );
        refalrts::push_stack( n32 );
        res = refalrts::splice_elem( res, n59 );
        refalrts::link_brackets( n50, n58 );
        res = refalrts::splice_elem( res, n58 );
        refalrts::link_brackets( n51, n57 );
        res = refalrts::splice_elem( res, n57 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_stvar( res, sMode_3 );
        refalrts::push_stack( n56 );
        refalrts::push_stack( n54 );
        res = refalrts::splice_elem( res, n56 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n55 );
        res = refalrts::splice_elem( res, n54 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n53 );
        res = refalrts::splice_elem( res, n52 );
        res = refalrts::splice_elem( res, n51 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n50 );
        refalrts::link_brackets( n43, n49 );
        res = refalrts::splice_elem( res, n49 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n44, n48 );
        res = refalrts::splice_elem( res, n48 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        refalrts::push_stack( n47 );
        refalrts::push_stack( n45 );
        res = refalrts::splice_elem( res, n47 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n46 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n34, n42 );
        res = refalrts::splice_elem( res, n42 );
        refalrts::link_brackets( n39, n41 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
        refalrts::push_stack( n38 );
        refalrts::push_stack( n36 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_stvar( res, sFixCount_1 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        refalrts::push_stack( n31 );
        refalrts::push_stack( n0 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sFixCountLeft_1;
    refalrts::use( sFixCountLeft_1 );
    static refalrts::Iter eFixedCommandsLeft_b_1;
    refalrts::use( eFixedCommandsLeft_b_1 );
    static refalrts::Iter eFixedCommandsLeft_e_1;
    refalrts::use( eFixedCommandsLeft_e_1 );
    static refalrts::Iter sFixCountRight_1;
    refalrts::use( sFixCountRight_1 );
    static refalrts::Iter eFixedCommandsRight_b_1;
    refalrts::use( eFixedCommandsRight_b_1 );
    static refalrts::Iter eFixedCommandsRight_e_1;
    refalrts::use( eFixedCommandsRight_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCountLeft e.FixedCommandsLeft )~1 (~2 & TkVariable 'e e.Index )~2 (~3 & RightPtr s.Num s.FixCountRight e.FixedCommandsRight )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_3, be_3 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCountLeft_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommandsLeft_b_1 = bb_1;
      refalrts::use( eFixedCommandsLeft_b_1 );
      eFixedCommandsLeft_e_1 = be_1;
      refalrts::use( eFixedCommandsLeft_e_1 );
      if( ! refalrts::svar_left( sFixCountRight_1, bb_3, be_3 ) ) 
        continue;
      eFixedCommandsRight_b_1 = bb_3;
      refalrts::use( eFixedCommandsRight_b_1 );
      eFixedCommandsRight_e_1 = be_3;
      refalrts::use( eFixedCommandsRight_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, 'v'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'p'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdClosedE, (void*) "CmdClosedE"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'v' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'p' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'n' ) )
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
      if( ! refalrts::alloc_char( n27, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_close_call( n41 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_open_call( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_name( n43, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_open_bracket( n44 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_name( n45, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_close_bracket( n47 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_open_bracket( n48 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_open_bracket( n49 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_number( n50, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_char( n51, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_close_bracket( n52 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_close_bracket( n53 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_open_bracket( n54 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_open_bracket( n55 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_name( n56, & CmdClosedE, "CmdClosedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n57 = 0;
      if( ! refalrts::alloc_name( n57, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n58 = 0;
      if( ! refalrts::alloc_char( n58, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n59 = 0;
      if( ! refalrts::alloc_close_bracket( n59 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n60 = 0;
      if( ! refalrts::alloc_close_bracket( n60 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n61 = 0;
      if( ! refalrts::alloc_close_call( n61 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n61 );
      refalrts::push_stack( n42 );
      res = refalrts::splice_elem( res, n61 );
      refalrts::link_brackets( n54, n60 );
      res = refalrts::splice_elem( res, n60 );
      refalrts::link_brackets( n55, n59 );
      res = refalrts::splice_elem( res, n59 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n58 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n57 );
      res = refalrts::splice_elem( res, n56 );
      res = refalrts::splice_elem( res, n55 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n54 );
      refalrts::link_brackets( n48, n53 );
      res = refalrts::splice_elem( res, n53 );
      refalrts::link_brackets( n49, n52 );
      res = refalrts::splice_elem( res, n52 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n51 );
      res = refalrts::splice_elem( res, n50 );
      res = refalrts::splice_elem( res, n49 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n48 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n44, n47 );
      res = refalrts::splice_elem( res, n47 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n46 );
      res = refalrts::splice_elem( res, n45 );
      res = refalrts::splice_elem( res, n44 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_elem( res, n42 );
      refalrts::push_stack( n41 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkVariable 's e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 's', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, 'v'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'v' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_call( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_open_call( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_call( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_open_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_number( n35, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_open_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_open_bracket( n40 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_name( n41, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_name( n42, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_close_bracket( n44 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_close_bracket( n45 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_close_call( n46 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n46 );
      refalrts::push_stack( n21 );
      res = refalrts::splice_elem( res, n46 );
      refalrts::link_brackets( n39, n45 );
      res = refalrts::splice_elem( res, n45 );
      refalrts::link_brackets( n40, n44 );
      res = refalrts::splice_elem( res, n44 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n33, n38 );
      res = refalrts::splice_elem( res, n38 );
      refalrts::link_brackets( n34, n37 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n23, n32 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n28, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n27 );
      refalrts::push_stack( n25 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::push_stack( n20 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkVariable 't e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 't', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, 'v'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'v' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_call( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_open_call( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_call( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_open_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_number( n35, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_open_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_open_bracket( n40 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_name( n41, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_name( n42, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_close_bracket( n44 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_close_bracket( n45 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_close_call( n46 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n46 );
      refalrts::push_stack( n21 );
      res = refalrts::splice_elem( res, n46 );
      refalrts::link_brackets( n39, n45 );
      res = refalrts::splice_elem( res, n45 );
      refalrts::link_brackets( n40, n44 );
      res = refalrts::splice_elem( res, n44 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n33, n38 );
      res = refalrts::splice_elem( res, n38 );
      refalrts::link_brackets( n34, n37 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n23, n32 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n28, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n27 );
      refalrts::push_stack( n25 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::push_stack( n20 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    // e.Pattern_B (~1 & TkVariable 's e.Index )~1 (~2 & RightPtr s.Num s.FixCount e.FixedCommands )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::char_left( 's', bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_2, be_2 ) ) 
        continue;
      eFixedCommands_b_1 = bb_2;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_2;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, 'v'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'g'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'v' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'g' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_call( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_name( n27, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_call( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_close_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_open_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_open_bracket( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_number( n36, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_open_bracket( n40 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_open_bracket( n41 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_name( n42, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_name( n43, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_close_bracket( n45 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_close_bracket( n46 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_close_call( n47 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n47 );
      refalrts::push_stack( n22 );
      res = refalrts::splice_elem( res, n47 );
      refalrts::link_brackets( n40, n46 );
      res = refalrts::splice_elem( res, n46 );
      refalrts::link_brackets( n41, n45 );
      res = refalrts::splice_elem( res, n45 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n44 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n40 );
      refalrts::link_brackets( n34, n39 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n35, n38 );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n24, n33 );
      res = refalrts::splice_elem( res, n33 );
      refalrts::link_brackets( n29, n32 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n28 );
      refalrts::push_stack( n26 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::push_stack( n21 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    // e.Pattern_B (~1 & TkVariable 't e.Index )~1 (~2 & RightPtr s.Num s.FixCount e.FixedCommands )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::char_left( 't', bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_2, be_2 ) ) 
        continue;
      eFixedCommands_b_1 = bb_2;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_2;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, 'v'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'g'},
        {refalrts::icChar, 0, 0, 'h'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'v' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'g' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'h' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_call( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_name( n27, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_call( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_close_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_open_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_open_bracket( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_number( n36, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_open_bracket( n40 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_open_bracket( n41 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_name( n42, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_name( n43, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_close_bracket( n45 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_close_bracket( n46 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_close_call( n47 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n47 );
      refalrts::push_stack( n22 );
      res = refalrts::splice_elem( res, n47 );
      refalrts::link_brackets( n40, n46 );
      res = refalrts::splice_elem( res, n46 );
      refalrts::link_brackets( n41, n45 );
      res = refalrts::splice_elem( res, n45 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n44 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n40 );
      refalrts::link_brackets( n34, n39 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n35, n38 );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n24, n33 );
      res = refalrts::splice_elem( res, n33 );
      refalrts::link_brackets( n29, n32 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      refalrts::push_stack( n28 );
      refalrts::push_stack( n26 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::push_stack( n21 );
      refalrts::push_stack( n0 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sFixCount_1;
    refalrts::use( sFixCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sNum_3;
    refalrts::use( sNum_3 );
    // e.Pattern_B (~1 & LeftPtr s.Num s.FixCount e.FixedCommands )~1 (~2 & TkVariable 'e e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sFixCount_1, bb_1, be_1 ) ) 
        continue;
      eFixedCommands_b_1 = bb_1;
      refalrts::use( eFixedCommands_b_1 );
      eFixedCommands_e_1 = be_1;
      refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'p'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, '-'},
        {refalrts::icChar, 0, 0, 'v'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icInt, 0, 0, 0 },
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdTakeFixed, (void*) "CmdTakeFixed"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icSpliceSTVar, & sFixCount_1},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_3, sNum_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'p' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, '-' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'v' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_call( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_call( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_open_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_name( n31, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_close_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_open_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_name( n35, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_number( n36, 0UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_open_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_open_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_number( n40, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_bracket( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_close_bracket( n43 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_open_bracket( n44 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_open_bracket( n45 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_name( n46, & CmdTakeFixed, "CmdTakeFixed" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_name( n47, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_close_bracket( n48 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_open_bracket( n49 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_name( n50, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_name( n51, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_char( n52, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_close_bracket( n53 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_close_bracket( n54 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_close_call( n55 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n55 );
      refalrts::push_stack( n28 );
      res = refalrts::splice_elem( res, n55 );
      refalrts::link_brackets( n44, n54 );
      res = refalrts::splice_elem( res, n54 );
      refalrts::link_brackets( n49, n53 );
      res = refalrts::splice_elem( res, n53 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n52 );
      res = refalrts::splice_stvar( res, sNum_3 );
      res = refalrts::splice_elem( res, n51 );
      res = refalrts::splice_elem( res, n50 );
      res = refalrts::splice_elem( res, n49 );
      refalrts::link_brackets( n45, n48 );
      res = refalrts::splice_elem( res, n48 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      res = refalrts::splice_stvar( res, sFixCount_1 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n47 );
      res = refalrts::splice_elem( res, n46 );
      res = refalrts::splice_elem( res, n45 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n44 );
      refalrts::link_brackets( n38, n43 );
      res = refalrts::splice_elem( res, n43 );
      refalrts::link_brackets( n39, n42 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_elem( res, n39 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n34, n37 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      refalrts::link_brackets( n30, n33 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    // e.Pattern (~1 e.Vars )~1 (~2 e.Commands )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    ePattern_b_1 = bb_0;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_0;
    refalrts::use( ePattern_e_1 );
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'G'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'G'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'G'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '-'},
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
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_close_call( n56 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_open_call( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_name( n58, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_close_call( n87 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_open_call( n88 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_name( n89, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_char( n105, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_char( n106, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_char( n107, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_char( n108, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_char( n109, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_char( n110, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_char( n111, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_char( n112, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_char( n113, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_char( n114, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_char( n115, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_char( n116, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_char( n117, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_char( n118, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_char( n119, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_char( n120, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_char( n121, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_char( n122, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_char( n123, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_char( n124, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_char( n125, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_char( n126, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_char( n127, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_char( n128, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_char( n129, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_char( n130, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_char( n131, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_char( n132, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_char( n133, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_char( n134, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_char( n135, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n136 = 0;
    if( ! refalrts::alloc_char( n136, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n137 = 0;
    if( ! refalrts::alloc_char( n137, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n138 = 0;
    if( ! refalrts::alloc_char( n138, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n139 = 0;
    if( ! refalrts::alloc_char( n139, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n140 = 0;
    if( ! refalrts::alloc_char( n140, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n141 = 0;
    if( ! refalrts::alloc_char( n141, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n142 = 0;
    if( ! refalrts::alloc_char( n142, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n143 = 0;
    if( ! refalrts::alloc_char( n143, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n144 = 0;
    if( ! refalrts::alloc_char( n144, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n145 = 0;
    if( ! refalrts::alloc_char( n145, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n146 = 0;
    if( ! refalrts::alloc_char( n146, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n147 = 0;
    if( ! refalrts::alloc_char( n147, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n148 = 0;
    if( ! refalrts::alloc_char( n148, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n149 = 0;
    if( ! refalrts::alloc_char( n149, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n150 = 0;
    if( ! refalrts::alloc_char( n150, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n151 = 0;
    if( ! refalrts::alloc_char( n151, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n152 = 0;
    if( ! refalrts::alloc_char( n152, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n153 = 0;
    if( ! refalrts::alloc_char( n153, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n154 = 0;
    if( ! refalrts::alloc_char( n154, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n155 = 0;
    if( ! refalrts::alloc_char( n155, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n156 = 0;
    if( ! refalrts::alloc_char( n156, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n157 = 0;
    if( ! refalrts::alloc_char( n157, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n158 = 0;
    if( ! refalrts::alloc_char( n158, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n159 = 0;
    if( ! refalrts::alloc_char( n159, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n160 = 0;
    if( ! refalrts::alloc_char( n160, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n161 = 0;
    if( ! refalrts::alloc_char( n161, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n162 = 0;
    if( ! refalrts::alloc_char( n162, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n163 = 0;
    if( ! refalrts::alloc_char( n163, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n164 = 0;
    if( ! refalrts::alloc_char( n164, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n165 = 0;
    if( ! refalrts::alloc_char( n165, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n166 = 0;
    if( ! refalrts::alloc_char( n166, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n167 = 0;
    if( ! refalrts::alloc_char( n167, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n168 = 0;
    if( ! refalrts::alloc_char( n168, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n169 = 0;
    if( ! refalrts::alloc_char( n169, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n170 = 0;
    if( ! refalrts::alloc_close_call( n170 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n170 );
    refalrts::push_stack( n88 );
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
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    refalrts::push_stack( n87 );
    refalrts::push_stack( n57 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
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
    refalrts::push_stack( n56 );
    refalrts::push_stack( n30 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    refalrts::push_stack( n29 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
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

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoSaveBrackets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    // e.Commands
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoSaveBrackets, (void*) "DoSaveBrackets"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
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
    if( ! refalrts::alloc_name( n1, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n2, n3 );
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

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_B_b_1;
    refalrts::use( eCommands_B_b_1 );
    static refalrts::Iter eCommands_B_e_1;
    refalrts::use( eCommands_B_e_1 );
    static refalrts::Iter eCommands_E_b_1;
    refalrts::use( eCommands_E_b_1 );
    static refalrts::Iter eCommands_E_e_1;
    refalrts::use( eCommands_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 e.Scanned )~1 e.Commands_B (~2 & CmdOpenedE & AlgLeft s.Num 'e e.Index )~2 e.Commands_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_0_stk,
        eCommands_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eCommands_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eCommands_B_oe_1, be_0 )
    ) {
      bb_0 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_0_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & CmdOpenedE, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
        continue;
      eCommands_E_b_1 = bb_0;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_0;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoSaveBrackets_Aux, (void*) "DoSaveBrackets_Aux"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
        {refalrts::icSpliceEVar, & eCommands_B_b_1, & eCommands_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_E_b_1, & eCommands_E_e_1},
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
      if( ! refalrts::alloc_name( n1, & DoSaveBrackets_Aux, "DoSaveBrackets_Aux" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_name( n5, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_call( n9 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n9 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      refalrts::link_brackets( n2, n8 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n3, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CalcSavedBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoSaveBrackets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eScanned_b_2;
    refalrts::use( eScanned_b_2 );
    static refalrts::Iter eScanned_e_2;
    refalrts::use( eScanned_e_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sNum_3;
    refalrts::use( sNum_3 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter eCommands_b_2;
    refalrts::use( eCommands_b_2 );
    static refalrts::Iter eCommands_e_2;
    refalrts::use( eCommands_e_2 );
    // (~1 e.Scanned (~2 & CmdOpenedE & AlgLeft s.Num 'e e.Index )~2 )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & CmdOpenedE, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoSaveBrackets, (void*) "DoSaveBrackets"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
      {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CalcSavedBrackets, (void*) "CalcSavedBrackets"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
      {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
      {refalrts::icCopySTVar, & sNum_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
      {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
      {refalrts::icCopySTVar, & sNum_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopyEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eScanned_b_2, eScanned_e_2, eScanned_b_1, eScanned_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNum_3, sNum_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eCommands_b_2, eCommands_e_2, eCommands_b_1, eCommands_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & CalcSavedBrackets, "CalcSavedBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n26 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eCommands_b_2, eCommands_e_2 );
    refalrts::link_brackets( n2, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n3, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n7, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n17, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sNum_3 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n10, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sNum_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eScanned_b_2, eScanned_e_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
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

static refalrts::FnResult Brackets_Intersect(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult CalcSavedBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Brackets_Intersect, (void*) "Brackets_Intersect"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Brackets_Set, (void*) "Brackets_Set"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ExtractBrackets, (void*) "ExtractBrackets"},
      {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Brackets_Set, (void*) "Brackets_Set"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ExtractBrackets, (void*) "ExtractBrackets"},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & Brackets_Intersect, "Brackets_Intersect" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n11, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
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

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    // (~1 & CmdEmpty s.BracketNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdEmpty, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sBracketNum_1 );
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
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sInnerNum_1;
    refalrts::use( sInnerNum_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    // (~1 & CmdBrackets s.Direction s.BracketNum s.InnerNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdBrackets, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sInnerNum_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
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
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sCommand_1;
    refalrts::use( sCommand_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
    // (~1 s.Command s.Direction s.BracketNum e.Info )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCommand_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    eInfo_b_1 = bb_1;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_1;
    refalrts::use( eInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eUnique_b_1;
    refalrts::use( eUnique_b_1 );
    static refalrts::Iter eUnique_e_1;
    refalrts::use( eUnique_e_1 );
    static refalrts::Iter sRepeated_1;
    refalrts::use( sRepeated_1 );
    static refalrts::Iter eMiddle_b_1;
    refalrts::use( eMiddle_b_1 );
    static refalrts::Iter eMiddle_e_1;
    refalrts::use( eMiddle_e_1 );
    static refalrts::Iter eRest_b_1;
    refalrts::use( eRest_b_1 );
    static refalrts::Iter eRest_e_1;
    refalrts::use( eRest_e_1 );
    static refalrts::Iter sRepeated_2;
    refalrts::use( sRepeated_2 );
    // e.Unique s.Repeated e.Middle s.Repeated e.Rest
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eUnique_b_1 = bb_0_stk,
        eUnique_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eUnique_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eUnique_oe_1, be_0 )
    ) {
      bb_0 = eUnique_oe_1;
      eUnique_b_1 = bb_0_stk;
      eUnique_e_1 = eUnique_oe_1;
      refalrts::move_right( eUnique_b_1, eUnique_e_1 );
      if( ! refalrts::svar_left( sRepeated_1, bb_0, be_0 ) ) 
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eMiddle_b_1 = bb_0_stk,
          eMiddle_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eMiddle_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eMiddle_oe_1, be_0 )
      ) {
        bb_0 = eMiddle_oe_1;
        eMiddle_b_1 = bb_0_stk;
        eMiddle_e_1 = eMiddle_oe_1;
        refalrts::move_right( eMiddle_b_1, eMiddle_e_1 );
        if( ! refalrts::repeated_stvar_left( sRepeated_2, sRepeated_1, bb_0, be_0 ) ) 
          continue;
        eRest_b_1 = bb_0;
        refalrts::use( eRest_b_1 );
        eRest_e_1 = be_0;
        refalrts::use( eRest_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceEVar, & eUnique_b_1, & eUnique_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Brackets_Set, (void*) "Brackets_Set"},
          {refalrts::icSpliceSTVar, & sRepeated_1},
          {refalrts::icSpliceEVar, & eMiddle_b_1, & eMiddle_e_1},
          {refalrts::icSpliceEVar, & eRest_b_1, & eRest_e_1},
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
        if( ! refalrts::alloc_name( n1, & Brackets_Set, "Brackets_Set" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_close_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n2 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eRest_b_1, eRest_e_1 );
        res = refalrts::splice_evar( res, eMiddle_b_1, eMiddle_e_1 );
        res = refalrts::splice_stvar( res, sRepeated_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, eUnique_b_1, eUnique_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eUnique_b_1;
    refalrts::use( eUnique_b_1 );
    static refalrts::Iter eUnique_e_1;
    refalrts::use( eUnique_e_1 );
    // e.Unique
    eUnique_b_1 = bb_0;
    refalrts::use( eUnique_b_1 );
    eUnique_e_1 = be_0;
    refalrts::use( eUnique_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eUnique_b_1, & eUnique_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eUnique_b_1, eUnique_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Brackets_Intersect(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sCommon_1;
    refalrts::use( sCommon_1 );
    static refalrts::Iter eSet1_E_b_1;
    refalrts::use( eSet1_E_b_1 );
    static refalrts::Iter eSet1_E_e_1;
    refalrts::use( eSet1_E_e_1 );
    static refalrts::Iter eSet2_B_b_1;
    refalrts::use( eSet2_B_b_1 );
    static refalrts::Iter eSet2_B_e_1;
    refalrts::use( eSet2_B_e_1 );
    static refalrts::Iter eSet2_E_b_1;
    refalrts::use( eSet2_E_b_1 );
    static refalrts::Iter eSet2_E_e_1;
    refalrts::use( eSet2_E_e_1 );
    static refalrts::Iter eSet1_B_b_1;
    refalrts::use( eSet1_B_b_1 );
    static refalrts::Iter eSet1_B_e_1;
    refalrts::use( eSet1_B_e_1 );
    static refalrts::Iter sCommon_2;
    refalrts::use( sCommon_2 );
    // (~1 e.Set1_B s.Common e.Set1_E )~1 (~2 e.Set2_B s.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::svar_left( sCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( sCommon_2, sCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceSTVar, & sCommon_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Brackets_Intersect, (void*) "Brackets_Intersect"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet1_E_b_1, & eSet1_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet2_B_b_1, & eSet2_B_e_1},
          {refalrts::icSpliceEVar, & eSet2_E_b_1, & eSet2_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        if( ! refalrts::alloc_name( n1, & Brackets_Intersect, "Brackets_Intersect" ) )
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
        if( ! refalrts::alloc_close_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_close_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n6 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_stvar( res, sCommon_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_b_1;
    refalrts::use( eSet1_b_1 );
    static refalrts::Iter eSet1_e_1;
    refalrts::use( eSet1_e_1 );
    static refalrts::Iter eSet2_b_1;
    refalrts::use( eSet2_b_1 );
    static refalrts::Iter eSet2_e_1;
    refalrts::use( eSet2_e_1 );
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );
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

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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
    // '\"'
    if( ! refalrts::char_left( '"', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, '"'},
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
    if( ! refalrts::alloc_char( n1, '"' ) )
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

static refalrts::FnResult CtAlloc(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtInsert(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtBrackets(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtInsertVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StNumber(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StOpenBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StCloseBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StOpenCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StCloseCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StFunctionOpen(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StOpenADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StCloseADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StLink(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StStack(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult TkOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult_Commands(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sFixedElemCount_1;
    refalrts::use( sFixedElemCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sValue_1;
    refalrts::use( sValue_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & LeftPtr s.FixedElemCount e.FixedCommands )~3 (~4 & TkChar s.Value )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & LeftPtr, bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkChar, bb_4, be_4 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sFixedElemCount_1, bb_3, be_3 ) ) 
      break;
    eFixedCommands_b_1 = bb_3;
    refalrts::use( eFixedCommands_b_1 );
    eFixedCommands_e_1 = be_3;
    refalrts::use( eFixedCommands_e_1 );
    if( ! refalrts::svar_left( sValue_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sFixedElemCount_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StChar, (void*) "StChar"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icSpliceSTVar, & sValue_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & LeftPtr, "LeftPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & StChar, "StChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n9, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n14, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sValue_1 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sFixedElemCount_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sFixedElemCount_1;
    refalrts::use( sFixedElemCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & LeftPtr s.FixedElemCount e.FixedCommands )~3 (~4 & TkOpenCall s.Num )~4 (~5 & TkName e.Name )~5 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & LeftPtr, bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenCall, bb_4, be_4 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkName, bb_5, be_5 ) ) 
      break;
    eName_b_1 = bb_5;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_5;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sFixedElemCount_1, bb_3, be_3 ) ) 
      break;
    eFixedCommands_b_1 = bb_3;
    refalrts::use( eFixedCommands_b_1 );
    eFixedCommands_e_1 = be_3;
    refalrts::use( eFixedCommands_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sFixedElemCount_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StFunctionOpen, (void*) "StFunctionOpen"},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & LeftPtr, "LeftPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & StFunctionOpen, "StFunctionOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n9, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n14, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sFixedElemCount_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sFixedElemCount_1;
    refalrts::use( sFixedElemCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & LeftPtr s.FixedElemCount e.FixedCommands )~3 (~4 & TkName e.Name )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & LeftPtr, bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkName, bb_4, be_4 ) ) 
      break;
    eName_b_1 = bb_4;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_4;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sFixedElemCount_1, bb_3, be_3 ) ) 
      break;
    eFixedCommands_b_1 = bb_3;
    refalrts::use( eFixedCommands_b_1 );
    eFixedCommands_e_1 = be_3;
    refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sFixedElemCount_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StName, (void*) "StName"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & LeftPtr, "LeftPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & StName, "StName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n9, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n14, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sFixedElemCount_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sFixedElemCount_1;
    refalrts::use( sFixedElemCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & LeftPtr s.FixedElemCount e.FixedCommands )~3 (~4 & TkNumber s.Number )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & LeftPtr, bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkNumber, bb_4, be_4 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sFixedElemCount_1, bb_3, be_3 ) ) 
      break;
    eFixedCommands_b_1 = bb_3;
    refalrts::use( eFixedCommands_b_1 );
    eFixedCommands_e_1 = be_3;
    refalrts::use( eFixedCommands_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sFixedElemCount_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StNumber, (void*) "StNumber"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & LeftPtr, "LeftPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & StNumber, "StNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n9, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n14, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sFixedElemCount_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sFixedElemCount_1;
    refalrts::use( sFixedElemCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & LeftPtr s.FixedElemCount e.FixedCommands )~3 (~4 & TkIdentifier e.Name )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & LeftPtr, bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkIdentifier, bb_4, be_4 ) ) 
      break;
    eName_b_1 = bb_4;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_4;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sFixedElemCount_1, bb_3, be_3 ) ) 
      break;
    eFixedCommands_b_1 = bb_3;
    refalrts::use( eFixedCommands_b_1 );
    eFixedCommands_e_1 = be_3;
    refalrts::use( eFixedCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sFixedElemCount_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StIdent, (void*) "StIdent"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & LeftPtr, "LeftPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & StIdent, "StIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n9, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n14, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sFixedElemCount_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sFixedElemCount_1;
    refalrts::use( sFixedElemCount_1 );
    static refalrts::Iter eFixedCommands_b_1;
    refalrts::use( eFixedCommands_b_1 );
    static refalrts::Iter eFixedCommands_e_1;
    refalrts::use( eFixedCommands_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eResult_M_b_1;
    refalrts::use( eResult_M_b_1 );
    static refalrts::Iter eResult_M_e_1;
    refalrts::use( eResult_M_e_1 );
    static refalrts::Iter eResult_E_b_1;
    refalrts::use( eResult_E_b_1 );
    static refalrts::Iter eResult_E_e_1;
    refalrts::use( eResult_E_e_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & LeftPtr s.FixedElemCount e.FixedCommands )~3 (~4 & TkOpenBracket s.Num )~4 e.Result_M (~5 & TkCloseBracket s.Num )~5 e.Result_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & LeftPtr, bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenBracket, bb_4, be_4 ) ) 
      break;
    if( ! refalrts::svar_left( sFixedElemCount_1, bb_3, be_3 ) ) 
      break;
    eFixedCommands_b_1 = bb_3;
    refalrts::use( eFixedCommands_b_1 );
    eFixedCommands_e_1 = be_3;
    refalrts::use( eFixedCommands_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eResult_M_b_1 = bb_0_stk,
        eResult_M_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eResult_M_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eResult_M_oe_1, be_0 )
    ) {
      bb_0 = eResult_M_oe_1;
      eResult_M_b_1 = bb_0_stk;
      eResult_M_e_1 = eResult_M_oe_1;
      refalrts::move_right( eResult_M_b_1, eResult_M_e_1 );
      refalrts::Iter bb_5 = 0;
      refalrts::Iter be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkCloseBracket, bb_5, be_5 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_5, be_5 ) ) 
        continue;
      if( ! empty_seq( bb_5, be_5 ) )
        continue;
      eResult_E_b_1 = bb_0;
      refalrts::use( eResult_E_b_1 );
      eResult_E_e_1 = be_0;
      refalrts::use( eResult_E_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sFixedElemCount_1},
        {refalrts::icSpliceEVar, & eFixedCommands_b_1, & eFixedCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkBrackets, (void*) "TkBrackets"},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_call( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_call( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & TkBrackets, "TkBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_call( n15 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n15 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n11, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eFixedCommands_b_1, eFixedCommands_e_1 );
      res = refalrts::splice_stvar( res, sFixedElemCount_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::push_stack( n8 );
      refalrts::push_stack( n6 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    }
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ConvertCommands_Separated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SeparateAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eAllocates_b_1;
    refalrts::use( eAllocates_b_1 );
    static refalrts::Iter eAllocates_e_1;
    refalrts::use( eAllocates_e_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
    // (~1 e.Allocates )~1 (~2 & CtAlloc e.Info )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eInfo_b_1 = bb_2;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_2;
    refalrts::use( eInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocates_b_1, & eAllocates_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icSpliceEVar, & eInfo_b_1, & eInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
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
    static refalrts::Iter eAllocates_b_1;
    refalrts::use( eAllocates_b_1 );
    static refalrts::Iter eAllocates_e_1;
    refalrts::use( eAllocates_e_1 );
    static refalrts::Iter tOther_1;
    refalrts::use( tOther_1 );
    // (~1 e.Allocates )~1 t.Other
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    if( ! refalrts::tvar_left( tOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocates_b_1, & eAllocates_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tOther_1},
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
    res = refalrts::splice_stvar( res, tOther_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenResult_Commands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    // e.Commands
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ConvertCommands_Separated, (void*) "ConvertCommands_Separated"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
      {refalrts::icFunc, (void*) & SeparateAllocates, (void*) "SeparateAllocates"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ConvertCommands_Separated, "ConvertCommands_Separated" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & SeparateAllocates, "SeparateAllocates" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n5, n6 );
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

static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertCommands_Separated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eAllocates_b_1;
    refalrts::use( eAllocates_b_1 );
    static refalrts::Iter eAllocates_e_1;
    refalrts::use( eAllocates_e_1 );
    static refalrts::Iter eOtherCommands_b_1;
    refalrts::use( eOtherCommands_b_1 );
    static refalrts::Iter eOtherCommands_e_1;
    refalrts::use( eOtherCommands_e_1 );
    // (~1 e.Allocates )~1 e.OtherCommands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eOtherCommands_b_1 = bb_0;
    refalrts::use( eOtherCommands_b_1 );
    eOtherCommands_e_1 = be_0;
    refalrts::use( eOtherCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ConvertAllocates, (void*) "ConvertAllocates"},
      {refalrts::icSpliceEVar, & eAllocates_b_1, & eAllocates_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ConvertCommand, (void*) "ConvertCommand"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Reverse, (void*) "Reverse"},
      {refalrts::icSpliceEVar, & eOtherCommands_b_1, & eOtherCommands_e_1},
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ConvertAllocates, "ConvertAllocates" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & ConvertCommand, "ConvertCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eOtherCommands_b_1, eOtherCommands_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
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

static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFirst_1;
    refalrts::use( tFirst_1 );
    static refalrts::Iter tLast_1;
    refalrts::use( tLast_1 );
    static refalrts::Iter eMedium_b_1;
    refalrts::use( eMedium_b_1 );
    static refalrts::Iter eMedium_e_1;
    refalrts::use( eMedium_e_1 );
    // t.First e.Medium t.Last
    if( ! refalrts::tvar_left( tFirst_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_right( tLast_1, bb_0, be_0 ) ) 
      break;
    eMedium_b_1 = bb_0;
    refalrts::use( eMedium_b_1 );
    eMedium_e_1 = be_0;
    refalrts::use( eMedium_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tLast_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Reverse, (void*) "Reverse"},
      {refalrts::icSpliceEVar, & eMedium_b_1, & eMedium_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tFirst_1},
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
    if( ! refalrts::alloc_name( n1, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, tFirst_1 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eMedium_b_1, eMedium_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tLast_1 );
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
    static refalrts::Iter tOne_1;
    refalrts::use( tOne_1 );
    // t.One
    if( ! refalrts::tvar_left( tOne_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tOne_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tOne_1 );
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
    //
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

refalrts::FnResult CmdAllocateElem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdLinkBrackets(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdPushStack(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdInsertElem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdInsertEVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElNumber(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElOpenADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElCloseADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElOpenBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElCloseBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElOpenCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElCloseCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElElem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElSTVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ElemType(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // & StChar s.Char
    if( ! refalrts::function_left( & StChar, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElChar, (void*) "ElChar"},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElChar, "ElChar" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sChar_1 );
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
    // & StName e.Name
    if( ! refalrts::function_left( & StName, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElName, (void*) "ElName"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElName, "ElName" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
    // & StNumber s.Number
    if( ! refalrts::function_left( & StNumber, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElNumber, (void*) "ElNumber"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElNumber, "ElNumber" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sNumber_1 );
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
    // & StIdent e.Name
    if( ! refalrts::function_left( & StIdent, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElIdent, (void*) "ElIdent"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElIdent, "ElIdent" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StOpenADT s.Num
    if( ! refalrts::function_left( & StOpenADT, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElOpenADT, (void*) "ElOpenADT"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElOpenADT, "ElOpenADT" ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StCloseADT s.Num
    if( ! refalrts::function_left( & StCloseADT, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElCloseADT, (void*) "ElCloseADT"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElCloseADT, "ElCloseADT" ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StOpenBracket s.Num
    if( ! refalrts::function_left( & StOpenBracket, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElOpenBracket, (void*) "ElOpenBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElOpenBracket, "ElOpenBracket" ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StCloseBracket s.Num
    if( ! refalrts::function_left( & StCloseBracket, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElCloseBracket, (void*) "ElCloseBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElCloseBracket, "ElCloseBracket" ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StOpenCall s.Num
    if( ! refalrts::function_left( & StOpenCall, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElOpenCall, (void*) "ElOpenCall"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElOpenCall, "ElOpenCall" ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StCloseCall s.Num
    if( ! refalrts::function_left( & StCloseCall, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElCloseCall, (void*) "ElCloseCall"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElCloseCall, "ElCloseCall" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ConvertAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sType_1;
    refalrts::use( sType_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter eValue_b_1;
    refalrts::use( eValue_b_1 );
    static refalrts::Iter eValue_e_1;
    refalrts::use( eValue_e_1 );
    // (~1 & CtAlloc s.Type s.Number e.Value )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sType_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    eValue_b_1 = bb_1;
    refalrts::use( eValue_b_1 );
    eValue_e_1 = be_1;
    refalrts::use( eValue_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ElemType, (void*) "ElemType"},
      {refalrts::icSpliceSTVar, & sType_1},
      {refalrts::icSpliceEVar, & eValue_b_1, & eValue_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ElemType, "ElemType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
    res = refalrts::splice_stvar( res, sType_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ConvertCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 & CtInsert s.Number )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsert, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icFunc, (void*) & ElElem, (void*) "ElElem"},
      {refalrts::icSpliceSTVar, & sNumber_1},
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
    if( ! refalrts::alloc_name( n1, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElElem, "ElElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 & CtInsertVar s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertEVar, (void*) "CmdInsertEVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdInsertEVar, "CmdInsertEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    static refalrts::Iter sSTMode_1;
    refalrts::use( sSTMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 & CtInsertVar s.Usings s.STMode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sSTMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icFunc, (void*) & ElSTVar, (void*) "ElSTVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sSTMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElSTVar, "ElSTVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sSTMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    // (~1 & CtBrackets & StStack s.Number )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StStack, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdPushStack, (void*) "CmdPushStack"},
      {refalrts::icSpliceSTVar, & sNumber_1},
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
    if( ! refalrts::alloc_name( n1, & CmdPushStack, "CmdPushStack" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
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
    static refalrts::Iter sLeftNumber_1;
    refalrts::use( sLeftNumber_1 );
    static refalrts::Iter sRightNumber_1;
    refalrts::use( sRightNumber_1 );
    // (~1 & CtBrackets & StLink s.LeftNumber s.RightNumber )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StLink, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLeftNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sRightNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLinkBrackets, (void*) "CmdLinkBrackets"},
      {refalrts::icSpliceSTVar, & sLeftNumber_1},
      {refalrts::icSpliceSTVar, & sRightNumber_1},
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
    if( ! refalrts::alloc_name( n1, & CmdLinkBrackets, "CmdLinkBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRightNumber_1 );
    res = refalrts::splice_stvar( res, sLeftNumber_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GeneralizeResult_Vars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePatternVars_b_1;
    refalrts::use( ePatternVars_b_1 );
    static refalrts::Iter ePatternVars_e_1;
    refalrts::use( ePatternVars_e_1 );
    static refalrts::Iter ePatternCommands_b_1;
    refalrts::use( ePatternCommands_b_1 );
    static refalrts::Iter ePatternCommands_e_1;
    refalrts::use( ePatternCommands_e_1 );
    static refalrts::Iter eResultVars_b_1;
    refalrts::use( eResultVars_b_1 );
    static refalrts::Iter eResultVars_e_1;
    refalrts::use( eResultVars_e_1 );
    static refalrts::Iter eResultCommands_b_1;
    refalrts::use( eResultCommands_b_1 );
    static refalrts::Iter eResultCommands_e_1;
    refalrts::use( eResultCommands_e_1 );
    // (~1 e.PatternVars )~1 (~2 e.PatternCommands )~2 (~3 e.ResultVars )~3 (~4 e.ResultCommands )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    ePatternCommands_b_1 = bb_2;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_2;
    refalrts::use( ePatternCommands_e_1 );
    eResultVars_b_1 = bb_3;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_3;
    refalrts::use( eResultVars_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GeneralizeResult_Vars, (void*) "GeneralizeResult_Vars"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ReplicateVars, (void*) "ReplicateVars"},
      {refalrts::icSpliceEVar, & ePatternVars_b_1, & ePatternVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ReplicateVars, (void*) "ReplicateVars"},
      {refalrts::icSpliceEVar, & eResultVars_b_1, & eResultVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatternCommands_b_1, & ePatternCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultCommands_b_1, & eResultCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GeneralizeResult_Vars, "GeneralizeResult_Vars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
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

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // (~1 1 s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::number_left( 1UL, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
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
    static refalrts::Iter sUsing_1;
    refalrts::use( sUsing_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sUsing_2;
    refalrts::use( sUsing_2 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    // (~1 s.Using s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsing_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ReplicateVar, (void*) "ReplicateVar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icSpliceSTVar, & sUsing_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sUsing_1},
      {refalrts::icCopySTVar, & sMode_1},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sUsing_2, sUsing_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_stvar( res, sUsing_2 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsing_1 );
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

static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    // e.Vars
    eVars_b_1 = bb_0;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_0;
    refalrts::use( eVars_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ReplicateVar, (void*) "ReplicateVar"},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
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
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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

static refalrts::FnResult GeneralizeResult_CopyVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GeneralizeResult_Vars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePatternVars_b_1;
    refalrts::use( ePatternVars_b_1 );
    static refalrts::Iter ePatternVars_e_1;
    refalrts::use( ePatternVars_e_1 );
    static refalrts::Iter eResultVars_b_1;
    refalrts::use( eResultVars_b_1 );
    static refalrts::Iter eResultVars_e_1;
    refalrts::use( eResultVars_e_1 );
    static refalrts::Iter ePatternCommands_b_1;
    refalrts::use( ePatternCommands_b_1 );
    static refalrts::Iter ePatternCommands_e_1;
    refalrts::use( ePatternCommands_e_1 );
    static refalrts::Iter eResultCommands_b_1;
    refalrts::use( eResultCommands_b_1 );
    static refalrts::Iter eResultCommands_e_1;
    refalrts::use( eResultCommands_e_1 );
    static refalrts::Iter ePatternVars_b_2;
    refalrts::use( ePatternVars_b_2 );
    static refalrts::Iter ePatternVars_e_2;
    refalrts::use( ePatternVars_e_2 );
    static refalrts::Iter eResultVars_b_2;
    refalrts::use( eResultVars_b_2 );
    static refalrts::Iter eResultVars_e_2;
    refalrts::use( eResultVars_e_2 );
    // (~1 e.PatternVars )~1 (~2 e.ResultVars )~2 (~3 e.PatternCommands )~3 (~4 e.ResultCommands )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    eResultVars_b_1 = bb_2;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_2;
    refalrts::use( eResultVars_e_1 );
    ePatternCommands_b_1 = bb_3;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_3;
    refalrts::use( ePatternCommands_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GeneralizeResult_CopyVars, (void*) "GeneralizeResult_CopyVars"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetUnion, (void*) "VarSetUnion"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatternVars_b_1, & ePatternVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultVars_b_1, & eResultVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatternCommands_b_1, & ePatternCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetDifference, (void*) "VarSetDifference"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eResultVars_b_1, & eResultVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & ePatternVars_b_1, & ePatternVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultCommands_b_1, & eResultCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( ePatternVars_b_2, ePatternVars_e_2, ePatternVars_b_1, ePatternVars_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResultVars_b_2, eResultVars_e_2, eResultVars_b_1, eResultVars_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GeneralizeResult_CopyVars, "GeneralizeResult_CopyVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & VarSetUnion, "VarSetUnion" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & VarSetDifference, "VarSetDifference" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n13, n21 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, ePatternVars_b_2, ePatternVars_e_2 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eResultVars_b_2, eResultVars_e_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
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

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_B_b_1;
    refalrts::use( eSet1_B_b_1 );
    static refalrts::Iter eSet1_B_e_1;
    refalrts::use( eSet1_B_e_1 );
    static refalrts::Iter tCommon_1;
    refalrts::use( tCommon_1 );
    static refalrts::Iter eSet1_E_b_1;
    refalrts::use( eSet1_E_b_1 );
    static refalrts::Iter eSet1_E_e_1;
    refalrts::use( eSet1_E_e_1 );
    static refalrts::Iter eSet2_B_b_1;
    refalrts::use( eSet2_B_b_1 );
    static refalrts::Iter eSet2_B_e_1;
    refalrts::use( eSet2_B_e_1 );
    static refalrts::Iter eSet2_E_b_1;
    refalrts::use( eSet2_E_b_1 );
    static refalrts::Iter eSet2_E_e_1;
    refalrts::use( eSet2_E_e_1 );
    static refalrts::Iter tCommon_2;
    refalrts::use( tCommon_2 );
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceSTVar, & tCommon_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & VarSetUnion, (void*) "VarSetUnion"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet1_B_b_1, & eSet1_B_e_1},
          {refalrts::icSpliceEVar, & eSet1_E_b_1, & eSet1_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet2_B_b_1, & eSet2_B_e_1},
          {refalrts::icSpliceEVar, & eSet2_E_b_1, & eSet2_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        if( ! refalrts::alloc_name( n1, & VarSetUnion, "VarSetUnion" ) )
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
        if( ! refalrts::alloc_close_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_close_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n6 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_stvar( res, tCommon_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_b_1;
    refalrts::use( eSet1_b_1 );
    static refalrts::Iter eSet1_e_1;
    refalrts::use( eSet1_e_1 );
    static refalrts::Iter eSet2_b_1;
    refalrts::use( eSet2_b_1 );
    static refalrts::Iter eSet2_e_1;
    refalrts::use( eSet2_e_1 );
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eSet1_b_1, & eSet1_e_1},
      {refalrts::icSpliceEVar, & eSet2_b_1, & eSet2_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eSet2_b_1, eSet2_e_1 );
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_B_b_1;
    refalrts::use( eSet1_B_b_1 );
    static refalrts::Iter eSet1_B_e_1;
    refalrts::use( eSet1_B_e_1 );
    static refalrts::Iter eSet1_E_b_1;
    refalrts::use( eSet1_E_b_1 );
    static refalrts::Iter eSet1_E_e_1;
    refalrts::use( eSet1_E_e_1 );
    static refalrts::Iter eSet2_B_b_1;
    refalrts::use( eSet2_B_b_1 );
    static refalrts::Iter eSet2_B_e_1;
    refalrts::use( eSet2_B_e_1 );
    static refalrts::Iter eSet2_E_b_1;
    refalrts::use( eSet2_E_b_1 );
    static refalrts::Iter eSet2_E_e_1;
    refalrts::use( eSet2_E_e_1 );
    static refalrts::Iter tCommon_1;
    refalrts::use( tCommon_1 );
    static refalrts::Iter tCommon_2;
    refalrts::use( tCommon_2 );
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceEVar, & eSet1_B_b_1, & eSet1_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & VarSetDifference, (void*) "VarSetDifference"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet1_E_b_1, & eSet1_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet2_B_b_1, & eSet2_B_e_1},
          {refalrts::icSpliceEVar, & eSet2_E_b_1, & eSet2_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        if( ! refalrts::alloc_name( n1, & VarSetDifference, "VarSetDifference" ) )
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
        if( ! refalrts::alloc_close_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_close_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n6 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_b_1;
    refalrts::use( eSet1_b_1 );
    static refalrts::Iter eSet1_e_1;
    refalrts::use( eSet1_e_1 );
    static refalrts::Iter eSet2_b_1;
    refalrts::use( eSet2_b_1 );
    static refalrts::Iter eSet2_e_1;
    refalrts::use( eSet2_e_1 );
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eSet1_b_1, & eSet1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenerateResult_Interp(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult CmdEmptyResult(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdReturnResult(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GeneralizeResult_CopyVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommonVars_b_1;
    refalrts::use( eCommonVars_b_1 );
    static refalrts::Iter eCommonVars_e_1;
    refalrts::use( eCommonVars_e_1 );
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    // (~1 e.CommonVars )~1 (~2 e.Pattern )~2 (~3 e.CopiedVars )~3 (~4 e.Result )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eCommonVars_b_1 = bb_1;
    refalrts::use( eCommonVars_b_1 );
    eCommonVars_e_1 = be_1;
    refalrts::use( eCommonVars_e_1 );
    ePattern_b_1 = bb_2;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_2;
    refalrts::use( ePattern_e_1 );
    eCopiedVars_b_1 = bb_3;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_3;
    refalrts::use( eCopiedVars_e_1 );
    eResult_b_1 = bb_4;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_4;
    refalrts::use( eResult_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenerateResult_Interp, (void*) "GenerateResult_Interp"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & MakeDeclaration, (void*) "MakeDeclaration"},
      {refalrts::icSpliceEVar, & eCommonVars_b_1, & eCommonVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCopiedVars_b_1, & eCopiedVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GenerateResult_Interp, "GenerateResult_Interp" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & MakeDeclaration, "MakeDeclaration" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n2, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eCommonVars_b_1, eCommonVars_e_1 );
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

static refalrts::FnResult GenerateResult_Interp(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter ePattern_b_2;
    refalrts::use( ePattern_b_2 );
    static refalrts::Iter ePattern_e_2;
    refalrts::use( ePattern_e_2 );
    static refalrts::Iter eCopiedVars_b_2;
    refalrts::use( eCopiedVars_b_2 );
    static refalrts::Iter eCopiedVars_e_2;
    refalrts::use( eCopiedVars_e_2 );
    static refalrts::Iter eResult_b_2;
    refalrts::use( eResult_b_2 );
    static refalrts::Iter eResult_e_2;
    refalrts::use( eResult_e_2 );
    // (~1 e.Pattern )~1 (~2 e.CopiedVars )~2 (~3 e.Result )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eCopiedVars_b_1 = bb_2;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_2;
    refalrts::use( eCopiedVars_e_1 );
    eResult_b_1 = bb_3;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_3;
    refalrts::use( eResult_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'G'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'G'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icSpliceEVar, & eCopiedVars_b_1, & eCopiedVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'G'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, '\n'},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopyEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdEmptyResult, (void*) "CmdEmptyResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & MakeCopyVar, (void*) "MakeCopyVar"},
      {refalrts::icCopyEVar, & eCopiedVars_b_1, & eCopiedVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult_Commands, (void*) "GenResult_Commands"},
      {refalrts::icCopyEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdReturnResult, (void*) "CmdReturnResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( ePattern_b_2, ePattern_e_2, ePattern_b_1, ePattern_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eCopiedVars_b_2, eCopiedVars_e_2, eCopiedVars_b_1, eCopiedVars_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResult_b_2, eResult_e_2, eResult_b_1, eResult_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_close_call( n63 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_open_call( n64 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_name( n65, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_close_call( n92 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_open_bracket( n93 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_name( n94, & CmdEmptyResult, "CmdEmptyResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_close_bracket( n95 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_open_call( n96 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_name( n97, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_name( n98, & MakeCopyVar, "MakeCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_close_call( n99 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_open_call( n100 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_name( n101, & GenResult_Commands, "GenResult_Commands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_close_call( n102 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_open_bracket( n103 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_name( n104, & CmdReturnResult, "CmdReturnResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_close_bracket( n105 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n103, n105 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    refalrts::push_stack( n102 );
    refalrts::push_stack( n100 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_evar( res, eResult_b_2, eResult_e_2 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    refalrts::push_stack( n99 );
    refalrts::push_stack( n96 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_evar( res, eCopiedVars_b_2, eCopiedVars_e_2 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    refalrts::link_brackets( n93, n95 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_evar( res, ePattern_b_2, ePattern_e_2 );
    refalrts::push_stack( n92 );
    refalrts::push_stack( n64 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
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
    refalrts::push_stack( n63 );
    refalrts::push_stack( n30 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
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
    refalrts::push_stack( n29 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
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

refalrts::FnResult CmdDeclareEVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdDeclareVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdDeclareEVar, (void*) "CmdDeclareEVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdDeclareEVar, "CmdDeclareEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdDeclareVar, (void*) "CmdDeclareVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdDeclareVar, "CmdDeclareVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
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

refalrts::FnResult CmdCopyEVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdCopyVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdCopyEVar, (void*) "CmdCopyEVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdCopyEVar, "CmdCopyEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdCopyVar, (void*) "CmdCopyVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdCopyVar, "CmdCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
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


//End of file
