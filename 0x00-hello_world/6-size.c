#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long long int d;
	long int f;

	printf("Size of an int: %lu byte(s) \n", (unsigned long) sizeof(b));
	printf("Size of a long int: %lu byte(s) \n", (unsigned long) sizeof(f));
	printf("Size of a char: %lu byte(s) \n", (unsigned long) sizeof(a));
	printf("Size of a long long int %lu byte(s) \n", (unsigned long) sizeof(d));
	return (0);
}
