/*
 ============================================================================
 Name        : Average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter three numbers\n");
	float num1, num2, num3, average;
	scanf("%f%f%f", &num1, &num2, &num3);
	average = (num1 + num2 + num3) / 3;
	printf("average of three numbers entered id %f", average);
	return EXIT_SUCCESS;
}
