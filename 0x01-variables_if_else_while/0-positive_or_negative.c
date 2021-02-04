#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function description
 * Description: used to print
 * Return: zero is returned
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if  (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n < 0)
{
	printf("%d is negtive\n", n);
}
else
{
	printf("%d is zero\n", n);
}
return (0);
}
