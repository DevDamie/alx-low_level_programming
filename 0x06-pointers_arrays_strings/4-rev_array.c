#include "main.h"

/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: pointer caracter
 *@n: integer
 *Return: integer of pointer type
 */

void reverse_array(int *a, int n)
{

	int k, i = 0;

	for (; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
	}

}
