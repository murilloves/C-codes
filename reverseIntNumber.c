/*
	16. Faça um algoritmo que receba um número e imprima este número invertido. Ex:
	12345 se torna 54321, 142 se torna 241.
*/

#include <stdio.h>
#include <stdlib.h>

int quantidade_de_digitos(int numero){
	int quantidadeDeDigitos = 1;
	while(numero/10 != 0){
		numero = numero / 10;
		quantidadeDeDigitos ++;
	}
	return quantidadeDeDigitos;
}

int potencia(int expoente){
	int i;
	int potencia = 1;
	for (i = 1; i < expoente; i++)
	{
		potencia = potencia * 10;
	}
	return potencia;
}

int inverte_numero(int numero, int quantidadeDeDigitos){
	int i, resultado = 0;
	int quantidadeDeIteracoes = quantidadeDeDigitos;

	for (i=1 ; i<= quantidadeDeIteracoes ; i++) {

		quantidadeDeDigitos--;
		resultado = resultado + potencia(i) * (numero / potencia (quantidade_de_digitos(numero)));

		numero = numero % potencia (quantidadeDeDigitos+1);
	}
	return resultado;
}

void clean_cmd(){
	system("cls");
}

int main(){

	clean_cmd();

	int numero;

	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	printf("\n%d invertido fica %d \n\n", numero, inverte_numero(numero, quantidade_de_digitos(numero)));

	return 0;
}
