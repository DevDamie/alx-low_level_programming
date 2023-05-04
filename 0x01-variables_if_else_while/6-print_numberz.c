#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0
 * Return: character
 */

int main(void)
{
	int c = 48;

	while (c >= 48 && c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
