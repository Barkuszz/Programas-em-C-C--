#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int linhas,colunas;
	int i,j;
	printf("digite a quantidade de linhas da Matrizes : ");
	scanf("%d",&linhas);
	printf("digite a quantidade de colunas da Matrizes : ");
	scanf("%d",&colunas);
	

	
	int matrizA[linhas][colunas];
    printf("************ Primeira Matriz ************\n\n");
	for(i = 0; i<linhas;i++){         //indice da linha
		for(j = 0; j<colunas;j++){    //indice da coluna
			printf("MatrizA[%d][%d] : ",i,j);
			scanf("%d",&matrizA[i][j]);
		}
	}
	int matrizB[linhas][colunas];
	printf("\n\n************ Agora a outra matriz  ************\n\n");
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("MatrizB[%d][%d] : ",i,j);
				scanf("%d",&matrizB[i][j]);
		}
	}
	int matrizresultado1[linhas][colunas];
	int matrizresultado2[linhas][colunas];
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			matrizresultado1[i][j] = matrizA[i][j] + matrizB[i][j];
			matrizresultado2[i][j] = matrizA[i][j] - matrizB[i][j];
		}
		
	}
	printf("************* Resultados ************\n\n"); 
	 
	printf("A soma das matrizes é : \n\n");
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){		
			printf("[%d]",matrizresultado1[i][j]);			
		}
		printf("\n");
	}
	printf("\n");
	printf("A subtração das matrizes é : \n\n");
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){	
			printf("[%d]",matrizresultado2[i][j]);			
		}
		printf("\n");
	}
			
		
		

	
return 0;
}
