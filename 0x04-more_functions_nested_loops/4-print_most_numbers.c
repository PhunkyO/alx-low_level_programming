#include "main.h"

/**
 * print_most_numbers - printss 0-9 except 2,4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			if (i != 2 && i != 4)
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n')
	}
