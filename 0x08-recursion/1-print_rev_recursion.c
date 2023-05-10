#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: pointer of character.
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
