
/*
 * File: 0-putchar.c
 */
#include "main.h"
/*
 *  prints _putchar, followed by a new line.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}


