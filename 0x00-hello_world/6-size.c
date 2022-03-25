#include <stdio.h>
/**
 * main - prints size of various types
 * Return: always 0
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n" sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n" sizeof(long long int));
	printf("size of a float: %zu byte(s)\n" sizeof(float));

	return (0);
}
