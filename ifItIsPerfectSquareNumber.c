/*
	13. Seja a seguinte série: "1, 4, 9, 16, 25, 36, ...", escreva um algoritmo que verifique se
	um inteiro positivo N faça parte desta sequência.
*/


#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int function_pow2(int numeroEstaNaSerie){
	int i, pow = 1;
	for(i=1 ; i<=enesimo ; i++){
		printf("%d, ", i*i);
	}
	return FALSE;
}

int main(){

	int numeroEstaNaSerie;

	system("cls");

	printf("--- PARA SAIR DIGITE '0' ---\n\n");
	printf("Informe a quantidade de numeros para a sequencia: ");
	scanf("%d", &enesimo);

	if(numeroEstaNaSerie == 0)
		exit (0);

	function_pow2(numeroEstaNaSerie);
	getchar(); 	getchar();

	main();

}

