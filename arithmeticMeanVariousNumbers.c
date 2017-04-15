/*
	8. Faça um algoritmo que calcule a média aritmética de N números,
	onde a quantidade N será entrada pelo usuário. O algoritmo deve
	encerrar quando o número –999 for digitado.
*/

#include <stdio.h>
#include <stdlib.h>

int calcula_media(){
	printf("\n(Para sair, digite o numero -999)\n");
	int novo = 0, media = 0, i = 1;
	while(novo != -999){
		printf("\n%d) Digite um numero: ", i);
		scanf("%d", &novo);
		i++;
		media += novo;
	}
	media += 999;
	i -= 2;
	return (media / i);
}

int main()
{
	
	system("cls");

	printf ("\nA media dos numeros digitados eh %d\n", calcula_media());

	return 0;

}
