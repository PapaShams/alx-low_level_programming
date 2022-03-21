#include "main.h"

/**
* _puts -a function that prints a string to stdout
* @str: a value to be tested
* 
* Return: (0)
*/

void _puts(char *str)
{
int l = 0;

while (*(str + 1) != '\0')
{
_putchar(str[1]);
l++;
}
_putchar('\n');
}
