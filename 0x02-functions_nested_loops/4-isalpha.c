#include "main.h"

/**
 * _isalpha - function to check upper and lowercase alphabets
 * @c - parameter to be checked
 * Return: return 1 if parameter is an alphabet and return 0 if it is not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
