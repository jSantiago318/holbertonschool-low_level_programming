#include <stdio.h>

int main(void)
{
	char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.";
	
	int i = 0;
	while (str[i] != '\0')
	{
		if (i > 220)
			printf("Index %d: '%c' (ASCII %d)\n", i, str[i], (unsigned char)str[i]);
		i++;
	}
	printf("Total length: %d\n", i);
	return (0);
}
