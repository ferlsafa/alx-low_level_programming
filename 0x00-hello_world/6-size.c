#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("int: %lu byte(s) \n", (unsigned long) sizeof(int));
	printf("float: %lu byte(s) \n", (unsigned long) sizeof(float));
	printf("char: %lu byte(s) \n", (unsigned long) sizeof(char));
	printf("double: %lu byte(s) \n", (unsigned long) sizeof(double));
	return (0);
}
