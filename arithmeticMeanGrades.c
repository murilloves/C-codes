/*
	9. Faça um algoritmo que calcule a média aritmética de N notas, onde a quantidade N
	será entrada pelo usuário. Não aceite notas fora do intervalo 0-10.
*/

#include <stdio.h>
#include <stdlib.h>

float calcula_media(int n){
	float novo, media = 0;
	int i;
	for(i=1 ; i <=n ; i++){
		printf("Digite uma nota (%d de %d): ", i, n);
		scanf("%f", &novo);
		if(novo >= 0 && novo <= 10){
			media += novo;
		}
		else {
			printf("\n ###############################################");
			printf("\n ######                                   ######");
			printf("\n ###### ATENCAO, Digite uma nota valida!! ######");
			printf("\n ######                                   ######");
			printf("\n ###############################################\n\n");
			i--;
		}
	}
	return (media / n);
}

int main()
{
	
	int n;

	system("cls");

	printf("Quantidade de notas para calcular a media: ");
	scanf("%d", &n);

	printf ("\nA media das notas eh %.2f\n", calcula_media(n));

	return 0;

}
