/*
 ============================================================================
 Name        : Evennumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n;
	printf("Enter the number\n");
	scanf("%d", &n);

	for (i=1; i<= n; i++){

		if (i%2==0){
			printf("%d\n", i);
		}
	}
	return EXIT_SUCCESS;
}
