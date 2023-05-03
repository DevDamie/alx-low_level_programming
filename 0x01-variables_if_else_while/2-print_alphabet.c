#include <stdio.h>
#include <ctype.h>

/**
 * main - Enyry point
 * Return: always 0 (success)
 */

int main(void)
{
	int lowercase  = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase *= 1;
	}
	putchar('\n');
	return (0);
}
