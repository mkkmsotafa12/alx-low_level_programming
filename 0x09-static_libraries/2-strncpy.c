#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * @_strncpy - Entry point
 * Rteurn: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)

{

int _strncpy;

_strncpy = 0;

while (_strncpy < n && src[_strncpy] != '\0')
{
dest[_strncpy] = src[_strncpy];
_strncpy++;
}

while (_strncpy < n)
{
dest[_strncpy] = '\0';
_strncpy++;
}

return (dest);
}
