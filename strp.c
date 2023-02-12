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
   while ((*pcDest = *pcSrc) != '\0') {
      pcSrc++;
      pcDest++;
   }
   return pcDest;
}

char *Str_concat(char* pcDest, const char* pcSrc) {

}

size_t Str_compare(const char* Str2, const char* Str1) {

}


char *Str_search(const char *pcHaystack, const char *pcNeedle) {
   const char* pc = pcHaystack;
    /* Increment pc so it points to the appropriate character. */
   return (char*)pc;
}