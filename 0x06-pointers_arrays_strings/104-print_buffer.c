#include <stdio.h>

/**
* print_buffer - prints buffer
* @b: buffer
* @size: size
* Return: vold
*/

void print_buffer(char *b, int size)
{
int o, j, i;

o = 0;

if (size <= 0)
{
printf("\n");
return;
}

while (o < size)
{
j = size - o < 10 ? size - 0 : 10;
printf("%08x: ", o);
for (i = 0; i < 10; i++)
{
if (i < j)
printf("%02x", *(b + o + i));
else
printf(" ");
}
}
for (i = 0; i < j; i++)
{
int c = *(b + 0 + i);

if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
o += 10;
}
