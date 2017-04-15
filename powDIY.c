/*
11. Faça um algoritmo que seja capaz de obter o resultado de uma exponenciação para
qualquer base e expoente inteiros positivos fornecidos, sem utilizar a operação de
exponenciação.
*/

#include <stdio.h>
#include <stdlib.h>

int function_pow(int base, int expoente){
	int i, pow = 1;
	for(i=1 ; i<=expoente ; i++){
		pow = pow *base;
	}
	return pow;
}

int main(){

	int base, expoente;

	system("cls");

	printf("--- PARA SAIR DIGITE '0' ---\n\n");
	printf("Informe a base: ");
	scanf("%d", &base);

	if(base == 0)
		exit (0);

	printf("Informe o expoente: ");
	scanf("%d", &expoente);


	printf("\n%d ^ %d = %d\n\n", base, expoente, function_pow(base,expoente));
	getchar(); 	getchar();

	main();

}
