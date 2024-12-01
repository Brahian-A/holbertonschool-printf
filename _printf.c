#include "main.h"

/**
 *_printf - Prints a string according to a customized specificatior
 *@format: Format string containing text and specifiers
 *Return: Total numbers of printed chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, i_2 = 0;
	int count = 0, c_prints = 0;
	const spec_t *specs = get_specs();

		if (format == NULL)
			return (-1);
		va_start(args, format);
		while (format && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == '\0')
					return (-1);
				while (specs[i_2].specifier != '\0')
				{
					if (format[i] == specs[i_2].specifier)
					{
						c_prints = specs[i_2].funcion(args);
					if (c_prints == -1)
						return (-1);
					count += c_prints;
					break;
					}
						i_2++;
				}
				if (specs[i_2].specifier == '\0')
				{
					count += write(1, &format[i - 1], 1);
					count += write(1, &format[i], 1);
				}
			i_2 = 0;
			}
			else
				count += write(1, &format[i], 1);
			i++;
		}
	va_end(args);
	return (count);
}
