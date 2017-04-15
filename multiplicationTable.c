/*
	18. Escreva um programa que imprima a tabuada completa(1 a 10) de 1 a 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, j;

	for(i=1 ; i<=10 ; i++){
		printf("\nTabuada de %d\n\n", i);
		for(j=1 ; j<=10 ; j++){
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}

	return 0;

}
