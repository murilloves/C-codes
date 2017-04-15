#include <stdio.h>
#include <stdlib.h>

#define quantidadeDeNumerosDaSequencia 20
#define first = 1
#define second = 1

int Fibonacci_Recursive(int quantidadeDeNumerosDaSequencia){
	int valor;
	if(termo == 0)
		return 1;
	else if(termo ==1)
		return 1;
	else
		return (Fibonacci_Recursive(termo-1)+Fibonacci_Recursive(termo-2));
}

void Fibonacci_For_Loop(int termo){
	int i, somatoria = 0, anterior;

	if(termo == 1 || termo == 2)
		return 1;

	somatoria = first + second;
	anterior = second;

	printf("\n%d", first);
	printf("\n%d", second);

	for(i=3 ; i<termo ; i++)
	{
		printf("\n%d", somatoria);
		somatoria += anterior;
		anterior = somatoria-anterior;
	}
}

int main(){
	
	system("cls");
	
	int termo;

	printf("\nDigite um elemento da sequencia de Fibonacci: ");
	scanf("%d", &termo);

	if(termo<1)
	{
		printf("Digite um numero maior que zero! ");
		getchar(); 	getchar();
		system("cls");
		main();
	}
	else
	{
		Fibonacci_For_Loop(termo);
	}

	return 0;

}

