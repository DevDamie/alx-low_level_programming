#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer of character
 * Return: integer
 */

int _atoi(char *s)
{
	int sum = 0;

	while (*s != 0)
	{
		/* printf("s = %d\n", *s); */
		sum = _atoi(s + '0');
		s++;
		printf("sum = %d\n", sum);
	}
	printf("sum = %d\n", sum);
	return (0);
}
