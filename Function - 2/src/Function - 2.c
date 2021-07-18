/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//function with argument without return value

#include <stdio.h>
#include <stdlib.h>

void sum(int, int); //declaring function
int main(void) {
	int num1, num2;
	setbuf(stdout, NULL);
	printf("Enter two numbers");
	scanf("%d%d", &num1, &num2);
	sum(num1, num2);
	return EXIT_SUCCESS;
}

void sum(int num1, int num2){
	int total;
	total = num1 + num2;
	printf("sum = %d", total);
}
