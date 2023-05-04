#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 **_strncat - function that concatenates two strings.
 *@dest: pointer caracter
 *@src: pointer caracter
 *@n: integer
 *Return: @dest of pointer type
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
