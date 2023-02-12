/*-------------------------------------------------------------------*/
/* strp.c                                                            */
/* Author: Arnold Jiang                                              */
/*-------------------------------------------------------------------*/

#include "str.h"
#include <assert.h>

size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

char *Str_copy(char *pcDest, const char *pcSrc) {
   assert(pcSrc != NULL);
   assert(pcDest != NULL);
   while (*pcSrc != '\0') {
      *pcDest = *pcSrc;
      pcSrc++;
      pcDest++;
   }
   *pcDest = '\0';
   return pcDest;
}

char *Str_concat(char* pcDest, const char* pcSrc) {
   return pcDest;
}

size_t Str_compare(const char* Str2, const char* Str1) {
   return 0;
}


char *Str_search(const char *pcHaystack, const char *pcNeedle) {
   const char* pc = pcHaystack;
    /* Increment pc so it points to the appropriate character. */
   return (char*)pc;
}