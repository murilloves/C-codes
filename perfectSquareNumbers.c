/*
	12. Seja a seguinte série: "1, 4, 9, 16, 25, 36, ...", escreva um algoritmo que gere esta
	série até o enésimo termo. Este enésimo termo é digitado pelo usuário.
*/


#include <stdio.h>
#include <stdlib.h>

void function_pow2(int enesimo){
	int i, pow = 1;
	for(i=1 ; i<=enesimo ; i++){
		printf("%d, ", i*i);
	}
	printf("...\n");
}

int main(){

	int enesimo;

	system("cls");

	printf("--- PARA SAIR DIGITE '0' ---\n\n");
	printf("Informe a quantidade de numeros para a sequencia: ");
	scanf("%d", &enesimo);

	if(enesimo == 0)
		exit (0);

	function_pow2(enesimo);
	getchar(); 	getchar();

	main();

}

