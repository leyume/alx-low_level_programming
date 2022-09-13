
/*
 * File: 11-print_to_98.c
 */

#include "main.h"

void print_to_98(int num)
{
	int i;

	for (i = num; i < 98; i++)
		_putchar("%i, ", i);

	for (i = num; i > 98; i--)
		_putchar("%i, ", i);
	_putchar("98\n");
}
