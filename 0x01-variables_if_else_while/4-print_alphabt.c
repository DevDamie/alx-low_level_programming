#include <stdio.h>

/**
* main - prints the alphabet in lowercase
* except q and e
* Return: character
*/

int main(void)
{
	char c;

	while (c >= 97 && c <= 122)
	if (c != 113 && c != 101)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
