#include "main.h"

/**
 *printing_char- function that prints a char
 *@args: Args List
 *Return: Number of printed chars
 */


int printing_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 *printing_string- Prints a string
 *@args: Args List
 *Return: Number of prindet chars
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
 *printing_percent- Prints '%' char
 *@args: Args list (not used)
 *Return: Number of printed chars "always 1 for this example"
 */

int printing_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

/**
 *printing_int- Convert an Int into a string and prints it
 *@args: Args List
 *Return: Total of printed chars including sing
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
