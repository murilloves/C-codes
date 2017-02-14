#include <stdio.h>
#include <sys/type.h>
#include <stdlib.h>


int main()
{
	int pid;
	pid = fork();

	if( pid < 0 )
	{
	  printf("Erro: ");
	  exit (1);
	}
	else if( pid > 0 )
	{
	  exit (0);
	}
	else
	{
	  sleep (10);
	}
	printf("Tchau BARRA ENE");
}

