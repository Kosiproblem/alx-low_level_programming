#include "main.h"
/**
 * print_numbers- prints the numbers from 0-9
 * 
 * Return: 0
 */
void print_numbers(void)
{
	char n = 0;

	for (n = 0 ; n <= 9 ; n++)
	{
	_putchar('0' + n);
	}
	_putchar("\n");
}
