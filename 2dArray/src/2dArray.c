/*
 ============================================================================
 Name        : 2dArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[3][3], i, j;
	setbuf(stdout, NULL);
	printf("Enter the values of 2d array");

	for(i=0; i<3; i++){

		for(j=0; j<3; j++){

			scanf("%d", &a[i][j]);
		}
	}

	printf("Values:\n");

	for(i=0; i<3; i++){

		printf("\n");

		for(j=0; j<3; j++){

			printf("%d\t", a[i][j]);
		}
	}
	return EXIT_SUCCESS;
}
