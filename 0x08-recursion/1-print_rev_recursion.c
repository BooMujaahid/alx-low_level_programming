#include "main.h"
/**
 * _strlen_recursion - prints string, followed by new line.
 * @s:string
 * Return:nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
	else
		_putcher('\n');
}
