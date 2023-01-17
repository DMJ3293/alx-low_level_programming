#include "main.h"


/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area copy from
 * @n: number of bytes to copy
 *
 * Return: numder of bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	}

	return (dest);
}
