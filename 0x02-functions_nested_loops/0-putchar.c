#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * main - prints _putchar with new
 * line
 *
 * Return: 0
 */
/* betty style doc for function main goes there */

void    _putchar(void)
{
    write(1, "_putchar\n" , 9);
}

int main(void)
{
	printf("_putchar\n");
	return (0);
}
