#include <stdio.h>
#include <stdlib.h>

int a = 5;

int** MultiplicaMatriz(int** A; int**B)
{
	int** C;
	int i,j,k;
	for(i=0; i</*Linhas de A*/; i++)
	    for(j=0; j</*Colunas de B*/; j++)
		C[i][j]=0;

	for(i=0; i</*Linhas de A*/; i++)
	    for(j=0; j</*Colunas de B*/; j++)
		for(k=0; k</*Linhas de B OR Colunas de A*/; k++)
		    C[i][j] = C[i][j] + A[i][k]*B[k][j];
	return(C);
}

int fun1()
{
   a = 17;
   return 3;
}

void fun2()
{
   a = a + fun1();
}

int main()
{
	fun2();
	printf("%d                    ",a);
}
/*
	a  b  =  1 2  * -1 0

	c  d  =  2 0     4 3

a = -7
b =  6
c = -2
d =  0

a = M1[0][0]* M2[0][0];
a = M1[0][1]* M2[1][0] + a;

b = M1[0][0]* M2[0][1];
b = M1[0][1]* M2[1][1] + b;

c = M1[1][0]* M2[0][0];
c = M1[1][1]* M2[1][0] + c;

d = M1[1][0]* M2[0][1];
d = M1[1][1]* M2[1][1] + d;

passo1: i=0,j=0,k=0 => C[0][0]= C[0][0] + A[0][0]*B[0][0]
passo2: i=0,j=0,k=1 => C[0][0]= C[0][0] + A[0][1]*B[1][0]

passo3: i=0,j=1,k=0 => C[0][1]= C[0][1] + A...
*/

