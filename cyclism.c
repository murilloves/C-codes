/*
	14. João e Maria estão andando em uma pista de ciclismo com 3 Km de comprimento e
	com velocidades de 10 m/s e 15 m/s, respectivamente. Escreva um algoritmo que
	determine o tempo que levará para que o casal se encontre. Sabe-se que eles
	partiram de um mesmo ponto inicial, porém em sentido contrário.
*/

#include <stdio.h>
#include <stdlib.h>

void clean_cmd(){
	system("cls");
}

void wait_for_user(){
	getchar();
}

int calcula_tempo(int velocidadeJoao, int velocidadeMaria, int distanciaRelativa){
	int tempo;
	tempo = distanciaRelativa/ (velocidadeJoao + velocidadeMaria);
	return tempo;
}


int main(){

	int velocidadeJoao = 10, velocidadeMaria = 15;
	int distanciaRelativa = 3000;

	clean_cmd();
	printf("Levara %d segundos para que Maria e Joao se encontrarem.\n", calcula_tempo(velocidadeJoao, velocidadeMaria, distanciaRelativa));

	wait_for_user();

	return 0;
}
