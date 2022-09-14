/*
 * File: 104-fibonacci.c
 */
#include "stdio.h"
/**
 * main - This code prints first 98 fibonacci numbers
 * Return: Nothing
 */
int main(void)
{
	long int n1 = 1, n2 = 2, n;
	int x;

	printf("1, 2");

	for (x = 3; x <= 98; x++)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		printf(", %l64d", n);
	}
	putchar('\n');
	return (0);
}
