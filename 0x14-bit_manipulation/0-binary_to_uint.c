#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: The pointer to a string
 * Return:  converted number or 0 if there is characters or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}
