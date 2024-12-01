#include "main.h"

/**
 *printing_char- funcion que printing un caracter
 *@args: Lista de argumentos
 *Return: Número de caracteres impress
 */


int printing_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 *printing_string- Imprime una cadena de texto
 *@args: Lista de argumentos
 *Return: Número de caracteres impress
 */

int printing_string(va_list args)
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
 *printing_percent- Imprime el carácter'%'
 *@args: Lista de argumentos (no usado)
 *Return: Número de caracteres impres "siempre 1 en este caso"
 */

int printing_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

/**
 *printing_int- Convierte un número entero en texto y lo imprime
 *@args: lista de argumentos
 *Return: Número total de caracteres impresos, incluyendo el signo
 */

int printing_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0, i = 0, i_2 = 0;
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
		count++;
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
		count++;
	}
	return (count);
}
