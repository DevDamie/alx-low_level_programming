#include "main.h"
#include <stdio.h>
#include  <stdlib.h>

/**
 * print_number -  a function that prints an integer
 * @n: integer to be printed
 * Return: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		putchar('0');
	}
	if (n / 10)
	{
		print_number(n / 10);
		putchar((n % 10) + '0');
	}
}
