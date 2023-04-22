#include<stdio.h>
/**
* main - Entry point 
* Return: Always 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %d byte(S)",(unsigned long)sizeof(a));
	printf("size of an int: %d byte(S)",(unsigned long)sizeof(b));
	printf("size of a long int : %d bytes(s)", (unsigned long)sizeof(c));
	printf("size of a long long int: %d byte(s)", (unsigned long)sizeof(d));
	printf("size of a float: %d bytes(s)", (unsigned long)sizeof(f));
	return (0);
}

