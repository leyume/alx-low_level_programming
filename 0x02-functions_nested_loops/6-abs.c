/*
 * File: 6-abs.c
 */

#include "main.h"

int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}
