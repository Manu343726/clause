/* --
 * Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
 *
 * This file is part of odreex.
 *
 * odreex is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * odreex is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * odreex. If not, see http://www.gnu.org/licenses/.
 *
 */

#ifndef _ODREEX_PPMPF_COLLECTIONS_SEQUENCE_ESSENCE_HH_
#define _ODREEX_PPMPF_COLLECTIONS_SEQUENCE_ESSENCE_HH_

#ifndef _ODREEX_PPMPF_COLLECTIONS_SEQUENCE_FUNCTIONS_HH_
#error ppmpf: <odreex/ppmpf/collections/sequence/functions.hh> must precede.
#endif

#define PPMPF_S2T_(a,b) PPMPF_DREF(a),PPMPF_DREF(b)

#define PPMPF_SEQ_FOLD_(f,s,l,i) \
        PPMPF_FOLD_( PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , PPMPF_FOLD_DFUNC \
                                 , PPMPF_JUST )(f) \
                   , s \
                   , l \
                   , PPMPF_SEQ_GET \
                   , PPMPF_SEQ_POP \
                   , PPMPF_SEQ_EMPTY \
                   , PPMPF_FLDT \
                   , PPMPF_CAT(PPMPF_3F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_2F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_1F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_0F,PPMPF_PNX(9)) \
                   , PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , i##_ \
                                 , i ) \
                   , PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , PPMPF_FOLD_DWRAP \
                                 , PPMPF_JUST )(f), )

#define PPMPF_SEQ_FOLDR__(f,l) \
        PPMPF_SEQ_GET( PPMPF_SEQ_FOLD_( f \
                                      , PPMPF_SEQ_GET(l) \
                                      , PPMPF_SEQ_POP(l) \
                                      , PPMPF_FLDAR ) )
#define PPMPF_FLDMS_(f,sl,g,...) \
            PPMPF_DREF(PPMPF_SEQ_GET(sl)) \
            (PPMPF_APPLY( f \
                        , PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))))

#endif /* _ODREEX_PPMPF_COLLECTIONS_SEQUENCE_ESSENCE_HH_ */