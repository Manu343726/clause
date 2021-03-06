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

#ifndef CLAUSE_AMPLE_OPRT_FUNDAMENTALS_HH
#define CLAUSE_AMPLE_OPRT_FUNDAMENTALS_HH

#include <clause/ample/base/basic_number.hh>
#include <clause/ample/base/start_types.hh>
#include <clause/ample/logic/when.hh>
#include <clause/ample/ensure.hh>

namespace clause {
namespace ample {

template<typename Type_T, typename Type_Q>
using add
    = typename ensure<Type_T>::template oprt_add<Type_Q>::type;

template<typename Type_T, typename Type_Q>
using sub
    = typename ensure<Type_T>::template oprt_sub<Type_Q>::type;

template<typename Type_T, typename Type_Q>
using mul
    = typename ensure<Type_T>::template oprt_mul<Type_Q>::type;

template<typename Type_T, typename Type_Q>
using div
    = typename ensure<Type_T>::template oprt_div<Type_Q>::type;

template<typename Type_T, typename Type_Q>
using mod
    = typename ensure<Type_T>::template oprt_mod<Type_Q>::type;

template<typename Type_T>
using next
    = typename ensure<Type_T>::template oprt_next<>::type;

template<typename Type_T>
using prev
    = typename ensure<Type_T>::template oprt_prev<>::type;

template<typename Type_T>
using size_of
    = typename ensure<Type_T>::template oprt_size_of<>::type;

template<typename Type_T>
using factor_of
    = typename ensure<Type_T>::template oprt_factor_of<>::type;

template<typename Type_T>
using base_of
    = typename ensure<Type_T>::template oprt_base_of<>::type;

template<typename Type_T>
using enclosed_base_of
    = typename ensure<Type_T>::template oprt_base_of<>::type;

template<typename F, typename... X>
using apply
    = typename ensure<F>::template oprt_apply<X...>::type;

/*~
 * @desc Check then two types match absolutely.
 * @tprm Type_A: A type on the left
 * @tprm Type_B: A type on the right
 * @inst It should instantiate to either boolean<true> when they match, or to
 *       boolean<false> when they don't.
 */ 
template<typename Type_A, typename Type_B>
using types_match
    = apply<hidden::types_match__,Type_A, Type_B>;
    
/*~
 * @desc Check then two values match absolutely.
 * @tprm Type_A: A type on the left
 * @tprm Type_B: A type on the right
 * @inst It should instantiate to either boolean<true> when they match, or to
 *       boolean<false> when they don't.
 */ 
template<typename Type_A, typename Type_B>
using values_match
    = apply<hidden::values_match__,Type_A, Type_B>;

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_OPRT_FUNDAMENTALS_HH */
