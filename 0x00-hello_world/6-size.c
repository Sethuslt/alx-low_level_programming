#include <stdio.h>
/**
 * main -  prints the size of types on the computer it is compiled and run on
 *
 * Return: 0 on success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int g;
	float h;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(g));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(h));
	return (0);
}

