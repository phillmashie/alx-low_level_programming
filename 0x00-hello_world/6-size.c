/*
 * File: 6-size.c
 * Auth: Phillip Mashingaidze
 */

#include <stdio.h>

/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int L;
	float f;
	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %uz byte(s)\n",sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(L));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}
