/*
	5. Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20. Considere que Centimetro = Polegada * 2.54
*/

#include <stdio.h>

#define minimo 1
#define maximo 20
#define polegada 2.54

void tabela_de_conversao(){
	int i;
	float centimetros;
	for (i=minimo ; i<=maximo ; i++){
		centimetros = i * polegada;
		if(i==1)
			printf("\n%d polegada = %.2f centimetros", i, centimetros);
		else
			printf("\n%d polegadas = %.2f centimetros", i, centimetros);
	}
}

int main(){

	tabela_de_conversao();

}