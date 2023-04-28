#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints the numbers 1 to 100 with
 * Fizz for numbers divisible by 3
 * Buzz for numbers divisible by 5
 * FizzBuzz for numbers divisible by both 3 and 5
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
