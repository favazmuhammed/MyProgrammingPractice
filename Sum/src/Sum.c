/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, sum;
	setbuf(stdout, NULL);
	printf("Enter two numbers\n");
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("Result: %d", sum);
	return EXIT_SUCCESS;
}
