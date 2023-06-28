#include "main.h"

/**
 *  *_strcpy - copy the string pointed by src
 *  @dest: char type string
 *  @src: char type string
 *  Description: copy the string pointed to by pointer 'src' to
 *  the butter pointed to by 'dest'
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)

{

int z = -1;

do {
dest[z] = src[z];
}
while
{
(src[z] != '\0');
}
return (dest);

}
