#include "main.h"

/**
 * _isapha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is the letter, 0 otherwise
 */
int _isalph(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
