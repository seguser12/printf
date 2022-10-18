#include "main.h"
#include <stdio.h>
/**
 * _printstring - function that print a string
 * @s:pointer to value of each symbol of string
 *
 * Return: counter.
 */
int _printstring(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}

	return (i);
}
