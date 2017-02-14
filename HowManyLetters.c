#include <stdio.h>
/*
int letras(char *pl){
    int i=0;
	while(pl[i]!='\0'){
		i++;
	}
    return i;
}
*/
int main(){
	char palavra[100];
	int i=0;
	while(palavra[i-1]!='\n'){
	  scanf("%c",&palavra[i]);
	  i++;
	}
i--;
	printf("A palavra tem %d letras",i);
}

