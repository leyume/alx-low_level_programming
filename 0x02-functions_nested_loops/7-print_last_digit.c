/*
 * File: 7-print_last_digit.c
 */

#include "main.h"

int print_last_digit(int num)
{
	int x;

	x = num % 10;
	if (x < 0)
		x = x * (-1);

	_putchar(x + '0');
	return (x);
}
