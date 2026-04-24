#include "main.h"

/**
 * leet - encodes a string into 1337 speak
 * @str: pointer to the string
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char find[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == find[j])
				str[i] = replace[j];
		}
	}

	return (str);
}
