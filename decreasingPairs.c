/*
	3. Escreva um algoritmo que imprima todos os números pares entre 1 e 100, na ordem decrescente.
*/

#include <stdio.h>

#define minimo 1
#define maximo 100

void imprime_pares_decrescente(){
	int i;
	for(i = maximo ; i >= minimo ; i--){
		if(i%2 == 0)
			printf("\n%d", i);
	}
}

int main(){

	imprime_pares_decrescente();

	return 0;
}
