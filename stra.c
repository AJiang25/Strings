/*-------------------------------------------------------------------*/
/* stra.c                                                            */
/* Author: Arnold Jiang                                              */
/*-------------------------------------------------------------------*/

#include "str.h"
#include <assert.h>

size_t Str_getLength(const char pcSrc[]) {
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

char *Str_copy(char pcDest[], const char pcSrc[]) {
    size_t length = Str_getLength(pcSrc);
    int i;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    for (i = 0; i < length; i++) {
        pcDest[i] = pcSrc[i];
    }
    return pcDest;
}

char * Str_concat(char pcDest[], const char pcSrc[]) {
    size_t lastIndex = Str_getLength(pcDest);
    size_t totalLength = lastIndex + Str_getLength(pcSrc);
    int i = 0; 
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    for (lastIndex; lastIndex < totalLength; lastIndex++) {
        pcDest[lastIndex] = pcSrc[i];
        i++;
    }
    pcDest[lastIndex] = '\n';
    return pcDest;
}

size_t Str_compare(const char Str2[], const char Str1[]) {
    size_t str1Length = Str_getLength(Str1);
    size_t str2Length = Str_getLength(Str2);
    size_t max;
    int i;
    assert(Str2 != NULL);
    assert(Str1 != NULL);
    if (str1Length > str2Length) 
        max = str1Length;
    else
        max = str2Length;
    for (i = 0; i < max; i++){
        int diff = Str2[i] - Str1[i];
        if (diff != 0) {
            return diff;
        }
    }
    return 0;
}

char *Str_search(const char *pcHaystack, const char *pcNeedle) {
   const char* pc = pcHaystack;
    /* Increment pc so it points to the appropriate character. */
   return (char*)pc;
}
