#include <stdio.h>
/**
 * main - function description
 * Description: used to print
 * Return: zero is returned
 */
int main(void)
{
	int x;

	x = 0;

	while (x <= 9)
	{
		putchar('0' + x);
		x++;
		}
	putchar('\n');
	return (0);
}
