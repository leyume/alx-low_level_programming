/*
 * File: 102-fibonacci.c
 */
#include "stdio.h"
/**
 * main - This code prints first 50 fibonacci numbers
 * Return: Nothing
 */
void main(void)
{
	int n1 = 1, n2 = 2, n;

	printf("1, 2");

	for (int x = 3; x < 50; x++)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		printf(", %d", n);
	}
	putchar('\n');
	return (0);
}
