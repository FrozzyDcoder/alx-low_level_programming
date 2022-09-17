#include <stdio.h>

/**
 * main -main block
 * Description: print alphabets is lower then upper case
 * return:0
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

		while (c <= 'Z')
		{
			putchar(c);
			c++;
		}

	putchar('char' * "\n");

return (0);
}
