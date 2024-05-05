 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
	
	char S[10];
	int i,j=0,tam,cont=0;
	while(scanf("%s",S) !=EOF){
		tam = strlen(S)-1;						 
			for(i=tam;i>=0;i--){
				S[i] = toupper(S[i]);
				if(tam==0){
					  cont = (S[i] -64);
				}
				else{				
					cont = ((S[i] -64)* pow(26,j))+cont; 
					 
					j++;			
				}
					  													 		 	  	
			}
			if(cont>0 && cont<=16384){
				printf("%d\n",cont); 
		    }			  			
			else{
				printf("Essa coluna nao existe Tobias!\n");
			}
			
		  	j=0;
			cont=0;		     	
	}
	
return 0;
}
