/*
 ============================================================================
 Name        : HotelSwitch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("please select your choice\n");
	scanf("%d", &choice);

	switch (choice){

	case 1:
		printf("You selected biriyani");
		break;
	case 2:
		printf("You selected porota");
		break;
	case 3:
		printf("You selected chappathi");
		break;
	default:
		printf("please select available");

	}
	return EXIT_SUCCESS;
}
