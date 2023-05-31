#include "main.h"
<<<<<<< HEAD

/**
 * printf_HEX_aux - prints an hexadecimal number.
 * @num: number to print.
 * Return: counter.
 */
int printf_HEX_aux(unsigned int num)
{
	int j;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (j = 0; j < counter; j++)
	{
		array[j] = temp % 16;
		temp /= 16;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		if (array[j] > 9)
			array[j] = array[j] + 7;
		_putchar(array[j] + '0');
	}
	free(array);
	return (counter);
=======
/**
* printf_HEX_aux - prints an hexgecimal number.
* @num: number to print.
* Return: counter.
*/
int printf_HEX_aux(unsigned int num)
{
int i;
int *array;
int counter = 0;
unsigned int temp = num;
while (num / 16 != 0)
{
num /= 16;
counter++;
}
counter++;
array = malloc(counter * sizeof(int));
for (i = 0; i < counter; i++)
{
array[i] = temp % 16;
temp /= 16;
}
for (i = counter - 1; i >= 0; i--)
{
if (array[i] > 9)
array[i] = array[i] + 7;
_putchar(array[i] + '0');
}
free(array);
return (counter);
>>>>>>> 89c1c635c6abe880277a739ade59ceeabde48c0c
}
