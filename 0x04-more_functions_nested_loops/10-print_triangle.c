#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int inc1, inc2, inc3;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				putchar(' ');
			}

			for (inc3 = 0; inc3 < inc1; inc3++)
			{
				putchar('0');
			}
			_putchar('0');
		}
	}
}
