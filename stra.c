/* 
    stra.c 
    Author: Arnold Jiang
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>

size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

char *Str_copy(char pcDest[], const char pcSrc[])
{
    size_t length = Str_getLength(pcSrc);
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    for (int i = 0; i < length; i++)
    {
        pcDest[i] = pcSrc[i];
    }
    return pcDest;
}

size_t Str_concat(const char String[])
{

}

size_t Str_compare(const char String[])
{

}

size_t Str_search(const char String[])
{

}
