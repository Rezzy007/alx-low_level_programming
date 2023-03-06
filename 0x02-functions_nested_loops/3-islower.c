#include "main.h"

/**
 * _islower - function to print lower case
 * @c - what is to be printed
 * Return: return 1 if lowercase and return 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
