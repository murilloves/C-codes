#include <stdio.h>
#include <stdlib.h>

int cubes(int n,int c){
     if(c==0) return n;     
	else if(c>0)
	{
	return n*(cubes(n, c-1));
	}
     return 0;
}

int main(){
    
    int n,c=2;
    
while(n>0)
    {
    scanf("%d",&n);

	printf("%d",cubes(n,c));
    }
    exit(0);
}

