#include "main.h"
/**
  * print_last_digit - Function that prints the last digit.
  * @n: takes in an integer
  * Return: returns output
  */
int print_last_digit(int n)
{
	int ln = % 10;

	if (n < 0)
		ln = ln * -1;
	_putchar(ln +'0');
	return (ln);
}
