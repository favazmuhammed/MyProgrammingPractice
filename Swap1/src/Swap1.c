/*
 ============================================================================
 Name        : Swap1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	scanf("%d%d", &a, &b);
	a  = a + b;
	b = a - b;
	a  = a - b;
	printf("a = %d \nb = %d", a, b);
	return EXIT_SUCCESS;
}
