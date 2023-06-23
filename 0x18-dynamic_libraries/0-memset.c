#include "main.h"
#include <string.h>
/**
 *_memset - memory for b
 *@s: string
 *@b: char
 *@n: intiger
 *Return: the valu of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	s[i] = b;

	return (s);
}
