/*
 * File: 101-natural.c
 */
#include "main.h"
/**
 * main - This code prints sum of multiples of 3 or 5
 * Return: Nothing
 */
int main(void)
{
	int x, result;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 5 == 0) || (x % 3 == 0))
		{
			result += x;
		}
	}
	_putchar(result);
	_putchar('\n');
}
