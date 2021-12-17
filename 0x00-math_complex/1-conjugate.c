#include "holberton.h"

/**
 * conjugate - change operator to imaginary number
 * @complex: complex number struct
 *
 * Return: complex number struct
 */
complex conjugate(complex c)
{
	if (c.re != '\0')
	{
		if (c.im != '\0' && c.im != 0)
			c.im *= -1;
        return (c);
	}
    return (c);
}
