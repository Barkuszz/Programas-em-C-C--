#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
	float x,y,z;
}tcoordenada;

int main(){
	setlocale(LC_ALL,"portuguese");
	
    tcoordenada ponto;
    float A,B,C,D;
    printf("Digite as coordenadas do eixo no plano : \n");
    
    printf("X : ");
    scanf("%f",&ponto.x);
    printf("Y : ");
    scanf("%f",&ponto.y);
    printf("Z : ");
    scanf("%f",&ponto.z);
     
    printf("Digite o coeficientes : \n");
    printf("A : ");
    scanf("%f",&A);
    printf("B : ");
    scanf("%f",&B);
    printf("C : ");
    scanf("%f",&C);
    printf("D : ");
    scanf("%f",&D);
    
	/* A equação dada pela senhora estava incorreta */
	/* A equação correta seria : A*ponto.x + B*ponto.y + C*ponto.z + D = 0 */
	
	if(A*ponto.x + B*ponto.y + C*ponto.z + D == 0){
		printf("\n O ponto pertence ao plano!\n
	else{
		printf("\nO ponto não pertence ao plano!\n");
	} 
		    
system("pause");
return 0;	
}
