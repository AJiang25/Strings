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
   pcTmp = pcDest;
   assert(pcSrc != NULL);
   assert(pcDest != NULL);
   while (*pcSrc != '\0') {
      *pcTmp = *pcSrc;
      pcSrc++;
      pcTmp++;
   }
   *pcTmp = '\0';
   return pcDest;
}

char *Str_concat(char* pcDest, const char* pcSrc) {
   char *pcTmp;
   pcTmp = pcDest;
   assert(pcSrc != NULL);
   assert(pcDest != NULL);
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

size_t Str_compare(const char* Str2, const char* Str1) {
   size_t str1Length = Str_getLength(Str1);
   size_t str2Length = Str_getLength(Str2);
   size_t max;
   size_t i;
   assert(Str2 != NULL);
   assert(Str1 != NULL);
   if (str1Length > str2Length) 
      max = str1Length;
   else
      max = str2Length;
   for (i = 0; i < max; i++){
      size_t diff = (size_t) (*Str2 - *Str1);
      Str2++;
      Str1++;
      if (diff != 0) {
         return diff;
      }
   }
   return 0;
}

char *Str_search(const char *pcHaystack, const char *pcNeedle) {
   const char* pc = pcHaystack;
   size_t i;
   size_t j;
   size_t haystackLen = Str_getLength(pcHaystack);
   size_t needleLen = Str_getLength(pcNeedle);
   assert(pcHaystack != NULL);
   assert(pcNeedle != NULL);
   if (needleLen == 0) {
        return (char*)pc;
   }
   for (i = 0; i < haystackLen; i++) {
      for (j = 0; j < needleLen; j++) {
         while (*pc == *pcNeedle) {
            pc++;
            pcNeedle++;
         }
      }
      if (*pc != *pcNeedle) {
         pc++;
      }
      if (j == needleLen) {
            return (char*)pc;
        }

   }
   return NULL;
}