#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_srev(va_list args)
{

	char *s = va_arg(args, char*);
	int m;
	int n = 0;

	if (s == NULL)
		s = "(null)";
	while (s[n] != '\0')
		n++;
	for (m = n - 1; m >= 0; m--)
		_putchar(s[m]);
	return (n);
}
