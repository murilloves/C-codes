/*
	4. Escreva um algoritmo que imprima todos os números pares entre X e Y, onde X e Y são dados pelo usuário.
*/

#include <stdio.h>

void imprime_pares(int menor, int maior){
	int i;
	for(i = menor ; i <= maior ; i++){
		if(i%2 == 0)
			printf("\n%d", i);
	}
}

void ordena_crescente(int *numero1, int *numero2){
	int variavelTemporaria;
	if (*numero1 > *numero2){
		variavelTemporaria = *numero1;
		*numero1 = *numero2;
		*numero2 = variavelTemporaria;
	}
}

int main(){

	int numero1, numero2;
	printf("Primeiro numero: ");
	scanf("%d",&numero1);

	printf("Segundo numero: ");
	scanf("%d",&numero2);

	// Função para ordenar de forma crescente os números, se o usuário não der a entrada em ordem crescente
	ordena_crescente(&numero1 , &numero2);

	// Chama a função para imprimir pares
	imprime_pares(numero1,numero2);

	return 0;
}
