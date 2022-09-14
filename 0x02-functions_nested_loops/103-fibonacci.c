/*
 * File: 103-fibonacci.c
 */
#include "stdio.h"
/**
 * main - This code sums prints first fibonacci numbers up to 4,000,000
 * Return: Nothing
 */
int main(void)
{
	long int n1 = 1, n2 = 2, n, result = 2;

	while (n < 4000000)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;

		if (n % 2 == 0)
		{
			result += n;
		}
	}
	printf("%ld", result);
	putchar('\n');
	return (0);
}
