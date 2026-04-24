#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill the rest with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
