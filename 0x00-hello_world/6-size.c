#include <stdio.h>
/**
 * main - A program that prints the sizes of various computer types
 * Return: 0
 */

int main(void)
{
	char p;
	int q;
	long int r;
	long long int d;
	float g;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(p));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(g));
return (0);
}
