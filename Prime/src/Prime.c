/*
 ============================================================================
 Name        : Prime.c
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
	int flag = 0;
	scanf("%d",&n);

	for(i=2; i<= n/2; i++){

		if (n%i == 0){
			flag = 1;
			break;
		}
	}

	if (flag == 1){
		printf("The given number is not a prime number");
	}else{
		printf("The given number is a prime number");
	}
	return EXIT_SUCCESS;
}
