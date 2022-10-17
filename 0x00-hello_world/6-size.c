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
	float k;

	printf("Size of an int: %zu byte(s) \n", (unsigned long) sizeof(b));
	printf("Size of a long int: %zu byte(s) \n", (unsigned long) sizeof(f));
	printf("Size of a char: %zu byte(s) \n", (unsigned long) sizeof(a));
	printf("Size of a long long int: %zu byte(s) \n", (unsigned long) sizeof(d));
	printf("Size of a float: %zu byte(s) \n", (unsigned long) sizeof(k));
	
	return (0);

}
