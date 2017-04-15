/*
	10. Faça um algoritmo que responda se um número X entrado pelo usuário é primo ou não.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int se_primo(int numero){

	if(numero == 0)
		return FALSE;
	if(numero == 1)
		return FALSE;
	if(numero == 2)
		return TRUE;

	int i, j;
	int sqrt_numero = sqrt(numero);

	if (numero % 2 == 0)
	{
		return FALSE;
	}

	for(i=2; i<=sqrt_numero+1; i++){
		for(j=2; j<= numero/2; j++){
			// printf("i = %d , j = %d\n", i, j);
			if(numero == i*j){
				return FALSE;
			}
		}
	}

	return TRUE;
}

int main(){

	int numero;

	system("cls");
	printf("Digite um numero para sabermos se ele eh primo ou nao: ");
	scanf("%d", &numero);

	if(numero < 0){
		printf("Por favor, digite um numero positivo!\n");
		getchar(); getchar();
		main();
	}

	if(se_primo(numero)){
		printf("\nO numero %d eh primo (y)\n", numero);
	}
	else{
		printf("\nO numero %d nao eh primo (n)\n", numero);
	}

	getchar(); getchar();
	main();

	return 0;
}