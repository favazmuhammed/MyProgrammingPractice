/*
 ============================================================================
 Name        : StringProject.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[100];
	setbuf(stdout, NULL);
	printf("Enter a name");
	scanf("%s", name);
	printf("Your name is %s", name);
	return EXIT_SUCCESS;
}
