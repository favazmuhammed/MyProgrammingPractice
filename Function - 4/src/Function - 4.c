/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


//function without argument with return value
#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void) {
		int k;
		setbuf(stdout,NULL);
		k = sum();
		printf("result is %d", k);
		return EXIT_SUCCESS;
}


int sum(){
	int num1, num2, total;
	printf("Enter two numbers");
	scanf("%d%d", &num1, &num2);
	total = num1 + num2;
	return total;
}
