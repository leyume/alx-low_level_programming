/*
 * File: 101-natural.c
 */
#include "stdio.h"
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
	printf("%d", result);
	_putchar('\n');
	return (0);
}
