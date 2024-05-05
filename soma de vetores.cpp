#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main (void){
		
	int n,i,j=0;
	int v1[MAX], v2[MAX];
	int soma[MAX], inter[2*MAX];
		
	printf("Digite o numero de elementos: ");
	scanf("%d",&n);
	if(n>100){
		printf("Erro no progama");
		exit(-1);
	}	
	for(i=0;i<n;i++){
		printf("v1[%d]",i+1);
		scanf("%d", &v1[i]);
		soma[i]= v1[i];
		inter[j] = v1[i];
	}
	j=1;
	for(i=0;i<n;i++){
		printf("v2[%d]",i+1);
		scanf("%d", &v2[i]);
		soma[i]+= v2[i];
		inter[j] = v2[i];
	}
		
	
	for(i=0;i<n;i++){	
		printf("%d",soma[i]);
	 printf("\n");
    }
    for(i=0;i<2*n;i++){
    	printf("%d",inter[i]);
   	
	}
		
	getchar();	
		
		return 0;
	}
