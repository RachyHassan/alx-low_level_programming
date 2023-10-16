#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
  * main - Entry point
  * Description: 'print _putchar'
  * Return: always 0
  */
int _putchar(char c)
{
	return write(1, &c, 1);
}
