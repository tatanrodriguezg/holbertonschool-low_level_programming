#include<stdio.h>
/**
 * main - function description
 * Description: used to print
 * Return: zero is returned
 */
int main(void)
{
int intType;
float floatType;
long int long1Type;
long long int long2Type;
char charType;

printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(long1Type));
printf("Size of a long long int: %zu bytes\n", sizeof(long2Type));
printf("Size of a float: %zu bytes\n", sizeof(floatType));

return (0);
}
