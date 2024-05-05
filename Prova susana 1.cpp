#include <stdio.h>

int main() {
	
	int i,q=0;
	int numeros,soma=0,soma2=1;
	
  scanf("%d",&numeros);
   int n[numeros];
	for(i=0;i<numeros;i++){
	    scanf("%d",&n[i]);
			
	}
	int dive[numeros];
  for(i=0;i<numeros;i++){
  	if(n[i] % 8 == 0 || n[i] % 2 ==0){
    	if(n[i] % 8== 0){		
	 		dive[q] = n[i];
	     	printf("divisiveis por 8 :%d\n",dive[q]);     	 
			soma = dive[q] + soma;			
			q++;
		}
		if(n[i] % 2 == 0){
   			soma2 = n[i] * soma2;
   			printf("|%d|",n[i]);
		}
	}
  } 
   
    
  
  printf("soma dos divisiveis por 8 : %d\n",soma);
  printf("o produtorio dos numeros pares eh : %d",soma2);    
	
	
	return 0;
}
