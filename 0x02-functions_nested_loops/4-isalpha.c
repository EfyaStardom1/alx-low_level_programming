#include "main.h"
#include <string.h>

/**
 * main - print a function that checks for alphabetic character
 * _isapha - Show 1 if the input is a
 * letter Another cases, shows 0
 * @c: the character in ASCII code
 * Return: 1 if c is the letter, 0 otherwise
 */
int _isalph(int c)
{
	if
		((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
