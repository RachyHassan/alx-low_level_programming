#include "main.h"
/**
  * swap_int- a function that swaps two integers
  *
  *@a: first integer
  *@b: second integer
  *
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
