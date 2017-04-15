/*
	1. Escreva um algoritmo que imprima todos os números pares entre 1 e 100.
*/

#include <stdio.h>

#define minimo 1
#define maximo 100

void imprime_pares(){
	int i;
	for(i = minimo ; i <= maximo ; i++){
		if(i%2 == 0)
			printf("\n%d", i);
	}
}

int main(){

	imprime_pares();

	return 0;
}
