/*
	19. Escreva um programa que solicita 5 números ao usuário e ao final mostre os dois
	maiores números digitados pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, numero, segundoMaior, primeiroMaior, auxiliar, quantidadeDeImpares = 0;

	for(i=1 ; i<=5 ; i++){
		printf("\n%d) Numero: ", i);
		scanf("%d", &numero);

		if(i==1){
			primeiroMaior = segundoMaior;
		}

		if(primeiroMaior < segundoMaior){
			auxiliar = primeiroMaior;
			primeiroMaior = segundoMaior;
			segundoMaior = auxiliar;
		}

		if(numero >= primeiroMaior) {
			segundoMaior = primeiroMaior;
			primeiroMaior = numero;
		} else if(numero > segundoMaior) {
			segundoMaior = numero;
		}


	}

	printf("\n\nOs dois maiores numeros foram %d e %d\n\n", segundoMaior, primeiroMaior);
	exit(0);

	return 0;
}

/*
	if (quantidadeDeImpares == 0)
	{
		printf("\nO usuario nao digitou nenhum numero impar\n");
		exit(0);
	} else if (quantidadeDeImpares == 1){
		printf("\nO unico numero impar foi %d\n", primeiroMaior);
		exit(0);
	} else {
		printf("\n\nOs dois maiores numeros impares foram %d e %d\n\n", segundoMaior, primeiroMaior);
		exit(0);
	}
*/