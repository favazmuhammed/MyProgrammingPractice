/*
 ============================================================================
 Name        : Star.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, n;
	scanf("%d", &n);

	for (i = 0; i< n; i++){

		for(j = n - i; j > 0 ; j--){
			printf("*  ");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
