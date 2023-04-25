#include "main.h"
/**
  * _abs- Entry point
  * @i: integer
  * Description: 'absolute value'
  * Return: always 0
  */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
