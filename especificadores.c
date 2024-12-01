#include "main.h"

/**
 *get_specs- Arrays of specificators and asociated functions
 *Return: call to function
 */

spec_t *get_specs(void)
{
	static spec_t specs[] = {
		{'c', printing_char},
		{'s', printing_string},
		{'%', printing_percent},
		{'d', printing_int},
		{'i', printing_int},
		{'\0', NULL}
		};
return (specs);
}
