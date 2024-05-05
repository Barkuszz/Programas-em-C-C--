#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



typedef struct{
	int x;
	int y;
}tcoordenada;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	tcoordenada coordenada;
	
	do{
		printf("\nDigite a coordenada do X : ");
		scanf("%d",&coordenada.x);
		printf("\nDigite a coordenada de Y : ");
		scanf("%d",&coordenada.y);
		
		if(coordenada.x>0 && coordenada.y>0) printf("\nQuadrante I");		
		else if(coordenada.x<0 && coordenada.y>0) printf("\nQuadrante II");
		else if(coordenada.x<0 && coordenada.y<0) printf("\nQuadrante III");
		else if(coordenada.x>0 && coordenada.y<0) printf("\nQuadrante IV");
		
		else if(coordenada.x ==0 && coordenada.y != 0 || coordenada.x !=0 && coordenada.y == 0){
			printf("\nPonto sobre os eixos.\n");
		} 
			
	}while(coordenada.x != 0 || coordenada.y !=0);
	
system("pause");	
return 0;	
}



