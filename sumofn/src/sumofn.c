/*
 ============================================================================
 Name        : sumofn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, sum = 0;
	printf("Enter the number\n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++){

		sum = sum + i;
	}

	printf("Sum of first %d natural numbers is %d", n, sum);
	return EXIT_SUCCESS;
}
