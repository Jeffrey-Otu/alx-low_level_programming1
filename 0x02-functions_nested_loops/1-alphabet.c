#include "main.h"

/**
 * print_alphabet - prints alphabets from a-z
 * Return: 0 when successful
 * Description - You can only use _putchar twice in your code
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
