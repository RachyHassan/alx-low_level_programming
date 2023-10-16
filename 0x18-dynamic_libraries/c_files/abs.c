#include "main.h"
/**
  * _abs- Entry point
  * @i: integer
  * Description: 'absolute value'
  *
  * Return: always 0
  */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
