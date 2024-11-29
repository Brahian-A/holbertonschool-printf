#include "main.h"

/**
 *printea_char- funcion que printea un caracter
 *@args: Lista de argumentos
 *Return: Número de caracteres impress
 */


int printea_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 *printea_string- Imprime una cadena de texto
 *@args: Lista de argumentos
 *Return: Número de caracteres impress
 */

int printea_string(va_list args)
{
	char *string = va_arg(args, char *);
	int i, count = 0;

	if (string == NULL)
	{
		string = "(null)";
	}
		for (i = 0; string[i] != '\0'; i++)
		{
			count += write(1, &string[i], 1);
		}
	return (count);
}

/**
 *printea_porcentaje- Imprime el carácter'%'
 *@args: Lista de argumentos (no usado)
 *Return: Número de caracteres impres "siempre 1 en este caso"
 */

int printea_porcentaje(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

/**
 *printea_enteros- Convierte un número entero en texto y lo imprime
 *@args: lista de argumentos
 *Return: Número total de caracteres impresos, incluyendo el signo
 */

int printea_enteros(va_list args)
{
	int num = va_arg(args, int);
	int conteo = 0, i = 0, i_2 = 0;
	char string[12];

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		conteo++;
	}

	while (num > 0)
	{
		string[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	for (i_2 = i - 1; i_2 >= 0; i_2--)
	{
		write(1, &string[i_2], 1);
		conteo++;
	}
	return (conteo);
}
