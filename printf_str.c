#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: l.
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != 0; l++)
		;
	return (l);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: l
 */
int _strlenc(const char *s)
{
	int l;

	for (l = 0; s[l] != 0; l++)
		;
	return (l);
}
