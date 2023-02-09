/*-------------------------------------------------------------------*/
/* str.h                                                             */
/* Author: Arnold Jiang                                              */
/*-------------------------------------------------------------------*/

#ifndef STR_INCLUDED
#define STR_INCLUDED
#include <stddef.h>

/* */
size_t Str_getLength(const char pcSrc[]);

/* */
char *Str_copy(char pcDest[], const char pcSrc[]);

/* */
char * Str_concat(char pcDest[], const char pcSrc[]);

/* */
size_t Str_compare(const char pcDest[], const char pcSrc[]);

/* */
char *Str_search(const char *pcHaystack, const char *pcNeedle);

#endif