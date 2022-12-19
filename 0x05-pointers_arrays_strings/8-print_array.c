#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * since 5 wey i start i jus dey reach task 8
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
