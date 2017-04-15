#include <stdio.h>
#include <stdlib.h>

#define quantidadeDeNumerosDaSequencia 20
#define first 1
#define second 1

int Fibonacci_Recursive(int termo){
	int valor;
	if(termo == 0)
		return 1;
	else if(termo ==1)
		return 1;
	else
		return (Fibonacci_Recursive(termo-1)+Fibonacci_Recursive(termo-2));
}

void Fibonacci_For_Loop(){
	int i, somatoria = 0, anterior;

	somatoria = first + second;
	anterior = second;

	printf("\n%d", first);
	printf("\n%d", second);

	for(i=3 ; i<quantidadeDeNumerosDaSequencia ; i++)
	{
		printf("\n%d", somatoria);
		somatoria += anterior;
		anterior = somatoria-anterior;
	}
}

int main(){
	
	system("cls");
	
	int termo;

	printf("Imrpimindo os %d primeiros numeros da sequencia de Fibonacci: \n", quantidadeDeNumerosDaSequencia);
	Fibonacci_For_Loop();

	return 0;

}

