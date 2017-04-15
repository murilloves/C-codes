/*
	7. Faça um algoritmo que calcule a média aritmética de N números, onde a quantidade N será entrada pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int calcula_media(int n){
	int novo, media = 0, i;
	for(i=1 ; i <=n ; i++){
		printf("\nDigite um numero (%d de %d): ", i, n);
		scanf("%d", &novo);
		media += novo;
	}
	return (media / n);
}

int main()
{
	
	int n;

	system("cls");

	printf("Quantidade de numeros para calcular a media: ");
	scanf("%d", &n);

	printf ("\nA media eh %d\n", calcula_media(n));

	return 0;

}
