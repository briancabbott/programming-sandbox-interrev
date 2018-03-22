
#ifndef __STD_INCLUDES_H__
#define __STD_INCLUDES_H__

#ifdef __C_99__ // // C Std. 1999 Includes 

    // ISO C99 Standard: 7.2 Diagnostics	<assert.h>
    #include <assert.h>

    // ISO C99:  7.3 Complex arithmetic	<complex.h>
    #include <complex.h>

    // ISO C99 Standard 7.4: Character handling	<ctype.h>
    #include <ctype.h>

    // ISO C99 Standard: 7.5 Errors	<errno.h>
    #include <errno.h>

    // ISO C99 7.6: Floating-point environment	<fenv.h>
    #include <fenv.h>

    // ISO C99: 7.8 Format conversion of integer types	<inttypes.h>
    #include <inttypes.h>

    // ISO C99 Standard: 7.10/5.2.4.2.1 Sizes of integer types	<limits.h>
    #include <limits.h>
    
    // ISO C99 Standard: 7.11 Localization	<locale.h>
    #include <locale.h>

    #include <stddef.h>
    #include <stdint.h>
    #include <stdio.h>
    #include <time.h>
        
#elif __C_11__ // C Std. 2011 Includes 
    #include <assert.h>
    #include <complex.h>
    #include <ctype.h>
    #include <errno.h>
    #include <fenv.h>
    #include <float.h>
    #include <inttypes.h>
    #include <iso646.h>
    #include <limits.h>
    #include <locale.h>
    #include <math.h>
    #include <setjmp.h>
    #include <signal.h>
    #include <stdalign.h>
    #include <stdarg.h>
    #include <stdatomic.h>
    #include <stdbool.h>
    #include <stddef.h>
    #include <stdint.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdnoreturn.h>
    #include <string.h>
    #include <tgmath.h>
    #include <threads.h>
    #include <time.h>
    #include <uchar.h>
    #include <wchar.h>
    #include <wctype.h>
#endif

#endif