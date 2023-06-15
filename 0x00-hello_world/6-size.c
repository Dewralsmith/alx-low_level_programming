#include <stdio.h>
/**
 * main - A programm that print the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char: %lu byte(s)\n", (char)sizeof(a));
printf("size of a int: %lu byte(s)\n", (int)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (long int)sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (long long int)sizeof(d));
printf("size of a float: %lu byte(s)\n", (float)sizeof(e));
return (0);
}
