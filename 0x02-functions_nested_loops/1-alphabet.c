#include "main.h"
#include "stdio.h"

/**
 * print_alphabet - entry point
 *
 * Description: Prints the alphabet with _putchar
 *
 * Return: void
 */


 int main(void) 
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
