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

/*~
 * @warn This file should not be included directly in code deploying library
 *       constructs from 'clause'; it is part of a high level meta-macro
 *       construct where multiple #if directives control its actual inclusion.
 */

#undef  PPMPF_VXPP_S2F04
#undef  PPMPF_VXPP_S2F03
#undef  PPMPF_VXPP_S2F02
#undef  PPMPF_VXPP_S2F01
#undef  PPMPF_VXPP_S2F00

#if   (_PPMPF_FARG20() / 10000) % 10 == 0
    #define PPMPF_VXPP_S2F04 0
#elif (_PPMPF_FARG20() / 10000) % 10 == 1
    #define PPMPF_VXPP_S2F04 1
#elif (_PPMPF_FARG20() / 10000) % 10 == 2
    #define PPMPF_VXPP_S2F04 2
#elif (_PPMPF_FARG20() / 10000) % 10 == 3
    #define PPMPF_VXPP_S2F04 3
#elif (_PPMPF_FARG20() / 10000) % 10 == 4
    #define PPMPF_VXPP_S2F04 4
#elif (_PPMPF_FARG20() / 10000) % 10 == 5
    #define PPMPF_VXPP_S2F04 5
#elif (_PPMPF_FARG20() / 10000) % 10 == 6
    #define PPMPF_VXPP_S2F04 6
#elif (_PPMPF_FARG20() / 10000) % 10 == 7
    #define PPMPF_VXPP_S2F04 7
#elif (_PPMPF_FARG20() / 10000) % 10 == 8
    #define PPMPF_VXPP_S2F04 8
#elif (_PPMPF_FARG20() / 10000) % 10 == 9
    #define PPMPF_VXPP_S2F04 9
#endif

#if   (_PPMPF_FARG20() / 1000) % 10 == 0
    #define PPMPF_VXPP_S2F03 0
#elif (_PPMPF_FARG20() / 1000) % 10 == 1
    #define PPMPF_VXPP_S2F03 1
#elif (_PPMPF_FARG20() / 1000) % 10 == 2
    #define PPMPF_VXPP_S2F03 2
#elif (_PPMPF_FARG20() / 1000) % 10 == 3
    #define PPMPF_VXPP_S2F03 3
#elif (_PPMPF_FARG20() / 1000) % 10 == 4
    #define PPMPF_VXPP_S2F03 4
#elif (_PPMPF_FARG20() / 1000) % 10 == 5
    #define PPMPF_VXPP_S2F03 5
#elif (_PPMPF_FARG20() / 1000) % 10 == 6
    #define PPMPF_VXPP_S2F03 6
#elif (_PPMPF_FARG20() / 1000) % 10 == 7
    #define PPMPF_VXPP_S2F03 7
#elif (_PPMPF_FARG20() / 1000) % 10 == 8
    #define PPMPF_VXPP_S2F03 8
#elif (_PPMPF_FARG20() / 1000) % 10 == 9
    #define PPMPF_VXPP_S2F03 9
#endif

#if   (_PPMPF_FARG20() / 100) % 10 == 0
    #define PPMPF_VXPP_S2F02 0
#elif (_PPMPF_FARG20() / 100) % 10 == 1
    #define PPMPF_VXPP_S2F02 1
#elif (_PPMPF_FARG20() / 100) % 10 == 2
    #define PPMPF_VXPP_S2F02 2
#elif (_PPMPF_FARG20() / 100) % 10 == 3
    #define PPMPF_VXPP_S2F02 3
#elif (_PPMPF_FARG20() / 100) % 10 == 4
    #define PPMPF_VXPP_S2F02 4
#elif (_PPMPF_FARG20() / 100) % 10 == 5
    #define PPMPF_VXPP_S2F02 5
#elif (_PPMPF_FARG20() / 100) % 10 == 6
    #define PPMPF_VXPP_S2F02 6
#elif (_PPMPF_FARG20() / 100) % 10 == 7
    #define PPMPF_VXPP_S2F02 7
#elif (_PPMPF_FARG20() / 100) % 10 == 8
    #define PPMPF_VXPP_S2F02 8
#elif (_PPMPF_FARG20() / 100) % 10 == 9
    #define PPMPF_VXPP_S2F02 9
#endif

#if   (_PPMPF_FARG20() / 10) % 10 == 0
    #define PPMPF_VXPP_S2F01 0
#elif (_PPMPF_FARG20() / 10) % 10 == 1
    #define PPMPF_VXPP_S2F01 1
#elif (_PPMPF_FARG20() / 10) % 10 == 2
    #define PPMPF_VXPP_S2F01 2
#elif (_PPMPF_FARG20() / 10) % 10 == 3
    #define PPMPF_VXPP_S2F01 3
#elif (_PPMPF_FARG20() / 10) % 10 == 4
    #define PPMPF_VXPP_S2F01 4
#elif (_PPMPF_FARG20() / 10) % 10 == 5
    #define PPMPF_VXPP_S2F01 5
#elif (_PPMPF_FARG20() / 10) % 10 == 6
    #define PPMPF_VXPP_S2F01 6
#elif (_PPMPF_FARG20() / 10) % 10 == 7
    #define PPMPF_VXPP_S2F01 7
#elif (_PPMPF_FARG20() / 10) % 10 == 8
    #define PPMPF_VXPP_S2F01 8
#elif (_PPMPF_FARG20() / 10) % 10 == 9
    #define PPMPF_VXPP_S2F01 9
#endif

#if   _PPMPF_FARG20() % 10 == 0
    #define PPMPF_VXPP_S2F00 0
#elif _PPMPF_FARG20() % 10 == 1
    #define PPMPF_VXPP_S2F00 1
#elif _PPMPF_FARG20() % 10 == 2
    #define PPMPF_VXPP_S2F00 2
#elif _PPMPF_FARG20() % 10 == 3
    #define PPMPF_VXPP_S2F00 3
#elif _PPMPF_FARG20() % 10 == 4
    #define PPMPF_VXPP_S2F00 4
#elif _PPMPF_FARG20() % 10 == 5
    #define PPMPF_VXPP_S2F00 5
#elif _PPMPF_FARG20() % 10 == 6
    #define PPMPF_VXPP_S2F00 6
#elif _PPMPF_FARG20() % 10 == 7
    #define PPMPF_VXPP_S2F00 7
#elif _PPMPF_FARG20() % 10 == 8
    #define PPMPF_VXPP_S2F00 8
#elif _PPMPF_FARG20() % 10 == 9
    #define PPMPF_VXPP_S2F00 9
#endif
