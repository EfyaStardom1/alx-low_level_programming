#include<stdio.h>
/**
  *main - Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{

	printf("size of a char: %zu byte(S)\n", sizeof(char));
	printf("size of an int: %zu byte(S)\n", sizeof(int));
	printf("size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
