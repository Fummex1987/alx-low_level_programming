#include "main.h"

/**
 * _isupper - Search for upper case characters
 * @c: The parameter to be checked
 * Return: 1 on Success and 0 on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
