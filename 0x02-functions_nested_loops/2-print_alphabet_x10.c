#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i < 10)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	i++;
	}
}
