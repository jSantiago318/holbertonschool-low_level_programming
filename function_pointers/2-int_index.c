#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to search in
 * @size: size of the array
 * @cmp: function pointer that compares values
 *
 * Return: index of the first element for which the comparison function
 * returns non-zero, or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
