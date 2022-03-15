#include <stdio.h>
#include "main.h"

/**
* main - prints _putchar, followed by a new line.
*
* Return: void.
*/

int main(void)
{
char str[] = "_putchar\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
