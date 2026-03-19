#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
int c;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
for (c = 0; c < 26; c++)
{
putchar(alphabet[c]);
}
putchar('\n');
}
