#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: character
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		putchar('\n');
}
