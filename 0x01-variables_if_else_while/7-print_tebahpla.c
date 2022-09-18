#include <stdio.h>
/**
 * main - main branch
 * Description: prints the alphabets backwards
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c <= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
