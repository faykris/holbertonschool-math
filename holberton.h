#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

/**
 * struct complex_s - complex numbers struct
 * @re: real number
 * @im: imaginary number
 *
 * Description: contains real and imaginary part
 */
typedef struct complex_s
{
	double re;
	double im;
} complex;

/* Function prototypes */
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);

#endif /* HOLBERTON_H */
