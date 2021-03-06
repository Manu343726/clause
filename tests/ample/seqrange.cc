/*~
 * Copyright (C) 2013 - 2016 George Makrydakis <george@irrequietus.eu>
 * 
 * This file is part of 'clause', a highly generic C++ meta-programming library,
 * subject to the terms and conditions of the Mozilla Public License v 2.0. If
 * a copy of the MPLv2 license text was not distributed with this file, you can
 * obtain it at: http://mozilla.org/MPL/2.0/.
 * 
 * The 'clause' library is an experimental library in active development with
 * a source code repository at: https://github.com/irrequietus/clause.git and
 * issue tracker at https://github.com/irrequietus/clause/issues.
 * 
 */

#include <clause/ample/test.hh>
#include <clause/ample/base/seqrange.hh>

CLAUSE_TEST_DEFN( check_all_seqrange
                , "fundamental types in non-type template parameter lists") {

    CLAUSE_TEST_DECL( intseq1, intseq2, charseq1, charseq2
                    , test_int1, test_short1, test_unsigned1, test_long1
                    , test_int81, test_int161, test_int321, test_int641
                    , test_uint81, test_uint161, test_uint321, test_uint641
                    , test_int2, test_short2, test_unsigned2, test_long2
                    , test_int82, test_int162, test_int322, test_int642
                    , test_uint82, test_uint162, test_uint322, test_uint642
                    , test_size1, test_size2 );

    // Generating the boilerplate for the tests using the preprocessor.
    #define PPMPF_VXPP_SET0(a) \
    ()( CLAUSE_TEST_TYPE( test_##a##1 \
                        , PPMPF_QUOTE(a##_range_t<0,10> containing 0,1,...,9) \
                        , true \
                        , clause::ample::a##_range_t<0,10> \
                        , clause::ample::a##_seq<0,1,2,3,4,5,6,7,8,9> ); \
        CLAUSE_TEST_TYPE( test_##a##2 \
                        , PPMPF_QUOTE(a##_range_t<10,0> containing 9,8,...,0) \
                        , true \
                        , clause::ample::a##_range_t<10,0> \
                        , clause::ample::a##_seq<9,8,7,6,5,4,3,2,1,0>  ); \
                        ) \
    ( int, short, unsigned, long \
    , int8, int16, int32, int64, uint8, uint16, uint32, uint64 \
    , size )

    #define PPMPF_VXPP_SETS() (0)
    #include PPMPF_VXPP_FMAPSETS()

    CLAUSE_TEST_TYPE( intseq1
                    , "intseq_range_t<0,10> containing 0,1,...,9"
                    , true
                    , clause::ample::intgr_range_t<0,10>
                    , clause::ample::intgr_seq<0,1,2,3,4,5,6,7,8,9> );

    CLAUSE_TEST_TYPE( intseq2
                    , "intseq_range_t<10,0> containing 9,8,...,0"
                    , true
                    , clause::ample::intgr_range_t<10,0>
                    , clause::ample::intgr_seq<9,8,7,6,5,4,3,2,1,0> );

    CLAUSE_TEST_TYPE( charseq1
                    , "chars_range_t<'a','z'> containing a,b,...,z"
                    , true
                    , clause::ample::chars_range_t<'a','z'>
                    , clause::ample::chars_seq<'a', 'b', 'c', 'd', 'e',
                                               'f', 'g', 'h', 'i', 'j',
                                               'k', 'l', 'm', 'n', 'o',
                                               'p', 'q', 'r', 's', 't',
                                               'u', 'v', 'w', 'x', 'y', 'z'> );
    CLAUSE_TEST_TYPE( charseq2
                    , "chars_range_t<'z','a'> containing z,y,...,a"
                    , true
                    , clause::ample::chars_range_t<'z','a'>
                    , clause::ample::chars_seq<'z', 'y', 'x', 'w', 'v',
                                               'u', 't', 's', 'r', 'q',
                                               'p', 'o', 'n', 'm', 'l',
                                               'k', 'j', 'i', 'h', 'g',
                                               'f', 'e', 'd', 'c', 'b', 'a'> );
};
