/*
 ============================================================================
 Name        : ArraySearch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, limit, search_key, inputs[100], flag;
	scanf("%d", &limit);

	printf("Enter the search key\n");
	scanf("%d",&search_key);

	for (i=0; i< limit; i++){

		scanf("%d", &inputs[i]);
	}

	for(i=0; i<limit; i++){

		if(search_key == inputs[i]){
			flag = 1;
			break;
		}

	}
	if (flag == 1){
		printf("The element places at %dth position", i+1);
	}else{
		printf("No such element present");
	}

	return EXIT_SUCCESS;
}
