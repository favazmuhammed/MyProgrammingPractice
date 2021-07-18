/*
 ============================================================================
 Name        : Function-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


//function without argument without return value

#include <stdio.h>
#include <stdlib.h>

void sum(); //declaring function

int main(void) {
	setbuf(stdout, NULL);
	sum();
	sum();
	return EXIT_SUCCESS;
}


//defining function
void sum(){

	int num1, num2, sum;
	printf("Enter two numbers");
	scanf("%d%d",&num1, &num2);

	sum = num1 + num2;

	printf("Sum = %d\n", sum);
}
