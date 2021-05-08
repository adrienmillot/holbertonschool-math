#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/**
 * struct complex - Structure for complex
 *
 * @a: real part
 * @b: imaginary part
 */
typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
#endif
