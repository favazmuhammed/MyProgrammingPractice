/*
 ============================================================================
 Name        : Arithmatic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1, num2, result;
	int selection;
	printf("Enter two numbers\n");
	scanf("%f%f", &num1, &num2);
	printf("Please select 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n");
	scanf("%d", &selection);


	if (selection == 1){
		result = num1 + num2;
		printf("Adding two numbers results %f", result);
	}else if (selection == 2){
			result = num1 - num2;
			printf("Subtracting two numbers results %f", result);
    }else if (selection == 3){
			result = num1 * num2;
			printf("Multiplying two numbers results %f", result);
	}else if (selection == 1){
			result = num1 / num2;
			printf("Dividing two numbers results %f", result);
	}else {
		printf("Please select 1, 2, 3 or 4");
	}

	return EXIT_SUCCESS;
}
