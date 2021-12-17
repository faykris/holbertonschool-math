#include "holberton.h"

/**
 * display_complex_number - prints complex number 
 * @complex: complex number struct
 *
 * Return: None
 */
void display_complex_number(complex c)
{
	char oper = ' ';

	if (c.re != '\0')
	{
		if (c.im != '\0' && c.im != 0)
		{
			if (c.im > 0)
				oper = '+';
			else
			{
				oper = '-';
				c.im *= -1;
			}			
			printf("%1.0f %c %1.0fi\n", c.re, oper, c.im);
		}
		else
		{
			printf("%1.0f\n", c.re);
		}
	}
}
