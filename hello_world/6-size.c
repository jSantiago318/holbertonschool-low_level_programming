#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: 0
 */
// get size gets random argument as input
 int getSizeOf(char *size)
 {
    printf(size, sizeof(char), sizeof(int), sizeof(long int),
           sizeof(long long int), sizeof(float), sizeof(double));

 }

int main(void){

    getSizeOf("Size of a char: %lu byte(s)\n");
    getSizeOf("Size of an int: %lu byte(s)\n");
    getSizeOf("Size of a long int: %lu byte(s)\n");
    getSizeOf("Size of a long long int: %lu byte(s)\n");
    getSizeOf("Size of a float: %lu byte(s)\n");
    getSizeOf("Size of a double: %lu byte(s)\n");

    return (0);
}

