/*
	19. Escreva um programa que solicita 5 números ao usuário e ao final mostre os dois
	maiores números digitados pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, numero, segundoMaior, primeiroMaior;

	for(i=1 ; i<=5 ; i++){
		printf("\n%d) Numero: ", i);
		scanf("%d", &numero);

		if(i<3){
			if(i==1){
				primeiroMaior = numero;
			}
			if(i==2){
				if(numero > primeiroMaior){
					segundoMaior = primeiroMaior;
					primeiroMaior = numero;
				}
				else{
					segundoMaior = numero;
				}
			}
		} else {
			if( segundoMaior <= primeiroMaior && primeiroMaior <= numero ){
				segundoMaior = primeiroMaior;
				primeiroMaior = numero;
			} else if ( segundoMaior < numero ){
				segundoMaior = numero;
			}
		}
	}

	printf("\n\nOs dois maiores numeros foram %d e %d\n\n", segundoMaior, primeiroMaior);

	return 0;
}
