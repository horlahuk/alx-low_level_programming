#include "main.h"
/**
 * main - program to print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int spell, size;

	size = sizeof(arr) / sizeof(int);
	for (spell = 0; spell < size; spell++)
	{
		_putchar(arr[spell]);
	}
	_putchar('\n');
	return (0);
}
