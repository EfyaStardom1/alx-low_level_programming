#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest:output value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src);
{
	int a = -1, b;

	for (b = 0; dest[b] != '\0';)
		b++;
	do {
		a++;
		dest[b] = src[a];
		b++;
	}
	while
	{
		(src[a] != '\0');
	}
	return (dest);
}
