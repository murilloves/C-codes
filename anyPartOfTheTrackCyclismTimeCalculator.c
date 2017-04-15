/*
	15. João e Maria estão andando em uma pista de ciclismo com 3 Km de comprimento e
	com velocidades de 10 m/s e 15 m/s, respectivamente. Escreva um algoritmo que
	determine o tempo que levará para que o casal se encontre. Sabe-se que eles
	partiram de pontos iniciais diferentes, estes entrados pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

#define tamanhoDaPista 3000

void clean_cmd(){
	system("cls");
}

void wait_for_user(){
	getchar();
	getchar();
}

float calcula_tempo(int velocidadeJoao, int velocidadeMaria, float distanciaRelativa){
	float tempo;
	tempo = distanciaRelativa / (velocidadeJoao + velocidadeMaria);
	return tempo;
}

int calcula_distancia(int posicaoJoao, int posicaoMaria){
	if (posicaoJoao == tamanhoDaPista && posicaoMaria == 0 || posicaoMaria == tamanhoDaPista && posicaoJoao == 0 )
	{
		return (tamanhoDaPista);
	}
	else if( posicaoJoao == posicaoMaria)
	{
		return (tamanhoDaPista);
	}
	else if (posicaoJoao > posicaoMaria)
	{
		return tamanhoDaPista - (posicaoJoao - posicaoMaria);
	}
	return posicaoMaria - posicaoJoao;
}

void valida_posicao(float posicao){
	if (posicao < 0 || posicao > tamanhoDaPista)
	{
		printf("Posicao invalida!\n");
		exit(0);
	}
}

int main(){

	int posicaoJoao, posicaoMaria, distanciaRelativa;
	int velocidadeJoao = 10, velocidadeMaria = 15;
	float tempo;

	clean_cmd();

	printf("Qual a posicao de Joao na pista de ciclismo? (entre 0 e %d): ", tamanhoDaPista);
	scanf("%d", &posicaoJoao);
	valida_posicao(posicaoJoao);

	printf("Qual a posicao de Maria na pista de ciclismo? (entre 0 e %d): ", tamanhoDaPista);
	scanf("%d", &posicaoMaria);
	valida_posicao(posicaoMaria);

	clean_cmd();

	tempo = calcula_tempo(velocidadeJoao, velocidadeMaria, calcula_distancia(posicaoJoao, posicaoMaria));
	printf("Levara %.3f segundos para que Maria e Joao se encontrarem.\n", tempo);

	wait_for_user();

	return 0;
}
