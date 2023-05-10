#include "main.h"
#include <stdio.h>

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * @s: string to check
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string whose length to calculate
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 if palindrone, 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= 10)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
