#include "main.h"


/**
 * string_toupper - Convert lowercase letters of a string to uppercase
 * @s: the string to convert
 * Return: s
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}