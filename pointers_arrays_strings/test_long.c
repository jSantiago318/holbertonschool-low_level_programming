#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
	char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.";
	
	printf("Original length: %ld\n", strlen(str));
	puts2(str);
	return (0);
}
