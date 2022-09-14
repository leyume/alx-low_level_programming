/*
 * File: 102-fibonacci.c
 */
#include "stdio.h"
/**
 * main - This code prints first 50 fibonacci numbers
 * Return: Nothing
 */
int main(void)
{
	long int n1 = 1, n2 = 2, n, result = 0;
	int x;

	for (x = 3; x <= 50; x++)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		if (n >= 4000000)
		{
			break;
		}

		if (n % 2 == 0)
		{
			result += n;
		}
	}
	printf("%ld", result);
	putchar('\n');
	return (0);
}
