#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers
 *
 * Return: numbers separated by comma
 */
int main(void)
{
	int n = 48;

	while (n >= 48 && n <= 57)
	{
	putchar(n);
	if (n != 57)
	{
	putchar(',');
	putchar(' ');
	}
	n++;
	}
	putchar('\n');
	return (0);
}
