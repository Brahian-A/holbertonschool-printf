#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
/**
 * struct spec- Structure for associating a specifier with a function
 *@specifier: Character that represents the specifier
 *@funcion: Function associated with the specifier, which handles its format and output.
 */

typedef struct spec
{
	char specifier;
	int (*funcion)(va_list args);
} spec_t;

spec_t *get_specs(void);
int _printf(const char *format, ...);

int printing_char(va_list args);
int printing_string(va_list args);
int printing_percent(va_list args);
int printing_int(va_list args);
int printing_unsigned(va_list args);
#endif

