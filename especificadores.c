#include "main.h"

/**
 *get_specs- Array de especificadores y funciones asociadas
 *Return: la llamada a la funciion
 */

spec_t *get_specs(void)
{
	static spec_t specs[] = {
		{'c', printea_char},
		{'s', printea_string},
		{'%', printea_porcentaje},
		{'d', printea_enteros},
		{'i', printea_enteros},
		{'\0', NULL}
		};
return (specs);
}
