#include <stdio.h>
/**
 * main - function description
 * Description: used to print
 * Return: zero is returned
 */
int main(void)
{
	int x;
	char ch, sp;

	x = 0;
	ch = ' ';
	sp = ',';

	while (x < 9)
	{
		putchar('0' + x);
		x++;
		putchar(sp);
		putchar(ch);
	}
	putchar('0' + x);
	return (0);
}
