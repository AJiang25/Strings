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
   char *pcTmp;
   assert(pcSrc != NULL);
   assert(pcDest != NULL);
   pcTmp = pcDest;
   while (*pcSrc != '\0') {
      *pcTmp = *pcSrc;
      pcSrc++;
      pcTmp++;
   }
   *pcTmp = '\0';
   return pcDest;
}

char *Str_concat(char *pcDest, const char *pcSrc) {
   char *pcTmp;
   assert(pcSrc != NULL);
   assert(pcDest != NULL);
   pcTmp = pcDest;
   while (*pcTmp != '\0') {
      pcTmp++;
   } 
   while (*pcSrc != '\0') {
      *pcTmp = *pcSrc;
      pcTmp++;
      pcSrc++;
   }
   *pcTmp = '\0';
   return pcDest;
}

size_t Str_compare(const char *Str2, const char *Str1) {
    assert(Str2 != NULL);
    assert(Str1 != NULL);
    while(*Str2 == *Str1) {
        if (*Str2 == '\0') {
            return 0;
        }
        Str2++;
        Str1++;
    }
    return (size_t) (*Str2 - *Str1);
}

char *Str_search(const char *pcHaystack, const char *pcNeedle) {
   const char *pc;
   size_t needleLen;
   assert(pcHaystack != NULL);
   assert(pcNeedle != NULL);
   pc = pcHaystack;
   needleLen = Str_getLength(pcNeedle);

   /* corner case for when pcNeedle is empty, returns pcHaystack*/
   if (needleLen == 0) {
        return (char*)pc;
   }

   while (*pc != '\0') {
      const char *pcHay = pc; 
      const char *pcNeed = pcNeedle; 

      /* increments pcNeed and pcHay */
      while (*pcNeed == *pcHay && *pcNeed != '\0' && *pcHay != '\0') {
         pcNeed++;
         pcHay++;
      }
      /* when *pcNeedle hits '\0', return pc */
      if (*pcNeed == '\0') {
            return (char*) pc;
      }
      pc++;
   }
   return NULL;
}