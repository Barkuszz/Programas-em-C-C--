#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,j,cont,ts=-1;
	int l;
	int **matriz;
	printf("digite a dimes�o da matriz : ");
  	scanf("%d",&l);
  	
  	
	
	matriz= (int**)malloc(l*sizeof(int*));
	for(i=0;i<l;i++){
		matriz[i]=(int*)malloc(l*sizeof(int));	
	}
		
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf("preencha a matriz[%d][%d] : ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");	
	}
	for(i=0;i<l;i++){
		for(j=i;j<l;j++){
			if(i>j && matriz[i][j] ==0){
			 ts=0; //se 0 ent � flaso	
			}
	 
		}	
	}
	if(ts){
		printf("\n\n � triangular superior\n\n");
	}
	else{
		printf("\n\n N�o � triangular superior\n\n");
	}
	for(i=0;i<l;i++){
		free(matriz[i]);
	}
	
	
	return 0;
}
