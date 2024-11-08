/*-------------------------------------------------------------------*/
/* str.h                                                             */
/* Author: Arnold Jiang                                              */
/*-------------------------------------------------------------------*/

#ifndef STR_INCLUDED
#define STR_INCLUDED
#include <stddef.h>
#include <assert.h>

/* Returns the length of string pcSrc. pcSrc is the source array 
of characters. */
size_t Str_getLength(const char pcSrc[]);

/* Copies string pcSrc into string pcDest. Returns a char pointer
to pcDest. */
char *Str_copy(char pcDest[], const char pcSrc[]);

/* Concats string pcSrc with string pcDest. Returns a char pointer
to pcDest. */
char *Str_concat(char pcDest[], const char pcSrc[]);

/* Compares string Str1 with string Str2. Returns 0 if there is no
difference, else returns an size_t value other than 0 if there is
a difference in the two strings*/
size_t Str_compare(const char Str2[], const char Str1[]);

/* Searches for string pcNeedle in string pcHaystack. Returns a 
char pointer to pcHaystack if pcNeedle length is 0, or a char 
pointer to the index in  pcHaystack if pcNeedle exists in 
pcHaystack, else returns NULL. */
char *Str_search(const char pcHaystack[], const char pcNeedle[]);

#endif