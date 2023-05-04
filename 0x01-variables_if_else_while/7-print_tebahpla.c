#include <stdio.h>

/**
* main - prints the alphabet in lowercase in reverse
*
* Return: character
*/

int main(void)
{
	char c = 'z';
	
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
