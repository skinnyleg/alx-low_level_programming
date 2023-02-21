#include "main.h"

/**
 * _putchar - prints _putchar with new
 * line
 */
void    _putchar(void)
{
	write(1, "_putchar\n", 9);
}

/**
 * main - calls the function _putchar
 * 
 * Return: 0
 */
int main(void)
{
	_putchar();
	return (0);
}