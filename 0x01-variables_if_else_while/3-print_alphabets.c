#include <stdio.h>
/**
 * main - print the alphabet in lowercase, and then print uppercase alphabets,
 * followed by a new line.
 *
 * Return: always zero when succsess
 */
int main(void)
{
	char c;

	c = 'a';
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
		putchar('\n');
return (0);
}
