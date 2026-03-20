/*
The "Fizz-Buzz test" is an interview question designed to help filter out the 99.5% of programming job candidates who can't seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

    Each number or word should be separated by a space
    You are allowed to use the standard library

*/
#include "main.h"
#include <stdio.h>

/**
 * main - 
 * Return: Always 0.
 */

int main(void)
{
    int counter; 

    for (counter = 1; counter <= 100; counter++) {
        if (counter % 3 == 0 && counter % 5 == 0) {
            printf("FizzBuzz ");
        } else if (counter % 3 == 0) {
            printf("Fizz ");
        } else if (counter % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", counter);
        }
    }
    printf("\n");
    return 0;
}