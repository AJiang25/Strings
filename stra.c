/*-------------------------------------------------------------------*/
/* stra.c                                                            */
/* Author: Arnold Jiang                                              */
/*-------------------------------------------------------------------*/

#include "str.h"
#include <assert.h>

size_t Str_getLength(const char pcSrc[]) {
   size_t uLength;
   assert(pcSrc != NULL);
   uLength = 0;
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

char *Str_copy(char pcDest[], const char pcSrc[]) {
    size_t i;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    i = 0;
    while (pcSrc[i] != '\0') {
        pcDest[i] = pcSrc[i];
        i++;
    }
    pcDest[i] = '\0';
    return pcDest;
}

char *Str_concat(char pcDest[], const char pcSrc[]) {
    size_t lastIndex;
    size_t totalLength;
    size_t i;
    size_t j; 
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    i = 0;
    lastIndex = Str_getLength(pcDest);
    totalLength = lastIndex + Str_getLength(pcSrc);
    for (j = lastIndex; j < totalLength; j++) {
        pcDest[j] = pcSrc[i];
        i++;
    }
    pcDest[j] = '\0';
    return pcDest;
}

/*size_t Str_compare(const char Str2[], const char Str1[]) {
    size_t str1Length;
    size_t str2Length;
    size_t max;
    size_t i;
    assert(Str2 != NULL);
    assert(Str1 != NULL);
    str1Length = Str_getLength(Str1);
    str2Length = Str_getLength(Str2);
    if (str1Length > str2Length) 
        max = str1Length;
    else
        max = str2Length;
    for (i = 0; i < max; i++){
        size_t diff = (size_t) (Str2[i] - Str1[i]);
        if (diff != 0) {
            return diff;
        }
    }
    return 0;
}*/
size_t Str_compare(const char Str2[], const char Str1[]) {
    int i; 
    assert(Str2 != NULL);
    assert(Str1 != NULL);
    for (i = 0; Str2[i] == Str1[i]; i++) {
        if (Str2[i] == '\0') {
            return 0;
        }
    }
    return Str2[i] - Str1[i];
}

char *Str_search(const char pcHaystack[], const char pcNeedle[]) {
   size_t i;
   size_t haystackLen;  
   size_t needleLen; 
   assert(pcHaystack != NULL);
   assert(pcNeedle != NULL);
   haystackLen = Str_getLength(pcHaystack);
   needleLen = Str_getLength(pcNeedle);
   if (needleLen == 0) {
        return pcHaystack;
   }
   for (i = 0; i < haystackLen; i++) {
        size_t j;
        for (j = 0; j < needleLen; j++) {
            if (pcHaystack[i + j] != pcNeedle[j]) {
                break;
            }
        }
        if (j == needleLen) {
            return &pcHaystack[i];
        }
   }
   return NULL;
}
