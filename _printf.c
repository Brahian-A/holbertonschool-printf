#include "main.h"

/**
 *_printf - Imprime texto según especificadores personalizado
 *@format: Cadena de formato que contiene texto y especificadores
 *Return: El número total de caracteres impreso
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, i_2 = 0;
	int conteo = 0, c_prints = 0;
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
				while (specs[i_2].especificador != '\0')
				{
					if (format[i] == specs[i_2].especificador)
					{
						c_prints = specs[i_2].funcion(args);
					if (c_prints == -1)
						return (-1);
					conteo += c_prints;
					break;
					}
						i_2++;
				}
				if (specs[i_2].especificador == '\0')
				{
					conteo += write(1, &format[i - 1], 1);
					conteo += write(1, &format[i], 1);
				}
			}
			else
				conteo += write(1, &format[i], 1);
			i++;
		}
	va_end(args);
	return (conteo);
}
