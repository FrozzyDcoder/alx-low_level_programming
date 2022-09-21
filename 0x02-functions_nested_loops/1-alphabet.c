#include "main.h"

/**
 * main - Entry point
 * Description:a function that prints the alphabet, in lowercase
 * print_alphabet
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
