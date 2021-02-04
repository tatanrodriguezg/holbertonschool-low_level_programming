#include <stdio.h>
/**
 * main - function description
 * Description: used to print
 * Return: zero is returned
 */
int main(void)
{
	char ch, u;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (u = 'A' ; u <= 'Z' ; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
