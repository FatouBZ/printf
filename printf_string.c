#include "main.h"
/**
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int c, length;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		length = _strlen(s);
		for (c = 0; c < length; c++)
			_putchar(s[c]);
		return (length);
	}
	else
	{
		length = _strlen(s);
		for (c = 0; c < len; c++)
			_putchar(s[c]);
		return (length);
	}
}
