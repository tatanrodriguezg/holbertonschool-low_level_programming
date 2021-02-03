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

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(long1Type));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long2Type));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

return (0);
}
