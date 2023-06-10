#include "main.h"

/**
 * get_endianness -function that checks endianness
 * (i.e. the attribute of a system that indicates whether
 * integers are represented with the most significant byte
 * stored at the lowest address (big endian) or at the
 * highest address (little endian)).
 *
 * Return: 0 for big endian, 1 for little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
