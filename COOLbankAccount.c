/*
	17. Escreva um programa que controle uma conta bancária, apresentando quatro
	opções: (a) consulta saldo, (b) saque e (c) depósito e (d) sair. O saldo deve iniciar em
	R$ 0,00. A cada saque ou depósito o valor do saldo deve ser atualizado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define limiteSaqueDiario 1500
#define limiteDepositoDiario 3000

void espera_segundos(int TEMPO) {
    unsigned int t = time(0) + TEMPO;
    while (time(0) < t);
}
void nocao_de_espera(){
	espera_segundos(1);

	printf(". ");
	espera_segundos(1);

	printf(". ");
	espera_segundos(1);

}

void limpa_tela(){
	system("cls");
}

void espera_usuario(){
	printf("\n\n   [Aperte Enter para continuar]\n\n");
	getchar();
	getchar();
}

int app_conta_bancaria(){

	int opcao = 'z';

	limpa_tela();

	printf("<<<< APP CONTA BANCARIA >>>>\n");
	printf("\n .Informe o que deseja fazer. \n");

	printf("\nDigite 1 para Consultar saldo");
	printf("\nDigite 2 para Realizar saque");
	printf("\nDigite 3 para Realizar deposito");
	printf("\nDigite 4 para Sair");

	printf("\n\n Opcao: ");
	
	scanf("%d", &opcao);
	
	if(opcao > 0 && opcao < 5){
	} else {
		limpa_tela();
		printf("\n   OOOOPSSS, opcao invalida!!\n");
		exit(0);
	}

	return opcao;
}


void consulta_saldo(double saldo){

	printf("\nAguarde . . .\n");
	espera_segundos(1);

	limpa_tela();
	printf("\nConsultando saldo . ");
	nocao_de_espera();

	printf("\n\n  Seu saldo R$ %.2f\n", saldo);
	espera_segundos(2);

	espera_usuario();
}

float realiza_saque(float saldo){

	printf("\nAguarde . . .\n");
	espera_segundos(1);
	limpa_tela();

	printf("Quanto voce deseja sacar? \n\n   Valor R$: ");
	float saque;
	scanf("%f", &saque);

	if(saque > limiteSaqueDiario){
		printf("\nBitch, this is too much money!\n\n ALERTA: LIMITE DIARIO PARA SAQUES R$ %d.00", limiteSaqueDiario);
		espera_segundos(3);
		espera_usuario();
		return saldo;
	}
	else if (saque < 0){
		printf("\n\n ALERTA: DIGITE UM VALOR POSITIVO!");
		espera_segundos(3);
		return saldo;
	}
	else {
		printf("\nRealizando saque . ");
		nocao_de_espera();

		printf("Retire seu dinheiro");
		espera_segundos(3);
		espera_usuario();
		return (saldo - saque);
	}
	return (saldo - saque);
}

float realiza_deposito(float saldo){

	printf("\nAguarde . . .\n");
	espera_segundos(1);
	limpa_tela();

	printf("Quanto voce deseja depositar? \n\n   Valor R$: ");
	float deposito;
	scanf("%f", &deposito);

	if(deposito > limiteDepositoDiario){
		printf("\nBitch, this is too much money!\n\n ALERTA: LIMITE DIARIO PARA DEPOSITOS R$ %d.00", limiteDepositoDiario);
		espera_segundos(3);
		espera_usuario();
		return saldo;
	}
	else if (deposito < 0){
		printf("\n\n ALERTA: DIGITE UM VALOR POSITIVO!");
		espera_segundos(3);
		return saldo;
	}
	else {
		printf("\nRealizando deposito . ");
		nocao_de_espera();

		printf("Depositado com sucesso!");
		espera_segundos(2);
		espera_usuario();
		return (saldo + deposito);
	}
	return (saldo + deposito);

}

void sair(){
	printf("\n 	     Logout!       \n");
	espera_segundos(3);
	limpa_tela();
	exit (1);
}


int main(){

	int opcao;
	float saldo;

	opcao = app_conta_bancaria();

	while (opcao !=4){
		if (opcao == 1) {
			consulta_saldo(saldo);
		}
		else if (opcao == 2) {
			saldo = realiza_saque(saldo);
		}
		else if (opcao == 3) {
			saldo = realiza_deposito(saldo);
		}
		opcao = app_conta_bancaria();
	}

	if (opcao == 4) {
		sair();
	}

}

