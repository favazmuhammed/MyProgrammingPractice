/*
 ============================================================================
 Name        : Sorting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int values[100], i, j, temp, n;
	setbuf(stdout, NULL);
	printf("Please enter the number of values in the array\n");
	scanf("%d", &n);

	printf("Please enter the values\n");

	for(i=0; i<n; i++){
		scanf("%d", &values[i]);
	}

	for(i = 0; i< n-1; i++){

		for(j= i+1; j<n; j++){

			if (values[i] < values[j] ){
				temp = values[j];
				values[j] = values[i];
				values[i] = temp;
			}
		}
	}

	printf("Array sorted as follow\n");

	for(i=0; i<n; i++){
		printf("%d ", values[i]);
	}
	return EXIT_SUCCESS;
}
