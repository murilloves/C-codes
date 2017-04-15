/*
 	2. Escreva um algoritmo que receba um número N e imprima o valor de N!, ou seja, o valor do fatorial daquele número.
*/

#include <stdio.h>
#include <limits.h>

long long fatorial(int numero){
	long long fatorial = numero;
	for(numero = numero-1 ; numero > 1 ; numero--){
		fatorial = fatorial * numero;
	}
	return fatorial;
}

int main(){

	int numero;

	printf("\nDigite um numero: ");
	scanf("%d", &numero);

	printf("O fatorial do numero %d eh: %lu \n", numero, fatorial(numero));

	return 0;
}
