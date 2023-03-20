#include <stdio.h>
/**
 * main - print all the in lower case,followed by a new line,
 * excpet the q and the e letter
 *
 * Return : always zero when success.
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
		c++;
	}
putchar('\n');
return (0);
}
