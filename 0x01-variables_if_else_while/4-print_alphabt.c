#include <stdio.h>
/**
 * main - function description
 * Description: used to print
 * Return: zero is returned
 */
int main(void)
{
char x;
x = 'a';
while (x <= 'z')
{
	if (x == 'e')
		x++;
	else if (x == 'q')
		x++;
	else
	{
		putchar(x);
		x++;
	}
}
putchar('\n');
return (0);
}
