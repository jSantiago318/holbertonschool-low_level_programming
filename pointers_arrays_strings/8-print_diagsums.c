#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the matrix array
 * @size: size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum_main = 0, sum_anti = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_anti += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_main, sum_anti);
}
