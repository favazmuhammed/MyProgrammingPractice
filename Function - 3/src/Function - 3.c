/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//function with argument with return value
#include <stdio.h>
#include <stdlib.h>

int sum(int, int);
int main(void) {
	int a, b, result;
		setbuf(stdout, NULL);
		printf("Enter two numbers");
		scanf("%d%d", &a, &b);
		result = sum(a, b);
		printf("Result is %d", result);
		return EXIT_SUCCESS;
}

int sum(int num1, int num2){

	int result;
	result = num1 + num2;
	return result;
}
