/*
 ============================================================================
 Name        : ArrayProject.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit,i, a[100];
	int sum = 0;

	printf("Enter the array limit");
	scanf("%d", &limit);

	printf("Input elements in the array\n");

	for (i = 0; i< limit; i++){

		scanf("%d", &a[i]);
	}

	for(i = 0; i<limit; i++){

		sum = sum + a[i];
	}

	printf("Sum= %d", sum);

	return EXIT_SUCCESS;
}
