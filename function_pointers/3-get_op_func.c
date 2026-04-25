#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform an operation
 * @s: the operator string
 *
 * Return: pointer to the function that performs the operation,
 *         or NULL if operator is invalid
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
