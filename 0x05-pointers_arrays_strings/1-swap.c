#include "main.h"

/**
 * swap_int fct that swaps the values of two integers
 * Returns: a=98, b=42
 * a=42, b=98
**/


void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

