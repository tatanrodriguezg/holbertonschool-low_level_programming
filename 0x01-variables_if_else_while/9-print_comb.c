#include <stdio.h>
/**
 * main - function description
 * Description: used to print
 * Return: zero is returned
 */
int main(void)
{
	int x, y, z, w;

	x = 0;
	w = -38;
	y = -16;
	z = -4;

	while (x <= 9)
	{
		putchar('0' + x);
		x++;
		putchar('0' + z);
		putchar('0' + y);
	}
	putchar('0' + w);
	return (0);
}
