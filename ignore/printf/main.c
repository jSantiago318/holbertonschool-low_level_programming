#include <stdio.h>
#include "main.h"

int main(void)
{
    _printf("Hello big %s!\n", "world");
    /* Task 1 print numbers correctly when it seed %d or %i*/
    _printf("Number: %d\n", 42); 
    _printf("Number: %i\n", 2123416);  
    _printf("Negative: %d\n", -1);  
    /* Task 0 Test*/
    _printf("Char: %c\n", 'A');
    _printf("Percent: %%\n");
    return (0);
}
