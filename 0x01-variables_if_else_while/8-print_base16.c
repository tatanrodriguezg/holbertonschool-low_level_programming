#include <stdio.h>
/**
 * main - function description
 * Description: used to print
 * Return: zero is returned
 */
int main(void)
{
	int x;
	char ch;

	x = 0;

	while (x <= 9)
	{
		putchar('0' + x);
		x++;
		}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
