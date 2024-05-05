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

	int matriz[linhas][colunas];
	
    printf("************ Matriz fonte ************\n\n");
    
	for(i = 0; i<linhas;i++){         //indice da linha
		for(j = 0; j<colunas;j++){    //indice da coluna
			printf("digite o elemento da Matriz[%d][%d] : ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	int maior1;
	int maior2;
	int negativos,produto=1;
	maior2 = maior1;
	maior1 = matriz[0][0];
	maior2 = matriz[0][0];
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			if(maior1 < matriz[i][j]){
				maior2 = maior1;
				maior1 = matriz[i][j];
			}
			if(matriz[i][j] < 0){
				negativos++;
			}
			produto = produto * matriz[i][j];			
		}
	}
	printf("O maior valor é : [%d] \nO segundo maior falor é : [%d]\n",maior1,maior2);
	printf("A quantidade de valores negativos é : [%d]\n",negativos);	
	printf("O produto dos elementos da matriz é : %d",produto);
	
return 0;
}
