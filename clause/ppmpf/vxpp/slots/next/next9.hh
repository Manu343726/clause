/*~
 * Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
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

/*~
 * @warn This file should not be included directly in code deploying library
 *       constructs from 'clause'; it is part of preprocessor based recursive
 *       inclusions and it is limited by preprocessor-driven evaluation of
 *       constant expressions in '#if' directives. This is the reason it lacks
 *       header inclusion guards.
 */

#include <clause/ppmpf/vxpp/slots/next/core/nxt90.hh>
#if defined(PPMPF_VXPP_I9CARRY)
    #undef PPMPF_VXPP_I9CARRY
    #include <clause/ppmpf/vxpp/slots/next/core/nxt91.hh>
    #if defined(PPMPF_VXPP_I9CARRY)
        #undef PPMPF_VXPP_I9CARRY
        #include <clause/ppmpf/vxpp/slots/next/core/nxt92.hh>
        #if defined(PPMPF_VXPP_I9CARRY)
            #undef PPMPF_VXPP_I9CARRY
            #include <clause/ppmpf/vxpp/slots/next/core/nxt93.hh>
            #if defined(PPMPF_VXPP_I9CARRY)
                #undef PPMPF_VXPP_I9CARRY
                #include <clause/ppmpf/vxpp/slots/next/core/nxt94.hh>
            #endif
        #endif
    #endif
#endif
